
@interface EBCell : NSObject

+ (int)convertEDErrorValueEnumToXl:(int)arg1;
+ (int)convertXlCellTypeToED:(int)arg1;
+ (int)convertXlErrorEnumToED:(int)arg1;
+ (void)readXlCell:(struct XlCell { int (**x1)(); unsigned short x2; short x3; short x4; int x5; double x6; struct XlString {} *x7; int x8; struct XlFormulaInfo {} *x9; bool x10; bool x11; bool x12; }*)arg1 edRowInfo:(struct EDRowInfo {}**)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5;

@end
