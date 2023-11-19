#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_DOT = 1,
  anon_sym_Group = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_Object = 5,
  anon_sym_Pool = 6,
  anon_sym_COMMA = 7,
  sym_string = 8,
  anon_sym_COLON = 9,
  anon_sym_STAR = 10,
  sym_number = 11,
  anon_sym_s = 12,
  anon_sym_ms = 13,
  anon_sym_m = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_GT = 19,
  anon_sym_LT = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_GT_EQ = 22,
  anon_sym_EQ = 23,
  anon_sym_SLASH = 24,
  sym_identifier = 25,
  sym_game = 26,
  sym_group = 27,
  sym_object = 28,
  sym_pool = 29,
  sym_sequence = 30,
  sym_card = 31,
  sym_resources = 32,
  sym_scope = 33,
  sym_expression = 34,
  sym_pool_initializer = 35,
  sym_wildcard = 36,
  sym_duration = 37,
  sym_duration_specifier = 38,
  sym_call = 39,
  sym_arguments = 40,
  sym_binary_expression = 41,
  aux_sym_game_repeat1 = 42,
  aux_sym_pool_repeat1 = 43,
  aux_sym_sequence_repeat1 = 44,
  aux_sym_resources_repeat1 = 45,
  aux_sym_scope_repeat1 = 46,
  aux_sym_arguments_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_Group] = "Group",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_Object] = "Object",
  [anon_sym_Pool] = "Pool",
  [anon_sym_COMMA] = ",",
  [sym_string] = "string",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [sym_number] = "number",
  [anon_sym_s] = "s",
  [anon_sym_ms] = "ms",
  [anon_sym_m] = "m",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_game] = "game",
  [sym_group] = "group",
  [sym_object] = "object",
  [sym_pool] = "pool",
  [sym_sequence] = "sequence",
  [sym_card] = "card",
  [sym_resources] = "resources",
  [sym_scope] = "scope",
  [sym_expression] = "expression",
  [sym_pool_initializer] = "pool_initializer",
  [sym_wildcard] = "wildcard",
  [sym_duration] = "duration",
  [sym_duration_specifier] = "duration_specifier",
  [sym_call] = "call",
  [sym_arguments] = "arguments",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_game_repeat1] = "game_repeat1",
  [aux_sym_pool_repeat1] = "pool_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_resources_repeat1] = "resources_repeat1",
  [aux_sym_scope_repeat1] = "scope_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Group] = anon_sym_Group,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_Object] = anon_sym_Object,
  [anon_sym_Pool] = anon_sym_Pool,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_string] = sym_string,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_number] = sym_number,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_game] = sym_game,
  [sym_group] = sym_group,
  [sym_object] = sym_object,
  [sym_pool] = sym_pool,
  [sym_sequence] = sym_sequence,
  [sym_card] = sym_card,
  [sym_resources] = sym_resources,
  [sym_scope] = sym_scope,
  [sym_expression] = sym_expression,
  [sym_pool_initializer] = sym_pool_initializer,
  [sym_wildcard] = sym_wildcard,
  [sym_duration] = sym_duration,
  [sym_duration_specifier] = sym_duration_specifier,
  [sym_call] = sym_call,
  [sym_arguments] = sym_arguments,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_game_repeat1] = aux_sym_game_repeat1,
  [aux_sym_pool_repeat1] = aux_sym_pool_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_resources_repeat1] = aux_sym_resources_repeat1,
  [aux_sym_scope_repeat1] = aux_sym_scope_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_game] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pool] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_card] = {
    .visible = true,
    .named = true,
  },
  [sym_resources] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_pool_initializer] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_duration_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_game_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pool_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resources_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
};

