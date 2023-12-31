
@interface TSTHiddenRowsColumnsCache : NSObject <NSCopying> {
    TSTHiddenDimensionCache * mHiddenColumns;
    TSTHiddenDimensionCache * mHiddenRows;
}

@property (nonatomic, readonly) NSIndexSet *visibleColumnIndices;
@property (nonatomic, readonly) NSIndexSet *visibleRowIndices;

- (bool)anyColumnsHiddenInCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)anyRowsHiddenInCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)anyRowsUserHiddenInCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isColumnHidden:(unsigned char)arg1;
- (bool)isRowHidden:(unsigned short)arg1;
- (bool)isRowUserHidden:(unsigned short)arg1;
- (unsigned char)nextVisibleColumn:(unsigned char)arg1;
- (unsigned short)nextVisibleRow:(unsigned short)arg1;
- (unsigned short)numberColumnsHiddenInCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (unsigned short)numberOfVisibleRowsFromHeader:(unsigned short)arg1;
- (unsigned short)numberRowsHiddenInCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (unsigned short)numberRowsUserHiddenInCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)pop;
- (unsigned char)previousNthVisibleColumn:(unsigned short)arg1 fromColumnIndex:(unsigned char)arg2;
- (unsigned short)previousNthVisibleRow:(unsigned short)arg1 fromRowIndex:(unsigned short)arg2;
- (unsigned char)previousVisibleColumn:(unsigned char)arg1;
- (unsigned short)previousVisibleRow:(unsigned short)arg1;
- (void)push;
- (void)pushAndValidate:(id)arg1;
- (void)swap;
- (void)validate:(id)arg1;
- (void)validateChangeDescriptors:(id)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })visibleCellOffsetBy:(struct { int x1; int x2; })arg1 fromCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)visibleColumnIndices;
- (id)visibleRowIndices;

@end
