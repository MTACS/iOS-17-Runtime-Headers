
@protocol TSCECoordMappingProtocol

@required

- (struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })baseCellCoordForChromeCellCoord:(struct TSUChromeCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })baseCellCoordForViewCellCoord:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct RefTypeHolder<TSCECellRef, 0> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSKUIDStruct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; } x1; })baseCellRefForChromeCellRef:(const void*)arg1;
- (struct RefTypeHolder<TSCECellRef, 0> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSKUIDStruct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; } x1; })baseCellRefForViewCellRef:(const void*)arg1;
- (struct TSUModelColumnIndex { unsigned short x1; })baseColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex { unsigned short x1; })arg1;
- (struct TSUModelColumnIndex { unsigned short x1; })baseColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex { unsigned short x1; })arg1;
- (NSIndexSet *)baseColumnIndexesForViewColumnIndexes:(NSIndexSet *)arg1;
- (struct TSUModelRowIndex { unsigned int x1; })baseRowIndexForChromeRowIndex:(struct TSUChromeRowIndex { unsigned int x1; })arg1;
- (struct TSUModelRowIndex { unsigned int x1; })baseRowIndexForViewRowIndex:(struct TSUViewRowIndex { unsigned int x1; })arg1;
- (NSIndexSet *)baseRowIndexesForViewRowIndexes:(NSIndexSet *)arg1;
- (TSKShuffleMapping *)baseShuffleMapForViewShuffleMap:(TSKShuffleMapping *)arg1;
- (TSCECellTractRef *)baseTractRefForChromeTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)baseTractRefForViewTractRef:(TSCECellTractRef *)arg1;
- (struct TSUChromeCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })chromeCellCoordForBaseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct TSUChromeCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })chromeCellCoordForViewCellCoord:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct RefTypeHolder<TSCECellRef, 2> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSKUIDStruct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; } x1; })chromeCellRefForBaseCellRef:(const void*)arg1;
- (struct RefTypeHolder<TSCECellRef, 2> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSKUIDStruct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; } x1; })chromeCellRefForViewCellRef:(const void*)arg1;
- (struct TSUChromeColumnIndex { unsigned short x1; })chromeColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1;
- (struct TSUChromeColumnIndex { unsigned short x1; })chromeColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex { unsigned short x1; })arg1;
- (NSIndexSet *)chromeColumnIndexesForViewColumnIndexes:(NSIndexSet *)arg1;
- (bool)chromeCoordsAreViewCoords;
- (struct RefTypeHolder<TSCERangeRef, 2> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_3_1; unsigned short x_1_3_2; bool x_1_3_3; bool x_1_3_4; } x_1_2_1; struct TSUCellCoord { unsigned int x_2_3_1; unsigned short x_2_3_2; bool x_2_3_3; bool x_2_3_4; } x_1_2_2; } x_1_1_1; struct TSKUIDStruct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; } x1; })chromeRangeRefForViewRangeRef:(const void*)arg1;
- (struct TSUChromeRowIndex { unsigned int x1; })chromeRowIndexForBaseRowIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1;
- (struct TSUChromeRowIndex { unsigned int x1; })chromeRowIndexForViewRowIndex:(struct TSUViewRowIndex { unsigned int x1; })arg1;
- (NSIndexSet *)chromeRowIndexesForViewRowIndexes:(NSIndexSet *)arg1;
- (TSCECellTractRef *)chromeTractRefForBaseTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)chromeTractRefForViewTractRef:(TSCECellTractRef *)arg1;
- (bool)isIdentityMapping;
- (void)setChromeCoordsAreViewCoords:(bool)arg1;
- (struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })summaryCellCoordForViewCellCoord:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct TSUModelColumnIndex { unsigned short x1; })summaryColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex { unsigned short x1; })arg1;
- (struct TSUModelRowIndex { unsigned int x1; })summaryRowIndexForViewRowIndex:(struct TSUViewRowIndex { unsigned int x1; })arg1;
- (const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)tableUID;
- (struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })viewCellCoordForBaseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })viewCellCoordForChromeCellCoord:(struct TSUChromeCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })viewCellCoordForSummaryCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct RefTypeHolder<TSCECellRef, 1> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSKUIDStruct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; } x1; })viewCellRefForBaseCellRef:(const void*)arg1;
- (struct RefTypeHolder<TSCECellRef, 1> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSKUIDStruct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; } x1; })viewCellRefForChromeCellRef:(const void*)arg1;
- (struct TSUViewColumnIndex { unsigned short x1; })viewColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1;
- (struct TSUViewColumnIndex { unsigned short x1; })viewColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex { unsigned short x1; })arg1;
- (struct TSUViewColumnIndex { unsigned short x1; })viewColumnIndexForSummaryColumnIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1;
- (NSIndexSet *)viewColumnIndexesForBaseColumnIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)viewColumnIndexesForChromeColumnIndexes:(NSIndexSet *)arg1;
- (struct RefTypeHolder<TSCERangeRef, 1> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_3_1; unsigned short x_1_3_2; bool x_1_3_3; bool x_1_3_4; } x_1_2_1; struct TSUCellCoord { unsigned int x_2_3_1; unsigned short x_2_3_2; bool x_2_3_3; bool x_2_3_4; } x_1_2_2; } x_1_1_1; struct TSKUIDStruct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; } x1; })viewRangeRefForChromeRangeRef:(const void*)arg1;
- (struct TSUViewRowIndex { unsigned int x1; })viewRowIndexForBaseRowIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1;
- (struct TSUViewRowIndex { unsigned int x1; })viewRowIndexForChromeRowIndex:(struct TSUChromeRowIndex { unsigned int x1; })arg1;
- (struct TSUViewRowIndex { unsigned int x1; })viewRowIndexForSummaryRowIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1;
- (NSIndexSet *)viewRowIndexesForBaseRowIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)viewRowIndexesForChromeRowIndexes:(NSIndexSet *)arg1;
- (TSCECellTractRef *)viewTractRefForBaseTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)viewTractRefForChromeTractRef:(TSCECellTractRef *)arg1;

@end