static inline bool anon_sym_LPAREN_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(51);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(49);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 's') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 's') ADVANCE(25);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(10)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(54);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == 'G') ADVANCE(51);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(16);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(11)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(54);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_Group);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_Object);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_Pool);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 's') ADVANCE(28);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(45);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(52);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(43);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'j') ADVANCE(44);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(18);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(53);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(46);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(48);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'p') ADVANCE(14);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(47);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 't') ADVANCE(17);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(50);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(3);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Group] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_Object] = ACTIONS(1),
    [anon_sym_Pool] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_game] = STATE(93),
    [sym_group] = STATE(70),
    [sym_object] = STATE(70),
    [sym_pool] = STATE(70),
    [sym_sequence] = STATE(70),
    [sym_card] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Group] = ACTIONS(5),
    [anon_sym_Object] = ACTIONS(7),
    [anon_sym_Pool] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(15), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(13), 13,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [20] = 2,
    ACTIONS(19), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(17), 13,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [40] = 2,
    ACTIONS(23), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 13,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [60] = 5,
    ACTIONS(29), 1,
      anon_sym_m,
    STATE(11), 1,
      sym_duration_specifier,
    ACTIONS(27), 2,
      anon_sym_s,
      anon_sym_ms,
    ACTIONS(31), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [86] = 2,
    ACTIONS(35), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(33), 13,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [106] = 4,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_arguments,
    ACTIONS(31), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [128] = 5,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(45), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(41), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [151] = 2,
    ACTIONS(49), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 10,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [168] = 2,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [184] = 2,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [200] = 2,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [216] = 2,
    ACTIONS(31), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [232] = 3,
    ACTIONS(45), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(41), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [250] = 2,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [266] = 7,
    ACTIONS(5), 1,
      anon_sym_Group,
    ACTIONS(7), 1,
      anon_sym_Object,
    ACTIONS(9), 1,
      anon_sym_Pool,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_card,
    STATE(74), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [291] = 7,
    ACTIONS(71), 1,
      sym_string,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    STATE(13), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [316] = 7,
    ACTIONS(5), 1,
      anon_sym_Group,
    ACTIONS(7), 1,
      anon_sym_Object,
    ACTIONS(9), 1,
      anon_sym_Pool,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_card,
    STATE(74), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [341] = 7,
    ACTIONS(71), 1,
      sym_string,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expression,
    STATE(13), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [366] = 7,
    ACTIONS(5), 1,
      anon_sym_Group,
    ACTIONS(7), 1,
      anon_sym_Object,
    ACTIONS(9), 1,
      anon_sym_Pool,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_card,
    STATE(69), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [391] = 7,
    ACTIONS(5), 1,
      anon_sym_Group,
    ACTIONS(7), 1,
      anon_sym_Object,
    ACTIONS(9), 1,
      anon_sym_Pool,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_card,
    STATE(61), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [416] = 7,
    ACTIONS(5), 1,
      anon_sym_Group,
    ACTIONS(7), 1,
      anon_sym_Object,
    ACTIONS(9), 1,
      anon_sym_Pool,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_card,
    STATE(74), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [441] = 7,
    ACTIONS(5), 1,
      anon_sym_Group,
    ACTIONS(7), 1,
      anon_sym_Object,
    ACTIONS(9), 1,
      anon_sym_Pool,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_card,
    STATE(74), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [466] = 7,
    ACTIONS(71), 1,
      sym_string,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_expression,
    STATE(13), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [491] = 7,
    ACTIONS(5), 1,
      anon_sym_Group,
    ACTIONS(7), 1,
      anon_sym_Object,
    ACTIONS(9), 1,
      anon_sym_Pool,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_card,
    STATE(74), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [516] = 7,
    ACTIONS(5), 1,
      anon_sym_Group,
    ACTIONS(7), 1,
      anon_sym_Object,
    ACTIONS(9), 1,
      anon_sym_Pool,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_card,
    STATE(74), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [541] = 6,
    ACTIONS(71), 1,
      sym_string,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    STATE(13), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [563] = 6,
    ACTIONS(5), 1,
      anon_sym_Group,
    ACTIONS(7), 1,
      anon_sym_Object,
    ACTIONS(9), 1,
      anon_sym_Pool,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(36), 1,
      sym_card,
    STATE(74), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [585] = 6,
    ACTIONS(71), 1,
      sym_string,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(15), 1,
      sym_expression,
    STATE(13), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [607] = 3,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_scope,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [620] = 3,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_scope,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [633] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [645] = 3,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(41), 1,
      sym_card,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [657] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [669] = 3,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(41), 1,
      sym_card,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [681] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [693] = 1,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [700] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(83), 1,
      sym_wildcard,
  [713] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [720] = 3,
    ACTIONS(130), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_game_repeat1,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
  [731] = 1,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [738] = 3,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(47), 2,
      sym_pool_initializer,
      aux_sym_pool_repeat1,
  [749] = 3,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(43), 2,
      sym_pool_initializer,
      aux_sym_pool_repeat1,
  [760] = 4,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_card,
    STATE(84), 1,
      sym_sequence,
  [773] = 1,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [780] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(54), 1,
      sym_wildcard,
  [793] = 3,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_pool_initializer,
      aux_sym_pool_repeat1,
  [804] = 1,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [811] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      sym_wildcard,
  [824] = 4,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_arguments,
    STATE(81), 1,
      sym_resources,
  [837] = 1,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [844] = 4,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_card,
    STATE(84), 1,
      sym_sequence,
  [857] = 3,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_resources_repeat1,
  [867] = 3,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_resources_repeat1,
  [877] = 3,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(36), 1,
      sym_card,
    STATE(84), 1,
      sym_sequence,
  [887] = 3,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [897] = 1,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [903] = 3,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_scope_repeat1,
  [913] = 1,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [919] = 1,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [925] = 3,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_game_repeat1,
  [935] = 1,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [941] = 3,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(186), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_game_repeat1,
  [951] = 1,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [957] = 1,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [963] = 3,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(192), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_game_repeat1,
  [973] = 3,
    ACTIONS(194), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_scope_repeat1,
  [983] = 1,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [989] = 3,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_game_repeat1,
  [999] = 3,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_game_repeat1,
  [1009] = 3,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(83), 1,
      sym_wildcard,
  [1019] = 1,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1025] = 3,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_resources_repeat1,
  [1035] = 1,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1041] = 3,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(36), 1,
      sym_card,
    STATE(58), 1,
      sym_sequence,
  [1051] = 1,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1057] = 1,
    ACTIONS(218), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1063] = 3,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1073] = 3,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_game_repeat1,
  [1083] = 3,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(67), 1,
      aux_sym_scope_repeat1,
  [1093] = 2,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_arguments,
  [1100] = 1,
    ACTIONS(227), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [1105] = 1,
    ACTIONS(211), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1110] = 1,
    ACTIONS(197), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1115] = 2,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(41), 1,
      sym_card,
  [1122] = 1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
  [1126] = 1,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
  [1130] = 1,
    ACTIONS(233), 1,
      sym_identifier,
  [1134] = 1,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
  [1138] = 1,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
  [1142] = 1,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
  [1146] = 1,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
  [1150] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [1154] = 1,
    ACTIONS(245), 1,
      sym_identifier,
  [1158] = 1,
    ACTIONS(247), 1,
      sym_number,
  [1162] = 1,
    ACTIONS(249), 1,
      anon_sym_COLON,
  [1166] = 1,
    ACTIONS(251), 1,
      sym_identifier,
  [1170] = 1,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 250,
  [SMALL_STATE(16)] = 266,
  [SMALL_STATE(17)] = 291,
  [SMALL_STATE(18)] = 316,
  [SMALL_STATE(19)] = 341,
  [SMALL_STATE(20)] = 366,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 416,
  [SMALL_STATE(23)] = 441,
  [SMALL_STATE(24)] = 466,
  [SMALL_STATE(25)] = 491,
  [SMALL_STATE(26)] = 516,
  [SMALL_STATE(27)] = 541,
  [SMALL_STATE(28)] = 563,
  [SMALL_STATE(29)] = 585,
  [SMALL_STATE(30)] = 607,
  [SMALL_STATE(31)] = 620,
  [SMALL_STATE(32)] = 633,
  [SMALL_STATE(33)] = 645,
  [SMALL_STATE(34)] = 657,
  [SMALL_STATE(35)] = 669,
  [SMALL_STATE(36)] = 681,
  [SMALL_STATE(37)] = 693,
  [SMALL_STATE(38)] = 700,
  [SMALL_STATE(39)] = 713,
  [SMALL_STATE(40)] = 720,
  [SMALL_STATE(41)] = 731,
  [SMALL_STATE(42)] = 738,
  [SMALL_STATE(43)] = 749,
  [SMALL_STATE(44)] = 760,
  [SMALL_STATE(45)] = 773,
  [SMALL_STATE(46)] = 780,
  [SMALL_STATE(47)] = 793,
  [SMALL_STATE(48)] = 804,
  [SMALL_STATE(49)] = 811,
  [SMALL_STATE(50)] = 824,
  [SMALL_STATE(51)] = 837,
  [SMALL_STATE(52)] = 844,
  [SMALL_STATE(53)] = 857,
  [SMALL_STATE(54)] = 867,
  [SMALL_STATE(55)] = 877,
  [SMALL_STATE(56)] = 887,
  [SMALL_STATE(57)] = 897,
  [SMALL_STATE(58)] = 903,
  [SMALL_STATE(59)] = 913,
  [SMALL_STATE(60)] = 919,
  [SMALL_STATE(61)] = 925,
  [SMALL_STATE(62)] = 935,
  [SMALL_STATE(63)] = 941,
  [SMALL_STATE(64)] = 951,
  [SMALL_STATE(65)] = 957,
  [SMALL_STATE(66)] = 963,
  [SMALL_STATE(67)] = 973,
  [SMALL_STATE(68)] = 983,
  [SMALL_STATE(69)] = 989,
  [SMALL_STATE(70)] = 999,
  [SMALL_STATE(71)] = 1009,
  [SMALL_STATE(72)] = 1019,
  [SMALL_STATE(73)] = 1025,
  [SMALL_STATE(74)] = 1035,
  [SMALL_STATE(75)] = 1041,
  [SMALL_STATE(76)] = 1051,
  [SMALL_STATE(77)] = 1057,
  [SMALL_STATE(78)] = 1063,
  [SMALL_STATE(79)] = 1073,
  [SMALL_STATE(80)] = 1083,
  [SMALL_STATE(81)] = 1093,
  [SMALL_STATE(82)] = 1100,
  [SMALL_STATE(83)] = 1105,
  [SMALL_STATE(84)] = 1110,
  [SMALL_STATE(85)] = 1115,
  [SMALL_STATE(86)] = 1122,
  [SMALL_STATE(87)] = 1126,
  [SMALL_STATE(88)] = 1130,
  [SMALL_STATE(89)] = 1134,
  [SMALL_STATE(90)] = 1138,
  [SMALL_STATE(91)] = 1142,
  [SMALL_STATE(92)] = 1146,
  [SMALL_STATE(93)] = 1150,
  [SMALL_STATE(94)] = 1154,
  [SMALL_STATE(95)] = 1158,
  [SMALL_STATE(96)] = 1162,
  [SMALL_STATE(97)] = 1166,
  [SMALL_STATE(98)] = 1170,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_specifier, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_specifier, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card, 2, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card, 3, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(85),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_game_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_game_repeat1, 2), SHIFT_REPEAT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pool_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pool_repeat1, 2), SHIFT_REPEAT(96),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card, 4, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 7),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(55),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2), SHIFT_REPEAT(71),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(27),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool_initializer, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 4),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cards(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
