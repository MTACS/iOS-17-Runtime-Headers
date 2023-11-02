
@protocol TSTPdfTagger <TSKPdfTagger>

@required

- (void)beginCheckboxCell:(bool)arg1;
- (void)beginRatingCell:(double)arg1;
- (void)beginTableCell:(TSTCell *)arg1 withCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2 cellHasContents:(bool)arg3 cellIsPrimary:(bool)arg4;
- (void)beginTableChunk:(TSTTableRep *)arg1;
- (void)beginTableLayoutSpace:(TSTLayoutSpace *)arg1;
- (void)beginTableNameForChunk:(TSTTableRep *)arg1;
- (void)beginTableRow:(unsigned int)arg1;
- (void)endCheckboxCell;
- (void)endRatingCell;
- (void)endTableCell:(TSTCell *)arg1 withCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2 cellHasContents:(bool)arg3 cellIsPrimary:(bool)arg4;
- (void)endTableChunk:(TSTTableRep *)arg1;
- (void)endTableLayoutSpace:(TSTLayoutSpace *)arg1;
- (void)endTableNameForChunk:(TSTTableRep *)arg1;
- (void)endTableRow:(unsigned int)arg1;

@end
