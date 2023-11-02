
@protocol TSCERefParsingProtocol <NSObject>

@required

- (id)initWithCalcEngine:(TSCECalculationEngine *)arg1;
- (TSCECategoryRef *)parseAsCategoryRefWithParsingContext:(TSCEReferenceParsingContext *)arg1;
- (TSCEWrappedRangeRef *)parseAsChromeRefWithParsingContext:(TSCEReferenceParsingContext *)arg1;
- (TSCECellTractRef *)parseAsTractRefWithParsingContext:(TSCEReferenceParsingContext *)arg1;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })parseR1C1Coord:(NSString *)arg1 containingCell:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg2 preserveFlagsOut:(struct TSUPreserveFlags { unsigned char x1; }*)arg3;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })parseR1C1Reference:(NSString *)arg1 containingCell:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg2 preserveFlagsOut:(struct TSUPreserveFlags { unsigned char x1; }*)arg3;
- (struct RefTypeHolder<TSCERangeRef, 0> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_3_1; unsigned short x_1_3_2; bool x_1_3_3; bool x_1_3_4; } x_1_2_1; struct TSUCellCoord { unsigned int x_2_3_1; unsigned short x_2_3_2; bool x_2_3_3; bool x_2_3_4; } x_1_2_2; } x_1_1_1; struct TSKUIDStruct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; } x1; })parseStringAsBaseReference:(NSString *)arg1 withParsingContext:(TSCEReferenceParsingContext *)arg2;
- (TSCECategoryRef *)parseStringAsCategoryRef:(NSString *)arg1 withParsingContext:(TSCEReferenceParsingContext *)arg2;
- (struct RefTypeHolder<TSCERangeRef, 2> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_3_1; unsigned short x_1_3_2; bool x_1_3_3; bool x_1_3_4; } x_1_2_1; struct TSUCellCoord { unsigned int x_2_3_1; unsigned short x_2_3_2; bool x_2_3_3; bool x_2_3_4; } x_1_2_2; } x_1_1_1; struct TSKUIDStruct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; } x1; })parseStringAsChromeReference:(NSString *)arg1 withParsingContext:(TSCEReferenceParsingContext *)arg2;

@end
