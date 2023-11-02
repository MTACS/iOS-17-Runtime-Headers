
@interface GQHTableState : NSObject {
    void * mCellCountInColumns;
    double  mCurrentTablePosition;
    int  mGroupLevel;
    double  mLastAttachmentPosition;
    double  mOriginalTableHeight;
    int  mPrevColumnIndex;
    int  mPrevRowIndex;
    bool  mSplitTable;
    long long  mSplitTableIndex;
    GQDTTable * mTable;
}

- (void)addRowHeight:(float)arg1;
- (void*)cellCountInColumns;
- (double)currentTablePosition;
- (void)dealloc;
- (int)groupLevel;
- (id)init;
- (double)lastAttachmentPosition;
- (long long)nextSplitTableIndex;
- (double)originalTableHeight;
- (int)prevColumnIndex;
- (int)prevRowIndex;
- (void)setGroupLevel:(int)arg1;
- (void)setLastAttachmentPosition:(double)arg1;
- (void)setOriginalTableHeight:(double)arg1;
- (void)setPrevRowIndex:(int)arg1 columnIndex:(int)arg2;
- (void)setSplitTable:(bool)arg1;
- (void)setSplitTableIndex:(long long)arg1;
- (void)setTable:(id)arg1;
- (bool)splitTable;
- (id)table;

@end
