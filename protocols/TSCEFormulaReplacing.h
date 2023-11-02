
@protocol TSCEFormulaReplacing <NSObject>

@required

- (TSCECalculationEngine *)calcEngine;
- (void)markCellRefAsDirty:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg1;
- (void)markRangeRefAsDirty:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg1;
- (void)removeAllFormulasFromOwner:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)removeFormulaAt:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg1 inOwner:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)removeFormulasAt:(const void*)arg1;
- (void)replaceFormula:(id <TSCEFormulaReturning>)arg1 atCellCoord:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg2 inOwner:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg3;
- (void)replaceFormula:(id <TSCEFormulaReturning>)arg1 atCellCoord:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg2 inOwner:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg3 replaceOptions:(struct TSCEReplaceFormulaOptions { bool x1; bool x2; bool x3; bool x4; bool x5; struct TSKUIDStruct { unsigned long long x_6_1_1; unsigned long long x_6_1_2; } x6; id x7; })arg4;
- (void)replaceFormulaAt:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg1 inOwner:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2 precedents:(TSCEReferenceSetWrapper *)arg3 replaceOptions:(struct TSCEReplaceFormulaOptions { bool x1; bool x2; bool x3; bool x4; bool x5; struct TSKUIDStruct { unsigned long long x_6_1_1; unsigned long long x_6_1_2; } x6; id x7; })arg4;
- (void)resetFormulaAt:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg1;

@end
