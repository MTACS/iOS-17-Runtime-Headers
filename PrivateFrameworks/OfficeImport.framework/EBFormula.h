
@interface EBFormula : NSObject

+ (id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withFormulaLength:(int)arg2 formulaClass:(Class)arg3 state:(id)arg4;
+ (id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withFormulaLength:(int)arg2 state:(id)arg3;
+ (id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withTokenLength:(int)arg2 formulaLength:(int)arg3 formulaClass:(Class)arg4 edSheet:(id)arg5 state:(id)arg6;
+ (char *)edFormulaToParsedExpression:(id)arg1 tokenLength:(unsigned short*)arg2 formulaLength:(unsigned short*)arg3 state:(id)arg4;
+ (void)readFormulaFromXlCell:(struct XlCell { int (**x1)(); unsigned short x2; short x3; short x4; int x5; double x6; struct XlString {} *x7; int x8; struct XlFormulaInfo {} *x9; bool x10; bool x11; bool x12; }*)arg1 edCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg2 edRowBlocks:(id)arg3 state:(id)arg4;
+ (void)setupTokensInEDFormulaFromXlFormulaProcessor:(void*)arg1 length:(int)arg2 edFormula:(id)arg3 edSheet:(id)arg4;
+ (unsigned int)writeToken:(id)arg1 tokenIndex:(unsigned int)arg2 tokenStream:(struct XLFormulaStream { int (**x1)(); }*)arg3 extendedStream:(struct XLFormulaStream { int (**x1)(); }*)arg4 state:(id)arg5;
+ (struct XlFormulaInfo { int (**x1)(); int x2; struct OcText {} *x3; char *x4; unsigned int x5; short x6; struct XlShrFmla {} *x7; struct XlArray {} *x8; struct XlTable {} *x9; bool x10; bool x11; bool x12; bool x13; }*)xlFormulaInfoFromEDFormula:(id)arg1 state:(id)arg2;
+ (struct XlFormulaInfo { int (**x1)(); int x2; struct OcText {} *x3; char *x4; unsigned int x5; short x6; struct XlShrFmla {} *x7; struct XlArray {} *x8; struct XlTable {} *x9; bool x10; bool x11; bool x12; bool x13; }*)xlFormulaInfoFromEDSharedFormula:(id)arg1 state:(id)arg2;

@end
