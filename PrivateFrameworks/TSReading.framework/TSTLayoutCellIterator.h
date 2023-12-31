
@interface TSTLayoutCellIterator : TSTCellIterator {
    TSTCell * mLayoutCell;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mLayoutCellID;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mLayoutRange;
    TSTMasterLayout * mMasterLayout;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } mPreviousCellID; 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } mCellID; 
        TSTCell *mCell; 
        struct TSTCellStorage {} *mCellRef; 
        struct { 
            struct { 
                unsigned short row; 
                unsigned char column; 
                unsigned char reserved; 
            } origin; 
            struct { 
                unsigned short numberOfColumns; 
                unsigned short numberOfRows; 
            } size; 
        } mMergeRange; 
        bool mStyleOnly; 
        bool mCommentStorageOnly; 
        bool mHidden; 
        bool mHiddenRow; 
        bool mHiddenColumn; 
    }  mModelIteratorData;
    bool  mModelIteratorHasCell;
    unsigned short  mNumberOfColumns;
    unsigned short  mNumberOfLayoutColumns;
    unsigned short  mNumberOfRows;
    bool  mQueriedModel;
}

@property (nonatomic, readonly) TSTMasterLayout *masterLayout;
@property (nonatomic, readonly) TSTTableModel *tableModel;

- (void)dealloc;
- (id)initWithLayout:(id)arg1;
- (id)initWithLayout:(id)arg1 range:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithLayout:(id)arg1 range:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 flags:(unsigned long long)arg3;
- (id)initWithMasterLayout:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 range:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithMasterLayout:(id)arg1 range:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 flags:(unsigned long long)arg3;
- (id)masterLayout;
- (id)tableModel;

@end
