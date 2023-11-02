
@protocol TSTTableTileCreating

@required

- (void)enumerateCellsForSOSSerializationWithBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TSTCell *, struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }, bool*, void*
- (struct TSUModelColumnIndex { unsigned short x1; })numberOfColumns;
- (struct TSUModelRowIndex { unsigned int x1; })numberOfRows;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; })range;
- (TSWPParagraphStyle *)textStyleAtModelCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1 isDefault:(out bool*)arg2;

@end
