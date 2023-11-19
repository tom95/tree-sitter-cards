module.exports = grammar({
  name: 'cards',

  supertypes: $ => [$.expression],
  extras: $ => [/[\s\p{Zs}\uFEFF\u2060\u200B]/],
  inline: $ => [$.statement],

  rules: {
    game: $ => sep($.statement, '.'),

    statement: $ => choice(
      $.group,
      $.sequence,
      $.object,
      $.pool,
    ),

    group: $ => seq('Group', $.identifier, seq('[', sep($.statement, '.'), ']')),

    object: $ => seq('Object', $.identifier, '[', sep($.statement, '.'), ']'),

    pool: $ => seq('Pool', $.identifier, '[', repeat($.pool_initializer), ']'),

    sequence: $ => sep1($.card, ','),

    card: $ => seq(field('name', $.identifier), optional($.resources), $.arguments, optional($.scope)),

    resources: $ => seq('[', sep(choice($.identifier, $.wildcard), ','),']'),

    scope: $ => seq('[', sep1($.sequence, '.'), ']'),

    expression: $ => choice(
      $.identifier,
      $.call,
      $.number,
      $.string,
      $.duration,
      $.binary_expression,
      $.wildcard,
    ),

    string: ($) => token(seq("'", /([^']|'')*/, "'")),
    pool_initializer: $ => seq($.identifier, ':', $.number),
    wildcard: $ => '*',
    number: $ => /[0-9]+(\.[0-9]*)?/,
    duration: $ => seq($.number, $.duration_specifier),
    duration_specifier: $ => choice('s', 'ms', 'm'),
    call: $ => prec(2, seq($.identifier, $.arguments)),
    arguments: $ => seq('(', sep($.expression, ','), ')'),
    binary_expression: $ => prec.left(1, seq($.expression, choice('+', '-', '>', '<', '<=', '>=', '=', '/', '*'), $.expression)),

    identifier: $ => {
      const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      return token(seq(alpha, repeat(alphanumeric), repeat('\'')))
    },
  }
});

function sep1(rule, char) {
  return seq(rule, repeat(seq(char, rule)), optional(char));
}

function sep(rule, char) {
  return optional(sep1(rule, char));
}
