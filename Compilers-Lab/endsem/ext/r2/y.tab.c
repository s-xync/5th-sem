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

#line 2 "cal.y"
#include<stdio.h>
#include<string.h>
int temp_num='A';
struct node{
  char str[100];
  char type;
};

struct node* creat(char a,char b)
{
struct node *tmp;
tmp=(struct node*)malloc(sizeof(struct node));
tmp->str[0]=a;
tmp->type=b;
return tmp;
}
#line 22 "cal.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union { struct node *a; 
         } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 48 "y.tab.c"

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

#define INTEGER 257
#define FLOAT 258
#define LETTER 259
#define TT 260
#define TYPE 261
#define KK 262
#define LL 263
#define YY 264
#define JJ 265
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    1,    2,    2,    2,    2,    3,    3,
    3,
};
static const YYINT yylen[] = {                            2,
    0,    3,    3,    3,    3,    3,    3,    1,    1,    1,
    1,
};
static const YYINT yydefred[] = {                         1,
    0,    0,    0,    0,    3,    0,    2,   10,   11,    0,
    8,    0,    0,    0,    0,    6,    7,    5,
};
static const YYINT yydgoto[] = {                          1,
    4,   15,   11,
};
static const YYINT yysindex[] = {                         0,
 -254,    1,  -57,    2,    0, -248,    0,    0,    0,  -42,
    0, -248, -248, -248,  -42,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    3,
    0,    0,    0,    0,    4,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    9,   -6,
};
#define YYTABLESIZE 15
static const YYINT yytable[] = {                         14,
   12,    2,   13,    6,    3,   16,   17,   18,    8,    9,
    5,    7,    4,    9,   10,
};
static const YYINT yycheck[] = {                         42,
   43,  256,   45,   61,  259,   12,   13,   14,  257,  258,
   10,   10,   10,   10,    6,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 265
#define YYUNDFTOKEN 271
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,"'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,0,0,
"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"INTEGER","FLOAT","LETTER","TT","TYPE","KK","LL","YY","JJ",0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : list",
"list :",
"list : list stat '\\n'",
"list : list error '\\n'",
"stat : LETTER '=' expr",
"expr : expr '*' ter",
"expr : expr '+' ter",
"expr : expr '-' ter",
"expr : ter",
"ter : expr",
"ter : INTEGER",
"ter : FLOAT",

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
#line 160 "cal.y"
main()
{
 return(yyparse());
}

yyerror(s)
char *s;
{
  fprintf(stderr, "%s\n",s);
}

yywrap()
{
  return(1);
}
#line 213 "y.tab.c"

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
case 3:
#line 46 "cal.y"
	{
           yyerrok;
         }
break;
case 4:
#line 52 "cal.y"
	{
           printf("%s = %s\n\n",yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
         }
break;
case 5:
#line 60 "cal.y"
	{
           if(yystack.l_mark[-2].a->type=='f'&& yystack.l_mark[0].a->type=='i')
           {
           printf("%c=(float)%s\n",temp_num++,yystack.l_mark[0].a->str);
           printf("%c=%s*%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'f');
           }
           else if(yystack.l_mark[-2].a->type=='i'&& yystack.l_mark[0].a->type=='f')
           {
           printf("%c=(float)%s\n",temp_num++,yystack.l_mark[-2].a->str);
           printf("%c=%s*%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'f');
           }
           else if(yystack.l_mark[-2].a->type=='i'&& yystack.l_mark[0].a->type=='i')
           {
           printf("%c=%s*%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'i');
           }
           else if(yystack.l_mark[-2].a->type=='f'&& yystack.l_mark[0].a->type=='f')
           {
           printf("%c=%s*%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'f');
           }

         }
break;
case 6:
#line 87 "cal.y"
	{
            if(yystack.l_mark[-2].a->type=='f'&& yystack.l_mark[0].a->type=='i')
           {
           printf("%c=(float)%s\n",temp_num++,yystack.l_mark[0].a->str);
           printf("%c=%s+%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'f');
           }
           else if(yystack.l_mark[-2].a->type=='i'&& yystack.l_mark[0].a->type=='f')
           {
           printf("%c=(float)%s\n",temp_num++,yystack.l_mark[-2].a->str);
           printf("%c=%s+%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'f');
           }
           else if(yystack.l_mark[-2].a->type=='i'&& yystack.l_mark[0].a->type=='i')
           {
           printf("%c=%s+%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'i');
           }
           else if(yystack.l_mark[-2].a->type=='f'&& yystack.l_mark[0].a->type=='f')
           {
           printf("%c=%s+%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'f');
           }
         }
break;
case 7:
#line 113 "cal.y"
	{
           if(yystack.l_mark[-2].a->type=='f'&& yystack.l_mark[0].a->type=='i')
           {
           printf("%c=(float)%s\n",temp_num++,yystack.l_mark[0].a->str);
           printf("%c=%s-%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'f');
           }
           else if(yystack.l_mark[-2].a->type=='i'&& yystack.l_mark[0].a->type=='f')
           {
           printf("%c=(float)%s\n",temp_num++,yystack.l_mark[-2].a->str);
           printf("%c=%s-%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'f');
           }
           else if(yystack.l_mark[-2].a->type=='i'&& yystack.l_mark[0].a->type=='i')
           {
           printf("%c=%s-%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'i');
           }
           else if(yystack.l_mark[-2].a->type=='f'&& yystack.l_mark[0].a->type=='f')
           {
           printf("%c=%s-%s\n",temp_num,yystack.l_mark[-2].a->str,yystack.l_mark[0].a->str);
           yyval.a=creat(temp_num++,'f');
           }
         }
break;
case 8:
#line 139 "cal.y"
	{
           yyval.a=yystack.l_mark[0].a;
         }
break;
case 9:
#line 145 "cal.y"
	{
            yyval.a=yystack.l_mark[0].a ;
          }
break;
case 10:
#line 150 "cal.y"
	{
            yyval.a=yystack.l_mark[0].a ;
          }
break;
case 11:
#line 155 "cal.y"
	{
            yyval.a=yystack.l_mark[0].a ;
          }
break;
#line 533 "y.tab.c"
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
