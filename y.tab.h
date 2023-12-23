/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INPUT_OP = 258,                /* INPUT_OP  */
    OUTPUT_OP = 259,               /* OUTPUT_OP  */
    SCOPE_OPEN = 260,              /* SCOPE_OPEN  */
    SCOPE_CLOSE = 261,             /* SCOPE_CLOSE  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    FOR = 264,                     /* FOR  */
    WHILE = 265,                   /* WHILE  */
    RETURN = 266,                  /* RETURN  */
    CONST = 267,                   /* CONST  */
    LITERAL = 268,                 /* LITERAL  */
    VARIABLE = 269,                /* VARIABLE  */
    ARRAY = 270,                   /* ARRAY  */
    STRING = 271,                  /* STRING  */
    COMMENT = 272,                 /* COMMENT  */
    CALL_OP = 273,                 /* CALL_OP  */
    FUNC_SIG = 274,                /* FUNC_SIG  */
    ARRAY_METHOD = 275,            /* ARRAY_METHOD  */
    INDEX_OP = 276,                /* INDEX_OP  */
    ASSIGN_OP = 277,               /* ASSIGN_OP  */
    ADD_OP = 278,                  /* ADD_OP  */
    SUBTRACT_OP = 279,             /* SUBTRACT_OP  */
    MULTI_OP = 280,                /* MULTI_OP  */
    DIV_OP = 281,                  /* DIV_OP  */
    MODULA_OP = 282,               /* MODULA_OP  */
    EXPONENT_OP = 283,             /* EXPONENT_OP  */
    BRACKET_OPEN = 284,            /* BRACKET_OPEN  */
    BRACKET_CLOSE = 285,           /* BRACKET_CLOSE  */
    EQUAL_OP = 286,                /* EQUAL_OP  */
    UNEQUAL_OP = 287,              /* UNEQUAL_OP  */
    GREATER_OP = 288,              /* GREATER_OP  */
    LESSER_OP = 289,               /* LESSER_OP  */
    GREATER_EQUAL_OP = 290,        /* GREATER_EQUAL_OP  */
    LESSER_EQUAL_OP = 291,         /* LESSER_EQUAL_OP  */
    UN_EQUAL_OP = 292,             /* UN_EQUAL_OP  */
    UN_UNEQUAL_OP = 293,           /* UN_UNEQUAL_OP  */
    UN_GREATER_OP = 294,           /* UN_GREATER_OP  */
    UN_LESSER_OP = 295,            /* UN_LESSER_OP  */
    UN_GREATER_EQUAL_OP = 296,     /* UN_GREATER_EQUAL_OP  */
    UN_LESSER_EQUAL_OP = 297,      /* UN_LESSER_EQUAL_OP  */
    SPACE = 298,                   /* SPACE  */
    COMMA_OP = 299,                /* COMMA_OP  */
    STMT_END = 300,                /* STMT_END  */
    PROGRAM_END = 301,             /* PROGRAM_END  */
    SC = 302,                      /* SC  */
    UNKNOWN = 303                  /* UNKNOWN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INPUT_OP 258
#define OUTPUT_OP 259
#define SCOPE_OPEN 260
#define SCOPE_CLOSE 261
#define IF 262
#define ELSE 263
#define FOR 264
#define WHILE 265
#define RETURN 266
#define CONST 267
#define LITERAL 268
#define VARIABLE 269
#define ARRAY 270
#define STRING 271
#define COMMENT 272
#define CALL_OP 273
#define FUNC_SIG 274
#define ARRAY_METHOD 275
#define INDEX_OP 276
#define ASSIGN_OP 277
#define ADD_OP 278
#define SUBTRACT_OP 279
#define MULTI_OP 280
#define DIV_OP 281
#define MODULA_OP 282
#define EXPONENT_OP 283
#define BRACKET_OPEN 284
#define BRACKET_CLOSE 285
#define EQUAL_OP 286
#define UNEQUAL_OP 287
#define GREATER_OP 288
#define LESSER_OP 289
#define GREATER_EQUAL_OP 290
#define LESSER_EQUAL_OP 291
#define UN_EQUAL_OP 292
#define UN_UNEQUAL_OP 293
#define UN_GREATER_OP 294
#define UN_LESSER_OP 295
#define UN_GREATER_EQUAL_OP 296
#define UN_LESSER_EQUAL_OP 297
#define SPACE 298
#define COMMA_OP 299
#define STMT_END 300
#define PROGRAM_END 301
#define SC 302
#define UNKNOWN 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
