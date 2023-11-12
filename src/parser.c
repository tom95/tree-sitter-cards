#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOT = 1,
  anon_sym_Group = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_Object = 5,
  anon_sym_Pool = 6,
  anon_sym_COMMA = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COLON = 10,
  anon_sym_STAR = 11,
  sym_number = 12,
  anon_sym_s = 13,
  anon_sym_ms = 14,
  anon_sym_m = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_GT = 18,
  anon_sym_LT = 19,
  anon_sym_EQ = 20,
  anon_sym_SLASH = 21,
  sym_identifier = 22,
  sym_game = 23,
  sym_group = 24,
  sym_object = 25,
  sym_pool = 26,
  sym_sequence = 27,
  sym_card = 28,
  sym_scope = 29,
  sym_expression = 30,
  sym_pool_initializer = 31,
  sym_wildcard = 32,
  sym_duration = 33,
  sym_duration_specifier = 34,
  sym_call = 35,
  sym_arguments = 36,
  sym_binary_expression = 37,
  aux_sym_game_repeat1 = 38,
  aux_sym_pool_repeat1 = 39,
  aux_sym_sequence_repeat1 = 40,
  aux_sym_card_repeat1 = 41,
  aux_sym_scope_repeat1 = 42,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [sym_number] = "number",
  [anon_sym_s] = "s",
  [anon_sym_ms] = "ms",
  [anon_sym_m] = "m",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_game] = "game",
  [sym_group] = "group",
  [sym_object] = "object",
  [sym_pool] = "pool",
  [sym_sequence] = "sequence",
  [sym_card] = "card",
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
  [aux_sym_card_repeat1] = "card_repeat1",
  [aux_sym_scope_repeat1] = "scope_repeat1",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_number] = sym_number,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_game] = sym_game,
  [sym_group] = sym_group,
  [sym_object] = sym_object,
  [sym_pool] = sym_pool,
  [sym_sequence] = sym_sequence,
  [sym_card] = sym_card,
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
  [aux_sym_card_repeat1] = aux_sym_card_repeat1,
  [aux_sym_scope_repeat1] = aux_sym_scope_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [aux_sym_card_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(47);
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(45);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 's') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 's') ADVANCE(25);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(9)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(50);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == 'G') ADVANCE(47);
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(15);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(10)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(50);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_Group);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_Object);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_Pool);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 's') ADVANCE(28);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(41);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(48);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(39);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'j') ADVANCE(40);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'l') ADVANCE(17);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'o') ADVANCE(49);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'o') ADVANCE(42);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'o') ADVANCE(44);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(13);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(43);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 't') ADVANCE(16);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'u') ADVANCE(46);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 9},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_game] = STATE(86),
    [sym_group] = STATE(77),
    [sym_object] = STATE(77),
    [sym_pool] = STATE(77),
    [sym_sequence] = STATE(77),
    [sym_card] = STATE(42),
    [anon_sym_Group] = ACTIONS(3),
    [anon_sym_Object] = ACTIONS(5),
    [anon_sym_Pool] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(15), 1,
      anon_sym_m,
    STATE(30), 1,
      sym_duration_specifier,
    ACTIONS(13), 2,
      anon_sym_s,
      anon_sym_ms,
    ACTIONS(11), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [22] = 3,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_arguments,
    ACTIONS(11), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [40] = 7,
    ACTIONS(3), 1,
      anon_sym_Group,
    ACTIONS(5), 1,
      anon_sym_Object,
    ACTIONS(7), 1,
      anon_sym_Pool,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_card,
    STATE(80), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [65] = 4,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_card_repeat1,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [84] = 7,
    ACTIONS(3), 1,
      anon_sym_Group,
    ACTIONS(5), 1,
      anon_sym_Object,
    ACTIONS(7), 1,
      anon_sym_Pool,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_card,
    STATE(80), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [109] = 7,
    ACTIONS(3), 1,
      anon_sym_Group,
    ACTIONS(5), 1,
      anon_sym_Object,
    ACTIONS(7), 1,
      anon_sym_Pool,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_card,
    STATE(80), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [134] = 7,
    ACTIONS(3), 1,
      anon_sym_Group,
    ACTIONS(5), 1,
      anon_sym_Object,
    ACTIONS(7), 1,
      anon_sym_Pool,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_card,
    STATE(80), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [159] = 4,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_card_repeat1,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [178] = 7,
    ACTIONS(3), 1,
      anon_sym_Group,
    ACTIONS(5), 1,
      anon_sym_Object,
    ACTIONS(7), 1,
      anon_sym_Pool,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_card,
    STATE(80), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [203] = 7,
    ACTIONS(3), 1,
      anon_sym_Group,
    ACTIONS(5), 1,
      anon_sym_Object,
    ACTIONS(7), 1,
      anon_sym_Pool,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_card,
    STATE(73), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [228] = 7,
    ACTIONS(3), 1,
      anon_sym_Group,
    ACTIONS(5), 1,
      anon_sym_Object,
    ACTIONS(7), 1,
      anon_sym_Pool,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_card,
    STATE(66), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [253] = 7,
    ACTIONS(3), 1,
      anon_sym_Group,
    ACTIONS(5), 1,
      anon_sym_Object,
    ACTIONS(7), 1,
      anon_sym_Pool,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_card,
    STATE(80), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [278] = 2,
    ACTIONS(45), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [292] = 1,
    ACTIONS(47), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [304] = 1,
    ACTIONS(49), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [316] = 6,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    STATE(25), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [338] = 6,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_expression,
    STATE(25), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [360] = 1,
    ACTIONS(61), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [372] = 6,
    ACTIONS(3), 1,
      anon_sym_Group,
    ACTIONS(5), 1,
      anon_sym_Object,
    ACTIONS(7), 1,
      anon_sym_Pool,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(42), 1,
      sym_card,
    STATE(80), 4,
      sym_group,
      sym_object,
      sym_pool,
      sym_sequence,
  [394] = 1,
    ACTIONS(63), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [406] = 1,
    ACTIONS(65), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [418] = 1,
    ACTIONS(67), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [430] = 1,
    ACTIONS(69), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [442] = 1,
    ACTIONS(11), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [454] = 6,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expression,
    STATE(25), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [476] = 6,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expression,
    STATE(25), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [498] = 6,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expression,
    STATE(25), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [520] = 1,
    ACTIONS(77), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [532] = 1,
    ACTIONS(79), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_SLASH,
  [544] = 6,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_expression,
    STATE(25), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [566] = 5,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(24), 1,
      sym_expression,
    STATE(25), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [585] = 5,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    STATE(25), 4,
      sym_wildcard,
      sym_duration,
      sym_call,
      sym_binary_expression,
  [604] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_scope,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [617] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_scope,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [630] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_scope,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [643] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_scope,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [656] = 3,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(56), 1,
      sym_card,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [668] = 3,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(56), 1,
      sym_card,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [680] = 3,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [692] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [704] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [716] = 1,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [723] = 3,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(55), 2,
      sym_pool_initializer,
      aux_sym_pool_repeat1,
  [734] = 1,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [741] = 1,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [748] = 3,
    ACTIONS(118), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_game_repeat1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
  [759] = 1,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [766] = 4,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_card,
    STATE(83), 1,
      sym_sequence,
  [779] = 1,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [786] = 4,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_card,
    STATE(83), 1,
      sym_sequence,
  [799] = 1,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [806] = 1,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [813] = 3,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(44), 2,
      sym_pool_initializer,
      aux_sym_pool_repeat1,
  [824] = 3,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(55), 2,
      sym_pool_initializer,
      aux_sym_pool_repeat1,
  [835] = 1,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [842] = 3,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_card_repeat1,
  [852] = 1,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [858] = 1,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [864] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_game_repeat1,
  [874] = 3,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(42), 1,
      sym_card,
    STATE(83), 1,
      sym_sequence,
  [884] = 1,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [890] = 3,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_scope_repeat1,
  [900] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_game_repeat1,
  [910] = 1,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [916] = 3,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_game_repeat1,
  [926] = 1,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [932] = 3,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_card_repeat1,
  [942] = 1,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [948] = 3,
    ACTIONS(167), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_scope_repeat1,
  [958] = 1,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [964] = 1,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [970] = 3,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_game_repeat1,
  [980] = 3,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(180), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_game_repeat1,
  [990] = 1,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [996] = 3,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(184), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym_scope_repeat1,
  [1006] = 3,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_game_repeat1,
  [1016] = 1,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1022] = 3,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_card_repeat1,
  [1032] = 1,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1038] = 3,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(42), 1,
      sym_card,
    STATE(63), 1,
      sym_sequence,
  [1048] = 2,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(56), 1,
      sym_card,
  [1055] = 1,
    ACTIONS(170), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1060] = 1,
    ACTIONS(194), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [1065] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [1069] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [1073] = 1,
    ACTIONS(200), 1,
      sym_identifier,
  [1077] = 1,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
  [1081] = 1,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
  [1085] = 1,
    ACTIONS(206), 1,
      sym_identifier,
  [1089] = 1,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
  [1093] = 1,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
  [1097] = 1,
    ACTIONS(212), 1,
      sym_number,
  [1101] = 1,
    ACTIONS(214), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 178,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 253,
  [SMALL_STATE(14)] = 278,
  [SMALL_STATE(15)] = 292,
  [SMALL_STATE(16)] = 304,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 338,
  [SMALL_STATE(19)] = 360,
  [SMALL_STATE(20)] = 372,
  [SMALL_STATE(21)] = 394,
  [SMALL_STATE(22)] = 406,
  [SMALL_STATE(23)] = 418,
  [SMALL_STATE(24)] = 430,
  [SMALL_STATE(25)] = 442,
  [SMALL_STATE(26)] = 454,
  [SMALL_STATE(27)] = 476,
  [SMALL_STATE(28)] = 498,
  [SMALL_STATE(29)] = 520,
  [SMALL_STATE(30)] = 532,
  [SMALL_STATE(31)] = 544,
  [SMALL_STATE(32)] = 566,
  [SMALL_STATE(33)] = 585,
  [SMALL_STATE(34)] = 604,
  [SMALL_STATE(35)] = 617,
  [SMALL_STATE(36)] = 630,
  [SMALL_STATE(37)] = 643,
  [SMALL_STATE(38)] = 656,
  [SMALL_STATE(39)] = 668,
  [SMALL_STATE(40)] = 680,
  [SMALL_STATE(41)] = 692,
  [SMALL_STATE(42)] = 704,
  [SMALL_STATE(43)] = 716,
  [SMALL_STATE(44)] = 723,
  [SMALL_STATE(45)] = 734,
  [SMALL_STATE(46)] = 741,
  [SMALL_STATE(47)] = 748,
  [SMALL_STATE(48)] = 759,
  [SMALL_STATE(49)] = 766,
  [SMALL_STATE(50)] = 779,
  [SMALL_STATE(51)] = 786,
  [SMALL_STATE(52)] = 799,
  [SMALL_STATE(53)] = 806,
  [SMALL_STATE(54)] = 813,
  [SMALL_STATE(55)] = 824,
  [SMALL_STATE(56)] = 835,
  [SMALL_STATE(57)] = 842,
  [SMALL_STATE(58)] = 852,
  [SMALL_STATE(59)] = 858,
  [SMALL_STATE(60)] = 864,
  [SMALL_STATE(61)] = 874,
  [SMALL_STATE(62)] = 884,
  [SMALL_STATE(63)] = 890,
  [SMALL_STATE(64)] = 900,
  [SMALL_STATE(65)] = 910,
  [SMALL_STATE(66)] = 916,
  [SMALL_STATE(67)] = 926,
  [SMALL_STATE(68)] = 932,
  [SMALL_STATE(69)] = 942,
  [SMALL_STATE(70)] = 948,
  [SMALL_STATE(71)] = 958,
  [SMALL_STATE(72)] = 964,
  [SMALL_STATE(73)] = 970,
  [SMALL_STATE(74)] = 980,
  [SMALL_STATE(75)] = 990,
  [SMALL_STATE(76)] = 996,
  [SMALL_STATE(77)] = 1006,
  [SMALL_STATE(78)] = 1016,
  [SMALL_STATE(79)] = 1022,
  [SMALL_STATE(80)] = 1032,
  [SMALL_STATE(81)] = 1038,
  [SMALL_STATE(82)] = 1048,
  [SMALL_STATE(83)] = 1055,
  [SMALL_STATE(84)] = 1060,
  [SMALL_STATE(85)] = 1065,
  [SMALL_STATE(86)] = 1069,
  [SMALL_STATE(87)] = 1073,
  [SMALL_STATE(88)] = 1077,
  [SMALL_STATE(89)] = 1081,
  [SMALL_STATE(90)] = 1085,
  [SMALL_STATE(91)] = 1089,
  [SMALL_STATE(92)] = 1093,
  [SMALL_STATE(93)] = 1097,
  [SMALL_STATE(94)] = 1101,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_card_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_specifier, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card, 6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(82),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card, 7),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_game_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_game_repeat1, 2), SHIFT_REPEAT(20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pool_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pool_repeat1, 2), SHIFT_REPEAT(85),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_card_repeat1, 2), SHIFT_REPEAT(33),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(61),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 7),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool_initializer, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
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
