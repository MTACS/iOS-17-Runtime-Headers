
@interface OADTableStyleResolver : NSObject {
    void * mCellMatrix;
    void * mCellStyles;
    int  mColumnCount;
    int  mRowCount;
    void * mStrokes;
    OADTable * mTable;
    OADTableProperties * mTableProperties;
    OADTableStyle * mTableStyle;
}

- (void).cxx_destruct;
- (void)applyBandCellStyles;
- (void)applyBandStrokes;
- (void)applyCellStyleFromPart:(int)arg1 dir1:(int)arg2 fromI1:(int)arg3 fromI2:(int)arg4 dir1Span:(int)arg5 dir2Span:(int)arg6;
- (void)applyCellStyleOfBandsNormalToDir:(int)arg1 parity:(int)arg2 part:(int)arg3;
- (void)applyCellStyleOfExtremeVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2 part:(int)arg3;
- (void)applyCellStyles;
- (void)applyCornerCellStyleWithRowPos:(int)arg1 columnPos:(int)arg2 part:(int)arg3;
- (void)applyCornerCellStyles;
- (void)applyCornerStrokes;
- (void)applyCornerStrokesWithRowPos:(int)arg1 columnPos:(int)arg2 part:(int)arg3;
- (void)applyExtremeVectorCellStyles;
- (void)applyExtremeVectorStrokes;
- (void)applyResolvedPartStyle:(id)arg1 leftStroke:(id)arg2 rightStroke:(id)arg3 topStroke:(id)arg4 bottomStroke:(id)arg5 toCell:(id)arg6;
- (void)applyResolvedStyling;
- (void)applyStroke:(int)arg1 fromPart:(int)arg2 normalToDir1:(int)arg3 i1:(int)arg4 fromI2:(int)arg5 dir2Span:(int)arg6;
- (void)applyStroke:(int)arg1 fromPart:(int)arg2 normalToDir1:(int)arg3 i1:(int)arg4 fromI2:(int)arg5 toI2:(int)arg6;
- (void)applyStrokeOfExtremeVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2;
- (void)applyStrokesFromPart:(int)arg1 fromPos:(struct OADTMatrixPos { int x1; int x2; })arg2 toPos:(struct OADTMatrixPos { int x1; int x2; })arg3;
- (void)applyStrokesOfBandsNormalToDir:(int)arg1 parity:(int)arg2 part:(int)arg3;
- (void)applyStyleStrokes;
- (void)applyTextStyle:(id)arg1 toCell:(id)arg2;
- (void)applyTextStyle:(id)arg1 toParagraph:(id)arg2;
- (void)applyWholeTableCellStyle;
- (void)applyWholeTableStrokes;
- (int)cellCountAlongDir:(int)arg1;
- (int)cellParityRelativeToDir1:(int)arg1 i1:(int)arg2 i2:(int)arg3;
- (void)createStrokeMatrices;
- (void)dealloc;
- (struct OADTMatrixPos { int x1; int x2; })dominantCellInRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 columnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)fixVectorAtExtremePositionFlags;
- (void)flatten;
- (id)initWithTable:(id)arg1;
- (void)loadCells;
- (void)setStroke:(id)arg1 ofSegmentNormalToDir1:(int)arg2 i1:(int)arg3 fromI2:(int)arg4;
- (id)sourceCellAtI1:(int)arg1 i2:(int)arg2 dir1:(int)arg3;
- (id)strokeOfSegmentNormalToDir1:(int)arg1 i1:(int)arg2 fromI2:(int)arg3;

@end
