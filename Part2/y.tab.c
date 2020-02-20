/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "scope.h"
#define YYSTYPE struct node*
extern int yylex();
extern int yylineno;
extern char *yytext;

node* mknode(char* token,node* left,node* mid1,node* mid2, node* right);
void Printtree(node* tree,int tab);
int isTerminal(node* tree);
int AllChildTerminal(node* tree);
void yyerror(const char *msg);

scope* global;

#line 40 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define BOOL 257
#define VOID 258
#define CHAR 259
#define INT 260
#define STRING 261
#define INTP 262
#define CHARP 263
#define REALP 264
#define REAL 265
#define VAR 266
#define IF 267
#define ELSE 268
#define WHILE 269
#define DO 270
#define FOR 271
#define RRETURN 272
#define NNULL 273
#define AND 274
#define DIVIDE 275
#define ASSIGN 276
#define ISEQUAL 277
#define GREATER 278
#define GREATEREQ 279
#define LESS 280
#define LESSEQ 281
#define MINUS 282
#define NOT 283
#define NOTEQUAL 284
#define OR 285
#define PLUS 286
#define MULT 287
#define BAND 288
#define BOOL_TRUE 289
#define BOOL_FALSE 290
#define FUNC 291
#define CHARR 292
#define NUM 293
#define ID 294
#define HEX 295
#define DEC 296
#define REAL_NUMBER 297
#define STRING_ID 298
#define SEMI 299
#define COMMA 300
#define ABS 301
#define OBRACE 302
#define CBRACE 303
#define OBRACKET 304
#define CBRACKET 305
#define OSQRERACKET 306
#define CSQRERACKET 307
#define OCMNT 308
#define SINMGLE_COMMENT 309
#define CCMNT 310
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    2,    2,    3,    3,    9,   10,   10,   10,
    6,    6,   14,   14,   15,   13,   13,   13,   17,   17,
   19,   19,   16,   16,    4,    4,    4,    4,    4,    4,
    4,   11,   11,   11,   23,   23,   23,   23,    7,   27,
   20,   20,   20,   20,   22,   22,   28,   28,   24,   24,
   25,   25,   25,   25,   26,   26,   26,   26,   26,   32,
   32,   32,   32,   32,   12,   12,   12,   31,   31,   21,
   21,   21,   21,   21,   21,   21,   21,   21,   21,   21,
   21,   21,   21,   21,   21,   21,   21,   21,   21,   21,
   21,   21,   21,   21,   21,   35,   35,   35,   35,    5,
   29,   33,   34,   36,    8,   18,   30,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    0,    7,    7,    3,    2,    3,    0,
    1,    0,    3,    1,    2,    4,    3,    3,    3,    1,
    7,    5,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    0,    1,    2,    1,    1,    3,    1,
    4,    5,    8,    5,    2,    0,    1,    4,    4,    3,
    5,    7,    5,    7,    5,    8,    5,    8,    7,    3,
    3,    3,    3,    3,    3,    2,    0,    3,    1,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    2,    2,    2,    2,    1,    1,    1,    1,    3,
    3,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    2,    0,   25,  105,   26,   27,   29,
   30,   31,   28,    0,    0,    3,  100,    0,    0,    0,
    0,  106,   23,    0,    0,   14,    0,   24,    0,    0,
    0,    0,   15,    0,    0,    5,   13,    0,    6,    0,
    0,    0,    0,    0,    0,   19,    0,    8,   39,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   35,    0,
    0,   37,   38,    0,    0,    0,    0,    0,    0,   18,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   33,
    0,    7,   32,   36,  101,    0,    9,    0,   17,   16,
   92,    0,    0,    0,    0,   87,   88,  104,   96,   97,
   98,   99,  107,    0,    0,    0,   93,   89,   95,   86,
   94,    0,    0,    0,    0,    0,   50,    0,    0,    0,
   66,    0,    0,    0,    0,    0,   82,   83,   85,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   49,   48,   65,    0,   41,    0,   91,   90,    0,   73,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   72,
    0,   40,   53,   55,   57,    0,    0,   44,   42,    0,
    0,    0,    0,    0,    0,  103,  102,    0,    0,    0,
    0,    0,    0,   45,   52,   54,   59,    0,    0,    0,
    0,    0,    0,    0,   21,    0,   60,   62,   56,   58,
   61,   63,   43,
};
static const YYINT yydgoto[] = {                          2,
    3,    4,   41,   23,   56,   24,   57,   15,   42,   43,
   58,   82,   44,   25,   26,   27,   33,   28,   67,   59,
  106,  182,   60,  107,   62,   63,  173,  108,   86,  109,
  119,  189,  190,  191,  110,  111,
};
static const YYINT yysindex[] = {                      -264,
    3,    0,    0,    0, -264,    0,    0,    0,    0,    0,
    0,    0,    0, -256, -256,    0,    0, -250, -234,  -79,
  -79,    0,    0, -220, -211,    0, -256,    0, -207, -168,
  -79, -162,    0, -168, -227,    0,    0, -256,    0,   32,
 -227, -155,  -61,  -61, -256,    0, -136,    0,    0, -134,
 -133, -168, -132, -256, -256, -276,  -61, -112,    0,  -61,
 -135,    0,    0, -103, -227, -119, -109, -163, -108,    0,
  272,  272,  -77, -136, -101, -103, -103,  219,  272,    0,
  245,    0,    0,    0,    0,  298,    0,  272,    0,    0,
    0,  272,  272, -256, -256,    0,    0,    0,    0,    0,
    0,    0,    0, -256,  272,  326,    0,    0,    0,    0,
    0,  340,  -83,  272,  272,  272,    0,  487, -198,   68,
    0,  384, -256,  407,   82, -214,    0,    0,    0,  -73,
  355,  272,  272,  272,  272,  272,  272,  272,  272,  272,
  272,  272,  272,  -61,  -61,  272,  423,  439,  455,  272,
    0,    0,    0,  -76,    0, -103,    0,    0,  500,    0,
 -151, -151, -151, -151, -151, -214, -151,  500, -214,    0,
  -37,    0,    0,    0,    0,  369, -178,    0,    0,  487,
  272,  -71,  -66,  -61,  -64,    0,    0, -183,  -69,  -52,
  -43,   99, -256,    0,    0,    0,    0,  272,  -52,  -43,
  -61, -256, -256,  -53,    0,  487,    0,    0,    0,    0,
    0,    0,    0,
};
static const YYINT yyrindex[] = {                       240,
    0,    0,    0,    0,  240,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -48,
  -48,    0,    0,    0,  -47,    0,    0,    0,    0,    0,
    0, -140,    0,    0, -175,    0,    0,    0,    0,    0,
 -175,    0, -236, -217,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -62, -217,  -50,    0, -217,
    0,    0,    0,    0, -175,    0,    0, -262,    0,    0,
    0,    0,    0,    0,  -12,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -179,    0,    0,
    0,    0,    0,    0,    0,  -30,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  471,    0, -131,    0,    0, -242,    0,
  113,  130,  147,  164,  181,    2,  198, -185,   34,    0,
 -219,    0,    0,    0,    0,    0,    0,    0,    0, -144,
    0,  -28,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -33,    0,    0,    0,    0,
    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  268,  125,   16,  -14,  253,  -27,    0,    0,  -19,
   22,    0,    0,    0,  247,    0,   40,   36,   92,  -45,
   61,    0, -125,  -34,    0,    0, -139,  -39,  -65,  107,
    0,    0,  -44,  -59,    0,    0,
};
#define YYTABLESIZE 787
static const YYINT yytable[] = {                         18,
   19,   70,   36,   64,   64,  175,   39,   64,   61,   61,
  115,  116,   32,   47,   76,   77,   14,   64,  172,  172,
   64,   48,   61,   32,   73,   61,    1,   78,  114,   79,
   66,   74,   68,   22,   64,   34,   20,   17,   40,   75,
   75,   51,   74,   34,  196,   87,   51,   51,   34,   51,
   51,   51,   51,   20,   34,   47,   74,   74,  172,   75,
  133,  210,   74,    1,   74,   65,   34,   51,   51,   21,
   45,   51,  143,   34,   51,  172,   45,   46,   80,  128,
  129,   83,   51,   51,   30,   34,   69,   31,   75,  130,
  183,   10,   85,   10,   10,   10,   10,   34,  186,   75,
   45,  150,  187,  186,   64,   64,  151,  187,  154,   61,
   61,   10,   10,   75,   75,   17,  171,  174,   10,   75,
   69,   75,  198,  133,    5,   69,   10,   10,  200,    5,
  139,  203,  112,   35,  142,  143,   38,   38,  118,  120,
  208,  122,   79,  199,   64,  202,  124,   49,  125,   61,
   54,   55,  126,  127,  207,   68,  195,   17,   20,   81,
   68,   64,  188,   84,   20,  131,   61,   46,   46,   71,
   72,   74,   85,  209,  147,  148,  149,    6,   66,    8,
    9,   22,   10,   11,   12,   13,   88,  211,  212,   89,
   90,  113,  159,  160,  161,  162,  163,  164,  165,  166,
  167,  168,  169,  170,   79,   50,  176,   51,   52,   53,
  180,   47,   47,   47,   47,   47,   47,   47,   47,   47,
  146,   47,   47,   47,   47,   54,   55,  157,  193,  181,
  184,  103,   17,  187,  197,  201,   47,   47,  186,    4,
   35,  192,   47,   84,   47,  213,   84,   84,   84,   84,
   84,   84,   67,   84,   84,   84,   12,   11,  206,    6,
    7,    8,    9,   47,   10,   11,   12,   13,   84,   84,
   22,   64,   16,   29,   84,   71,   84,   37,   71,   71,
   71,   71,   71,   71,  205,   71,   71,   71,    6,  194,
    8,    9,    0,   10,   11,   12,   13,    0,    0,    0,
   71,   71,    0,    0,    0,    0,   71,   70,   71,    0,
   70,   70,   70,   70,   70,   70,    0,   70,   70,   70,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   70,   70,    0,    0,    0,    0,   70,    0,
   70,  132,  133,    0,  134,  135,  136,  137,  138,  139,
    0,  140,  141,  142,  143,  132,  133,    0,  134,  135,
  136,  137,  138,  139,    0,  140,  141,  142,  143,    0,
    0,    0,  132,  133,  152,  134,  135,  136,  137,  138,
  139,    0,  140,  141,  142,  143,   76,    0,  156,   76,
   76,   76,   76,   76,    0,    0,   76,   76,    0,    0,
    0,    0,    0,   78,    0,  204,   78,   78,   78,   78,
   78,   76,   76,   78,   78,    0,    0,   76,    0,   76,
   79,    0,    0,   79,   79,   79,   79,   79,   78,   78,
   79,   79,    0,    0,   78,    0,   78,   80,    0,    0,
   80,   80,   80,   80,   80,   79,   79,   80,   80,    0,
    0,   79,    0,   79,   81,    0,    0,   81,   81,   81,
   81,   81,   80,   80,   81,   81,    0,    0,   80,    0,
   80,   77,    0,    0,   77,   77,   77,   77,   77,   81,
   81,   77,   77,    0,    0,   81,    0,   81,    0,    0,
    0,   91,    0,    0,    0,    0,   77,   77,    0,    0,
   92,   93,   77,    0,   77,   94,   95,   96,   97,    0,
   98,   99,   17,  100,  101,  102,  103,   91,    0,  104,
    0,    0,  105,  117,    0,    0,   92,   93,    0,    0,
    0,   94,   95,   96,   97,    0,   98,   99,   17,  100,
  101,  102,  103,  121,   91,  104,    0,    0,  105,    0,
    0,    0,    0,   92,   93,    0,    0,    0,   94,   95,
   96,   97,    0,   98,   99,   17,  100,  101,  102,  103,
   91,    0,  104,    0,    0,  105,    0,    0,    0,   92,
   93,    0,    0,    0,   94,  123,   96,   97,    0,   98,
   99,   17,  100,  101,  102,  103,    0,    0,  104,  132,
  133,  105,  134,  135,  136,  137,  138,  139,    0,  140,
  141,  142,  143,  132,  133,    0,  134,  135,  136,  137,
  138,  139,    0,  140,  141,  142,  143,    0,  132,  133,
  144,  134,  135,  136,  137,  138,  139,    0,  140,  141,
  142,  143,  132,  133,  145,  134,  135,  136,  137,  138,
  139,    0,  140,  141,  142,  143,    0,  132,  133,  158,
  134,  135,  136,  137,  138,  139,    0,  140,  141,  142,
  143,    0,    0,  185,    0,    0,    0,    0,    0,    0,
  132,  133,  153,  134,  135,  136,  137,  138,  139,    0,
  140,  141,  142,  143,    0,    0,  132,  133,    0,  134,
  135,  136,  137,  138,  139,  155,  140,  141,  142,  143,
    0,    0,  132,  133,    0,  134,  135,  136,  137,  138,
  139,  177,  140,  141,  142,  143,    0,    0,  132,  133,
    0,  134,  135,  136,  137,  138,  139,  178,  140,  141,
  142,  143,    0,    0,   85,   85,    0,   85,   85,   85,
   85,   85,   85,  179,   85,   85,   85,   85,    0,    0,
  132,  133,    0,  134,  135,  136,  137,  138,  139,   85,
  140,  141,  142,  143,  133,    0,  134,  135,  136,  137,
  138,  139,    0,  140,    0,  142,  143,
};
static const YYINT yycheck[] = {                         14,
   15,   47,   30,   43,   44,  145,   34,   47,   43,   44,
   76,   77,   27,  276,   54,   55,    1,   57,  144,  145,
   60,   41,   57,   38,   52,   60,  291,  304,   74,  306,
   45,  274,   47,  261,   74,  272,  299,  294,  266,   54,
   55,  261,  285,  261,  184,   65,  266,  267,  266,  269,
  270,  271,  272,  304,  272,   40,  299,  300,  184,   74,
  275,  201,  305,  291,  307,   44,  303,  287,  288,  304,
   35,  291,  287,  291,  294,  201,   41,   38,   57,   94,
   95,   60,  302,  303,  305,  303,   47,  299,  274,  104,
  156,  267,  276,  269,  270,  271,  272,  305,  282,  285,
   65,  300,  286,  282,  144,  145,  305,  286,  123,  144,
  145,  287,  288,  299,  300,  294,  144,  145,  294,  305,
  300,  307,  188,  275,    0,  305,  302,  303,  188,    5,
  282,  191,   72,  302,  286,  287,  300,  300,   78,   79,
  200,   81,  306,  188,  184,  190,   86,  303,   88,  184,
  287,  288,   92,   93,  199,  300,  184,  294,  299,  272,
  305,  201,  177,  299,  305,  105,  201,  299,  300,  304,
  304,  304,  276,  201,  114,  115,  116,  257,  193,  259,
  260,  261,  262,  263,  264,  265,  306,  202,  203,  299,
  299,  269,  132,  133,  134,  135,  136,  137,  138,  139,
  140,  141,  142,  143,  306,  267,  146,  269,  270,  271,
  150,  274,  275,  276,  277,  278,  279,  280,  281,  282,
  304,  284,  285,  286,  287,  287,  288,  301,  300,  306,
  268,  298,  294,  286,  299,  305,  299,  300,  282,    0,
  302,  181,  305,  274,  307,  299,  277,  278,  279,  280,
  281,  282,  303,  284,  285,  286,  305,  305,  198,  257,
  258,  259,  260,  276,  262,  263,  264,  265,  299,  300,
  299,  305,    5,   21,  305,  274,  307,   31,  277,  278,
  279,  280,  281,  282,  193,  284,  285,  286,  257,  183,
  259,  260,   -1,  262,  263,  264,  265,   -1,   -1,   -1,
  299,  300,   -1,   -1,   -1,   -1,  305,  274,  307,   -1,
  277,  278,  279,  280,  281,  282,   -1,  284,  285,  286,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  299,  300,   -1,   -1,   -1,   -1,  305,   -1,
  307,  274,  275,   -1,  277,  278,  279,  280,  281,  282,
   -1,  284,  285,  286,  287,  274,  275,   -1,  277,  278,
  279,  280,  281,  282,   -1,  284,  285,  286,  287,   -1,
   -1,   -1,  274,  275,  307,  277,  278,  279,  280,  281,
  282,   -1,  284,  285,  286,  287,  274,   -1,  307,  277,
  278,  279,  280,  281,   -1,   -1,  284,  285,   -1,   -1,
   -1,   -1,   -1,  274,   -1,  307,  277,  278,  279,  280,
  281,  299,  300,  284,  285,   -1,   -1,  305,   -1,  307,
  274,   -1,   -1,  277,  278,  279,  280,  281,  299,  300,
  284,  285,   -1,   -1,  305,   -1,  307,  274,   -1,   -1,
  277,  278,  279,  280,  281,  299,  300,  284,  285,   -1,
   -1,  305,   -1,  307,  274,   -1,   -1,  277,  278,  279,
  280,  281,  299,  300,  284,  285,   -1,   -1,  305,   -1,
  307,  274,   -1,   -1,  277,  278,  279,  280,  281,  299,
  300,  284,  285,   -1,   -1,  305,   -1,  307,   -1,   -1,
   -1,  273,   -1,   -1,   -1,   -1,  299,  300,   -1,   -1,
  282,  283,  305,   -1,  307,  287,  288,  289,  290,   -1,
  292,  293,  294,  295,  296,  297,  298,  273,   -1,  301,
   -1,   -1,  304,  305,   -1,   -1,  282,  283,   -1,   -1,
   -1,  287,  288,  289,  290,   -1,  292,  293,  294,  295,
  296,  297,  298,  299,  273,  301,   -1,   -1,  304,   -1,
   -1,   -1,   -1,  282,  283,   -1,   -1,   -1,  287,  288,
  289,  290,   -1,  292,  293,  294,  295,  296,  297,  298,
  273,   -1,  301,   -1,   -1,  304,   -1,   -1,   -1,  282,
  283,   -1,   -1,   -1,  287,  288,  289,  290,   -1,  292,
  293,  294,  295,  296,  297,  298,   -1,   -1,  301,  274,
  275,  304,  277,  278,  279,  280,  281,  282,   -1,  284,
  285,  286,  287,  274,  275,   -1,  277,  278,  279,  280,
  281,  282,   -1,  284,  285,  286,  287,   -1,  274,  275,
  305,  277,  278,  279,  280,  281,  282,   -1,  284,  285,
  286,  287,  274,  275,  305,  277,  278,  279,  280,  281,
  282,   -1,  284,  285,  286,  287,   -1,  274,  275,  305,
  277,  278,  279,  280,  281,  282,   -1,  284,  285,  286,
  287,   -1,   -1,  305,   -1,   -1,   -1,   -1,   -1,   -1,
  274,  275,  299,  277,  278,  279,  280,  281,  282,   -1,
  284,  285,  286,  287,   -1,   -1,  274,  275,   -1,  277,
  278,  279,  280,  281,  282,  299,  284,  285,  286,  287,
   -1,   -1,  274,  275,   -1,  277,  278,  279,  280,  281,
  282,  299,  284,  285,  286,  287,   -1,   -1,  274,  275,
   -1,  277,  278,  279,  280,  281,  282,  299,  284,  285,
  286,  287,   -1,   -1,  274,  275,   -1,  277,  278,  279,
  280,  281,  282,  299,  284,  285,  286,  287,   -1,   -1,
  274,  275,   -1,  277,  278,  279,  280,  281,  282,  299,
  284,  285,  286,  287,  275,   -1,  277,  278,  279,  280,
  281,  282,   -1,  284,   -1,  286,  287,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 310
#define YYUNDFTOKEN 349
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"BOOL","VOID","CHAR","INT",
"STRING","INTP","CHARP","REALP","REAL","VAR","IF","ELSE","WHILE","DO","FOR",
"RRETURN","NNULL","AND","DIVIDE","ASSIGN","ISEQUAL","GREATER","GREATEREQ",
"LESS","LESSEQ","MINUS","NOT","NOTEQUAL","OR","PLUS","MULT","BAND","BOOL_TRUE",
"BOOL_FALSE","FUNC","CHARR","NUM","ID","HEX","DEC","REAL_NUMBER","STRING_ID",
"SEMI","COMMA","ABS","OBRACE","CBRACE","OBRACKET","CBRACKET","OSQRERACKET",
"CSQRERACKET","OCMNT","SINMGLE_COMMENT","CCMNT",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : START",
"START : PROGRAM",
"PROGRAM : FUNCTIONS",
"FUNCTIONS : FUNCTION FUNCTIONS",
"FUNCTIONS :",
"FUNCTION : FUNC TYPE id OBRACKET F_PARAMS CBRACKET CODE_BLOCK",
"FUNCTION : FUNC void id OBRACKET F_PARAMS CBRACKET CODE_BLOCK",
"BODY : DECLERATIONS STATMENTS RETURN_STATMENT",
"DECLERATIONS : FUNCTION DECLERATIONS",
"DECLERATIONS : VAR_DECLERACTION STATMENTS DECLERATIONS",
"DECLERATIONS :",
"F_PARAMS : F_PARAMSS",
"F_PARAMS :",
"F_PARAMSS : F_PARAMSS SEMI PARAM",
"F_PARAMSS : PARAM",
"PARAM : PARAM_TYPE IDS",
"VAR_DECLERACTION : VAR TYPE IDS SEMI",
"VAR_DECLERACTION : string SID SEMI",
"VAR_DECLERACTION : VAR TYPE ASSIGNMENT",
"IDS : id COMMA IDS",
"IDS : id",
"SID : id OSQRERACKET EXPR CSQRERACKET STRING_ASSIGNMENT COMMA SID",
"SID : id OSQRERACKET EXPR CSQRERACKET STRING_ASSIGNMENT",
"PARAM_TYPE : TYPE",
"PARAM_TYPE : string",
"TYPE : BOOL",
"TYPE : CHAR",
"TYPE : INT",
"TYPE : REAL",
"TYPE : INTP",
"TYPE : CHARP",
"TYPE : REALP",
"STATMENTS : STATMENT STATMENTS",
"STATMENTS : CODE_BLOCK STATMENTS",
"STATMENTS :",
"STATMENT : ASSIGNMENT",
"STATMENT : FUNC_CALL SEMI",
"STATMENT : IFS",
"STATMENT : LOOPS",
"CODE_BLOCK : OBRACE BODY CBRACE",
"SINGLE_STATMENT : STATMENT",
"ASSIGNMENT : ASSIGNMENT_VAR assign EXPR SEMI",
"ASSIGNMENT : BAND ASSIGNMENT_VAR assign EXPR SEMI",
"ASSIGNMENT : ASSIGNMENT_VAR assign BAND id OSQRERACKET EXPR CSQRERACKET SEMI",
"ASSIGNMENT : MULT ASSIGNMENT_VAR assign EXPR SEMI",
"STRING_ASSIGNMENT : assign string_id",
"STRING_ASSIGNMENT :",
"ASSIGNMENT_VAR : id",
"ASSIGNMENT_VAR : id OSQRERACKET EXPR CSQRERACKET",
"FUNC_CALL : id OBRACKET EXPR_LIST CBRACKET",
"FUNC_CALL : id OBRACKET CBRACKET",
"IFS : IF OBRACKET EXPR CBRACKET CODE_BLOCK",
"IFS : IF OBRACKET EXPR CBRACKET CODE_BLOCK ELSE CODE_BLOCK",
"IFS : IF OBRACKET EXPR CBRACKET SINGLE_STATMENT",
"IFS : IF OBRACKET EXPR CBRACKET CODE_BLOCK ELSE SINGLE_STATMENT",
"LOOPS : WHILE OBRACKET EXPR CBRACKET CODE_BLOCK",
"LOOPS : FOR OBRACKET ASSIGNMENT EXPR SEMI UPDATES CBRACKET CODE_BLOCK",
"LOOPS : WHILE OBRACKET EXPR CBRACKET SINGLE_STATMENT",
"LOOPS : FOR OBRACKET ASSIGNMENT EXPR SEMI UPDATES CBRACKET SINGLE_STATMENT",
"LOOPS : DO CODE_BLOCK WHILE OBRACKET EXPR CBRACKET SEMI",
"UPDATES : id plus plus",
"UPDATES : plus plus id",
"UPDATES : id minus minus",
"UPDATES : minus minus id",
"UPDATES : id assign EXPR",
"RETURN_STATMENT : RRETURN EXPR SEMI",
"RETURN_STATMENT : RRETURN SEMI",
"RETURN_STATMENT :",
"EXPR_LIST : EXPR_LIST COMMA EXPR",
"EXPR_LIST : EXPR",
"EXPR : EXPR PLUS EXPR",
"EXPR : EXPR MINUS EXPR",
"EXPR : EXPR MULT EXPR",
"EXPR : EXPR DIVIDE EXPR",
"EXPR : EXPR AND EXPR",
"EXPR : EXPR OR EXPR",
"EXPR : EXPR ISEQUAL EXPR",
"EXPR : EXPR NOTEQUAL EXPR",
"EXPR : EXPR GREATER EXPR",
"EXPR : EXPR GREATEREQ EXPR",
"EXPR : EXPR LESS EXPR",
"EXPR : EXPR LESSEQ EXPR",
"EXPR : NOT EXPR",
"EXPR : MULT id",
"EXPR : MINUS EXPR",
"EXPR : BAND id",
"EXPR : NUMS",
"EXPR : BOOL_TRUE",
"EXPR : BOOL_FALSE",
"EXPR : ASSIGNMENT_VAR",
"EXPR : OBRACKET EXPR CBRACKET",
"EXPR : ABS id ABS",
"EXPR : NNULL",
"EXPR : FUNC_CALL",
"EXPR : char",
"EXPR : string_id",
"NUMS : NUM",
"NUMS : HEX",
"NUMS : DEC",
"NUMS : REAL_NUMBER",
"id : ID",
"assign : ASSIGN",
"plus : PLUS",
"minus : MINUS",
"char : CHARR",
"void : VOID",
"string : STRING",
"string_id : STRING_ID",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 323 "parser.y"

#include "lex.yy.c"

int main(){
	
	global=initGlobalScope();
    return yyparse();
	
}

void yyerror(const char *msg)
{
	fflush(stdout);
	fprintf(stderr, "Error: %s at line %d\n", msg,yylineno);
	fprintf(stderr, "Parser does not expect '%s'\n",yytext);
}


#line 598 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 48 "parser.y"
	{	/*
									Printtree($1,0); 
									printf("\n");*/
									scanTree(yystack.l_mark[0]->left,&global);
									checkMainOnce();
									printf("OK\n");}
break;
case 2:
#line 58 "parser.y"
	{
						
						yyval=mknode("PROGRAM",yystack.l_mark[0],NULL ,NULL,NULL);
						
						}
break;
case 3:
#line 66 "parser.y"
	{
						
						yyval=mknode("FUNC_NODE",yystack.l_mark[-1],yystack.l_mark[0],NULL,NULL);
						
						}
break;
case 4:
#line 71 "parser.y"
	{ yyval = NULL; }
break;
case 5:
#line 77 "parser.y"
	{
						
							yyval=mknode("FUNCTION",yystack.l_mark[-5],yystack.l_mark[-4],yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 6:
#line 80 "parser.y"
	{
						
							yyval=mknode("FUNCTION",yystack.l_mark[-5],yystack.l_mark[-4],yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 7:
#line 85 "parser.y"
	{yyval=mknode("BODY",yystack.l_mark[-2],yystack.l_mark[-1],yystack.l_mark[0],NULL);}
break;
case 8:
#line 88 "parser.y"
	{yyval=mknode("DECLARATIONS",yystack.l_mark[-1],yystack.l_mark[0],NULL,NULL);}
break;
case 9:
#line 89 "parser.y"
	{yyval=mknode("DECLARATIONS",yystack.l_mark[-2],yystack.l_mark[-1],yystack.l_mark[0],NULL);}
break;
case 10:
#line 90 "parser.y"
	{ yyval = NULL; }
break;
case 11:
#line 97 "parser.y"
	{yyval=yystack.l_mark[0];}
break;
case 12:
#line 98 "parser.y"
	{ yyval = NULL; }
break;
case 13:
#line 101 "parser.y"
	{yyval=mknode("FPARAM",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 14:
#line 102 "parser.y"
	{yyval=mknode("FPARAM",NULL,yystack.l_mark[0],NULL,NULL);}
break;
case 15:
#line 108 "parser.y"
	{yyval=mknode(yystack.l_mark[-1]->token,yystack.l_mark[0],NULL,NULL,NULL);}
break;
case 16:
#line 112 "parser.y"
	{yyval=mknode("IDS",yystack.l_mark[-2],yystack.l_mark[-1],NULL,NULL);}
break;
case 17:
#line 113 "parser.y"
	{yyval=mknode("IDS",yystack.l_mark[-2],yystack.l_mark[-1],NULL,NULL);}
break;
case 18:
#line 114 "parser.y"
	{yyval=mknode("IDS",yystack.l_mark[-1],yystack.l_mark[0],NULL,NULL);}
break;
case 19:
#line 117 "parser.y"
	{yyval=mknode("ID",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 20:
#line 118 "parser.y"
	{yyval=mknode("ID",yystack.l_mark[0],NULL,NULL,NULL);}
break;
case 21:
#line 122 "parser.y"
	{yyval=mknode("ID",yystack.l_mark[-6],yystack.l_mark[0],mknode("SIZE",yystack.l_mark[-4],NULL,NULL,NULL),yystack.l_mark[-2]);}
break;
case 22:
#line 123 "parser.y"
	{yyval=mknode("ID",yystack.l_mark[-4],NULL,mknode("SIZE",yystack.l_mark[-2],NULL,NULL,NULL),yystack.l_mark[0]);}
break;
case 23:
#line 127 "parser.y"
	{yyval=yystack.l_mark[0];}
break;
case 24:
#line 128 "parser.y"
	{yyval=yystack.l_mark[0];}
break;
case 25:
#line 131 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 26:
#line 132 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 27:
#line 133 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 28:
#line 134 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 29:
#line 135 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 30:
#line 136 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 31:
#line 137 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 32:
#line 141 "parser.y"
	{ yyval=mknode("STATMENT_NODE",yystack.l_mark[-1],yystack.l_mark[0],NULL,NULL);}
break;
case 33:
#line 142 "parser.y"
	{ yyval=mknode("STATMENT_NODE",yystack.l_mark[-1],yystack.l_mark[0],NULL,NULL);}
break;
case 34:
#line 143 "parser.y"
	{ yyval = NULL; }
break;
case 35:
#line 146 "parser.y"
	{yyval=yystack.l_mark[0];}
break;
case 36:
#line 147 "parser.y"
	{yyval=yystack.l_mark[-1];}
break;
case 37:
#line 148 "parser.y"
	{yyval=yystack.l_mark[0];}
break;
case 38:
#line 149 "parser.y"
	{yyval=yystack.l_mark[0];}
break;
case 39:
#line 152 "parser.y"
	{yyval=yystack.l_mark[-1];}
break;
case 40:
#line 155 "parser.y"
	{
						yyval=mknode("BODY",mknode("STATMENT_NODE",yystack.l_mark[0],NULL,NULL,NULL),NULL,NULL,NULL);
						}
break;
case 41:
#line 160 "parser.y"
	{ yyval=mknode(yystack.l_mark[-2]->token,yystack.l_mark[-3],yystack.l_mark[-1],NULL,NULL);}
break;
case 42:
#line 162 "parser.y"
	{ yyval=mknode(yystack.l_mark[-2]->token,mknode("&",yystack.l_mark[-3],NULL,NULL,NULL),yystack.l_mark[-1],NULL,NULL);}
break;
case 43:
#line 164 "parser.y"
	{yyval=mknode(yystack.l_mark[-6]->token,yystack.l_mark[-7],mknode("&",yystack.l_mark[-4],NULL,mknode("SIZE",yystack.l_mark[-2],NULL,NULL,NULL),NULL),NULL,NULL);}
break;
case 44:
#line 166 "parser.y"
	{ yyval=mknode(yystack.l_mark[-2]->token,mknode("*",yystack.l_mark[-3],NULL,NULL,NULL),yystack.l_mark[-1],NULL,NULL);}
break;
case 45:
#line 170 "parser.y"
	{ yyval=mknode(yystack.l_mark[-1]->token,yystack.l_mark[0],NULL,NULL,NULL);}
break;
case 46:
#line 171 "parser.y"
	{ yyval = NULL; }
break;
case 48:
#line 175 "parser.y"
	{yyval=mknode(yystack.l_mark[-3]->token,mknode("INDEX",yystack.l_mark[-1],NULL,NULL,NULL),NULL,NULL,NULL);}
break;
case 49:
#line 179 "parser.y"
	{ yyval=mknode(yystack.l_mark[-3]->token,yystack.l_mark[-1],NULL,NULL,NULL); }
break;
case 50:
#line 180 "parser.y"
	{ yyval=mknode(yystack.l_mark[-2]->token,mknode("V",NULL,NULL,NULL,NULL),NULL,NULL,NULL); }
break;
case 51:
#line 183 "parser.y"
	{
						
						yyval=mknode("IF",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);
						
						}
break;
case 52:
#line 188 "parser.y"
	{
					
						yyval=mknode("IF",yystack.l_mark[-4],yystack.l_mark[-2],yystack.l_mark[0],NULL);
						
						}
break;
case 53:
#line 193 "parser.y"
	{
						
						yyval=mknode("IF",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);
						
						}
break;
case 54:
#line 198 "parser.y"
	{ 
						
						yyval=mknode("IF",yystack.l_mark[-4],yystack.l_mark[-2],yystack.l_mark[0],NULL);
						
						}
break;
case 55:
#line 205 "parser.y"
	{ 
						
						yyval=mknode("WHILE",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);
						
						}
break;
case 56:
#line 210 "parser.y"
	{ 
						
						yyval=mknode("FOR",yystack.l_mark[-5],yystack.l_mark[-4],yystack.l_mark[-2],yystack.l_mark[0]);
						
						}
break;
case 57:
#line 215 "parser.y"
	{ 
						
						yyval=mknode("WHILE",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);
						
						}
break;
case 58:
#line 220 "parser.y"
	{ 
						
						yyval=mknode("FOR",yystack.l_mark[-5],yystack.l_mark[-4],yystack.l_mark[-2],yystack.l_mark[0]);
						
						}
break;
case 59:
#line 226 "parser.y"
	{
						
						yyval=mknode("DO WHILE",yystack.l_mark[-2],yystack.l_mark[-5], NULL, NULL);
						
						}
break;
case 60:
#line 233 "parser.y"
	{ yyval=mknode("=",yystack.l_mark[-2],mknode(yystack.l_mark[-1]->token,yystack.l_mark[-2],mknode("1",NULL,NULL,NULL,NULL),NULL,NULL),NULL,NULL); }
break;
case 61:
#line 234 "parser.y"
	{ yyval=mknode("=",yystack.l_mark[0],mknode(yystack.l_mark[-1]->token,yystack.l_mark[0],mknode("1",NULL,NULL,NULL,NULL),NULL,NULL),NULL,NULL); }
break;
case 62:
#line 235 "parser.y"
	{ yyval=mknode("=",yystack.l_mark[-2],mknode(yystack.l_mark[-1]->token,yystack.l_mark[-2],mknode("1",NULL,NULL,NULL,NULL),NULL,NULL),NULL,NULL); }
break;
case 63:
#line 236 "parser.y"
	{ yyval=mknode("=",yystack.l_mark[0],mknode(yystack.l_mark[-1]->token,yystack.l_mark[0],mknode("1",NULL,NULL,NULL,NULL),NULL,NULL),NULL,NULL); }
break;
case 64:
#line 237 "parser.y"
	{ yyval=mknode(yystack.l_mark[-1]->token,yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 65:
#line 241 "parser.y"
	{ yyval=mknode("RETURN",yystack.l_mark[-1],NULL,NULL,NULL); }
break;
case 66:
#line 242 "parser.y"
	{ yyval=mknode("RETURN",NULL,NULL,NULL,NULL); }
break;
case 68:
#line 246 "parser.y"
	{ yyval=mknode("VARIABLES",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL); }
break;
case 69:
#line 247 "parser.y"
	{yyval=mknode("VARIABLES",NULL,yystack.l_mark[0],NULL,NULL); }
break;
case 70:
#line 252 "parser.y"
	{yyval=mknode("+",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 71:
#line 253 "parser.y"
	{yyval=mknode("-",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 72:
#line 254 "parser.y"
	{yyval=mknode("*",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 73:
#line 255 "parser.y"
	{yyval=mknode("/",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 74:
#line 256 "parser.y"
	{yyval=mknode("&&",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 75:
#line 257 "parser.y"
	{yyval=mknode("||",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 76:
#line 258 "parser.y"
	{yyval=mknode("==",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 77:
#line 259 "parser.y"
	{yyval=mknode("!=",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 78:
#line 260 "parser.y"
	{yyval=mknode(">",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 79:
#line 261 "parser.y"
	{yyval=mknode(">=",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 80:
#line 262 "parser.y"
	{yyval=mknode("<",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 81:
#line 263 "parser.y"
	{yyval=mknode("<=",yystack.l_mark[-2],yystack.l_mark[0],NULL,NULL);}
break;
case 82:
#line 264 "parser.y"
	{yyval=mknode("!",yystack.l_mark[0],NULL,NULL,NULL);}
break;
case 83:
#line 265 "parser.y"
	{yyval=mknode("*",yystack.l_mark[0],NULL,NULL,NULL);}
break;
case 84:
#line 266 "parser.y"
	{yyval=mknode("-",yystack.l_mark[0],NULL,NULL,NULL);}
break;
case 85:
#line 267 "parser.y"
	{yyval=mknode("&",yystack.l_mark[0],NULL,NULL,NULL);}
break;
case 86:
#line 268 "parser.y"
	{yyval=yystack.l_mark[0];}
break;
case 87:
#line 269 "parser.y"
	{yyval=mknode("true",NULL,NULL,NULL,NULL);}
break;
case 88:
#line 270 "parser.y"
	{yyval=mknode("false",NULL,NULL,NULL,NULL);}
break;
case 89:
#line 271 "parser.y"
	{yyval=yystack.l_mark[0];}
break;
case 90:
#line 272 "parser.y"
	{yyval=yystack.l_mark[-1];}
break;
case 91:
#line 273 "parser.y"
	{yyval=mknode("ABS",yystack.l_mark[-1],NULL,NULL,NULL);}
break;
case 92:
#line 274 "parser.y"
	{yyval=mknode("NULL",NULL,NULL,NULL,NULL);}
break;
case 93:
#line 275 "parser.y"
	{ yyval=mknode("FUNC CALL",yystack.l_mark[0],NULL,NULL,NULL);}
break;
case 94:
#line 276 "parser.y"
	{yyval=mknode("CHAR VAR",yystack.l_mark[0],NULL,NULL,NULL);}
break;
case 95:
#line 277 "parser.y"
	{yyval=mknode("STRING VAR",yystack.l_mark[0],NULL,NULL,NULL);}
break;
case 96:
#line 281 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 97:
#line 282 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 98:
#line 283 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 99:
#line 284 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 100:
#line 287 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 101:
#line 290 "parser.y"
	{yyval=mknode("=",NULL,NULL,NULL,NULL);}
break;
case 102:
#line 293 "parser.y"
	{yyval=mknode("+",NULL,NULL,NULL,NULL);}
break;
case 103:
#line 296 "parser.y"
	{yyval=mknode("-",NULL,NULL,NULL,NULL);}
break;
case 104:
#line 299 "parser.y"
	{
						yytext[2] = '\0';
						yyval=mknode(&yytext[1],NULL,NULL,NULL,NULL);}
break;
case 105:
#line 304 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 106:
#line 307 "parser.y"
	{yyval=mknode(yytext,NULL,NULL,NULL,NULL);}
break;
case 107:
#line 310 "parser.y"
	{
						int i;char c;
						/*Remove last " from the string variable*/
						for(i=1;yytext[i]!='\0';i++){
							c=yytext[i];
							if(yytext[i]=='"')
								yytext[i]='\0';
							}
						yyval=mknode(&yytext[1],NULL,NULL,NULL,NULL);	
						}
break;
#line 1286 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
