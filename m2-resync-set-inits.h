/* M2C resync set initialisers -- generated by gen_resync_sets.c */

#ifndef M2C_TOKENSET_LITERAL_T
#define M2C_TOKENSET_LITERAL_T

struct m2c_tokenset_literal_t { uint_t s0, s1, s2, n; };
typedef struct m2c_tokenset_literal_t m2c_tokenset_literal_t;

#endif /* M2C_TOKENSET_LITERAL_T */

#ifndef M2C_RESYNC_SET_INITS_H
#define M2C_RESYNC_SET_INITS_H

#define INIT_SKIP_TO_IMPORT_OR_DEFINITON_OR_END \
  { /* bits: */ 0x10091040, 0x00000050, 0x00000400, /* counter: */ 8 }

#define INIT_SKIP_TO_IMPORT_OR_IDENT_OR_SEMICOLON \
  { /* bits: */ 0x00080000, 0x00000200, 0x00000401, /* counter: */ 4 }

#define INIT_SKIP_TO_IDENT_OR_SEMICOLON \
  { /* bits: */ 0x00000000, 0x00000200, 0x00000401, /* counter: */ 3 }

#define INIT_SKIP_TO_COMMA_OR_SEMICOLON \
  { /* bits: */ 0x00000000, 0x20000000, 0x00000401, /* counter: */ 3 }

#define INIT_SKIP_TO_DEFINITION_OR_IDENT_OR_SEMICOLON \
  { /* bits: */ 0x10000040, 0x00000250, 0x00000401, /* counter: */ 7 }

#define INIT_SKIP_TO_DEFINITION_OR_SEMICOLON \
  { /* bits: */ 0x10000040, 0x00000050, 0x00000401, /* counter: */ 6 }

#define INIT_SKIP_TO_TYPE_OR_COMMA_OR_OF \
  { /* bits: */ 0x5A000004, 0x20000202, 0x00000450, /* counter: */ 11 }

#define INIT_SKIP_TO_SEMICOLON_OR_END \
  { /* bits: */ 0x00001000, 0x00000000, 0x00000401, /* counter: */ 3 }

#define INIT_SKIP_TO_ELSE_OR_END \
  { /* bits: */ 0x00001400, 0x00000000, 0x00000400, /* counter: */ 3 }

#define INIT_SKIP_TO_COMMA_OR_RIGHT_PAREN \
  { /* bits: */ 0x00000000, 0x20000000, 0x00000420, /* counter: */ 3 }

#define INIT_SKIP_TO_COLON_OR_SEMICOLON \
  { /* bits: */ 0x00000000, 0x80000000, 0x00000401, /* counter: */ 3 }

#define INIT_SKIP_TO_IMPORT_OR_BLOCK \
  { /* bits: */ 0x10891048, 0x00000050, 0x00000400, /* counter: */ 10 }

#define INIT_SKIP_TO_DECLARATION_OR_IDENT_OR_SEMICOLON \
  { /* bits: */ 0x10800040, 0x00000250, 0x00000401, /* counter: */ 8 }

#define INIT_SKIP_TO_DECLARATION_OR_SEMICOLON \
  { /* bits: */ 0x10800040, 0x00000050, 0x00000401, /* counter: */ 7 }

#define INIT_SKIP_TO_FIRST_OR_FOLLOW_OF_STATEMENT \
  { /* bits: */ 0x8022BC20, 0x000003A1, 0x00000409, /* counter: */ 17 }

#define INIT_SKIP_TO_ELSIF_OR_ELSE_OR_END \
  { /* bits: */ 0x00001C00, 0x00000000, 0x00000400, /* counter: */ 4 }

#define INIT_SKIP_TO_FOR_LOOP_BODY \
  { /* bits: */ 0x00000200, 0x00000000, 0x00000400, /* counter: */ 2 }

#endif /* M2C_RESYNC_SET_INITS_H */

/* END OF FILE */
