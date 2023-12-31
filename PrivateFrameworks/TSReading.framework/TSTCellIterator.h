
@interface TSTCellIterator : NSObject {
    TSTCell * mCell;
    TSTTableTileRowInfo * mCurRow;
    unsigned short  mCurRowID;
    TSTTableTile * mCurTile;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mCurTileRange;
    bool  mDontCheckSize;
    bool  mDontExpandCellRefs;
    bool  mDontInflateFormulas;
    bool  mDontReturnMergeRegions;
    TSTCellRegion * mModelRegion;
    NSObject<TSTCellRegionIterating> * mModelRegionIterator;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mPreviousCellID;
    bool  mReturnEmptyCells;
    bool  mReturnHiddenCells;
    int  mRowWalkDirection;
    bool  mSkipCommentStorageOnlyCells;
    bool  mSkipStyleOnlyCells;
    TSTTableDataStore * mTableDataStore;
    TSTTableModel * mTableModel;
}

@property (readonly) bool dontExpandCellRefs;
@property (readonly) int rowWalkDirection;

- (void)dealloc;
- (bool)dontExpandCellRefs;
- (bool)getNext:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; id x3; struct TSTCellStorage {} *x4; struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_5_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_5_1_2; } x5; bool x6; bool x7; bool x8; bool x9; bool x10; }*)arg1;
- (id)initWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1 flags:(unsigned long long)arg2;
- (id)initWithTableModel:(id)arg1 range:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithTableModel:(id)arg1 range:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 flags:(unsigned long long)arg3;
- (id)initWithTableModel:(id)arg1 region:(id)arg2;
- (id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3;
- (bool)p_getData:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; id x3; struct TSTCellStorage {} *x4; struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_5_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_5_1_2; } x5; bool x6; bool x7; bool x8; bool x9; bool x10; }*)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)p_resetIterData:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; id x3; struct TSTCellStorage {} *x4; struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_5_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_5_1_2; } x5; bool x6; bool x7; bool x8; bool x9; bool x10; }*)arg1;
- (int)rowWalkDirection;
- (void)terminate;

@end
