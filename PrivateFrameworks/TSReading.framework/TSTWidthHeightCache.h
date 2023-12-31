
@interface TSTWidthHeightCache : NSObject {
    struct vector<TSTWidthHeightCache_Private::WHCCol, std::allocator<TSTWidthHeightCache_Private::WHCCol>> { 
        struct WHCCol {} *__begin_; 
        struct WHCCol {} *__end_; 
        struct __compressed_pair<TSTWidthHeightCache_Private::WHCCol *, std::allocator<TSTWidthHeightCache_Private::WHCCol>> { 
            struct WHCCol {} *__value_; 
        } __end_cap_; 
    }  mFittingColumnWidth;
    struct vector<TSTWidthHeightCache_Private::WHCRow, std::allocator<TSTWidthHeightCache_Private::WHCRow>> { 
        struct WHCRow {} *__begin_; 
        struct WHCRow {} *__end_; 
        struct __compressed_pair<TSTWidthHeightCache_Private::WHCRow *, std::allocator<TSTWidthHeightCache_Private::WHCRow>> { 
            struct WHCRow {} *__value_; 
        } __end_cap_; 
    }  mFittingRowHeight;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  mLock;
    unsigned char  mMaxCol;
    unsigned short  mMaxRow;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  mModelColumnWidth;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  mModelRowHeight;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_increaseColCapacity:(unsigned int)arg1;
- (void)_increaseRowCapacity:(unsigned int)arg1;
- (void)dealloc;
- (bool)deleteColsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;
- (bool)deleteRowsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;
- (id)description;
- (double)getFitHeightForRow:(unsigned short)arg1;
- (double)getFitWidthForCol:(unsigned char)arg1;
- (id)getListOfInvalidColsInRow:(unsigned short)arg1;
- (double)getModelHeightForRow:(unsigned short)arg1;
- (double)getModelWidthForColumn:(unsigned char)arg1;
- (id)init;
- (id)initWithNumRows:(unsigned short)arg1 andNumCols:(unsigned short)arg2;
- (bool)insertCols:(unsigned short)arg1 atColumn:(unsigned char)arg2;
- (bool)insertRows:(unsigned short)arg1 atRow:(unsigned short)arg2;
- (void)logInternalState;
- (bool)moveColsFrom:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 toCol:(unsigned char)arg2;
- (bool)moveRowsFrom:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 toRow:(unsigned short)arg2;
- (unsigned long long)numModelColumnWidths;
- (unsigned long long)numModelRowHeights;
- (void)resetAllCol;
- (unsigned long long)resetAllInvalidColsInRow:(unsigned short)arg1;
- (void)resetAllRow;
- (void)resetColWidthsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;
- (void)resetFitHeightForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)resetModelCache;
- (bool)resetModelCacheRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)resetRowHeightForCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)resetRowHeightsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;
- (void)resetWidthsHeightsForRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)setFitDims:(struct CGSize { double x1; double x2; })arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (bool)setFitHeight:(double)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (bool)setFitWidth:(double)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (bool)setModelHeight:(double)arg1 forRow:(unsigned short)arg2;
- (bool)setModelWidth:(double)arg1 forColumn:(unsigned char)arg2;
- (void)setNumsRows:(unsigned short)arg1 andNumCols:(unsigned char)arg2;
- (id)validateChangeDescriptors:(id)arg1 tableModel:(id)arg2;
- (bool)verifyDims:(struct CGSize { double x1; double x2; })arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;

@end
