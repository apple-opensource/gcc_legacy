typedef union {long itype; tree ttype; enum tree_code code;
	char *filename; int lineno; int ends_in_label; } YYSTYPE;
#define	IDENTIFIER	257
#define	TYPENAME	258
#define	SCSPEC	259
#define	TYPESPEC	260
#define	TYPE_QUAL	261
#define	CONSTANT	262
#define	STRING	263
#define	ELLIPSIS	264
#define	SIZEOF	265
#define	ENUM	266
#define	STRUCT	267
#define	UNION	268
#define	IF	269
#define	ELSE	270
#define	WHILE	271
#define	DO	272
#define	FOR	273
#define	SWITCH	274
#define	CASE	275
#define	DEFAULT	276
#define	BREAK	277
#define	CONTINUE	278
#define	RETURN	279
#define	GOTO	280
#define	ASM_KEYWORD	281
#define	TYPEOF	282
#define	ALIGNOF	283
#define	ATTRIBUTE	284
#define	EXTENSION	285
#define	LABEL	286
#define	REALPART	287
#define	IMAGPART	288
#define	VEC_STEP	289
#define	ASSIGN	290
#define	OROR	291
#define	ANDAND	292
#define	EQCOMPARE	293
#define	ARITHCOMPARE	294
#define	LSHIFT	295
#define	RSHIFT	296
#define	UNARY	297
#define	PLUSPLUS	298
#define	MINUSMINUS	299
#define	HYPERUNARY	300
#define	POINTSAT	301
#define	INTERFACE	302
#define	IMPLEMENTATION	303
#define	END	304
#define	SELECTOR	305
#define	DEFS	306
#define	ENCODE	307
#define	CLASSNAME	308
#define	PUBLIC	309
#define	PRIVATE	310
#define	PROTECTED	311
#define	PROTOCOL	312
#define	OBJECTNAME	313
#define	CLASS	314
#define	ALIAS	315
#define	OBJC_STRING	316


extern YYSTYPE yylval;
