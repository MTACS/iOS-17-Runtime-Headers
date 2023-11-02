
@protocol TSTCellIteratorData <NSObject>

@required

- (TSTCell *)cell;
- (bool)cellHasCommentStorage;
- (bool)cellHasConditionalStyle;
- (bool)cellHasCustomFormat;
- (bool)cellHasFormula;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })cellID;
- (bool)cellIsEmpty;
- (unsigned char)cellValueType;
- (TSTCellFormulaSpec *)formulaSpec;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })mergeRange;

@end
