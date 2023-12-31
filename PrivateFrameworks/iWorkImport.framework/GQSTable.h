
@interface GQSTable : NSObject {
    bool  mAlwaysPutReadCellsInArray;
    long long  mCellCount;
    GQDTOverlapCell * mCurrentOverlapCell;
    bool  mIsCounting;
    bool  mIsStreaming;
    GQDTCell * mLastCellRead;
    GQDTTable * mTable;
}

- (bool)alwaysPutReadCellsInArray;
- (long long)column;
- (id)currentOverlapCell;
- (void)dealloc;
- (void)incrementCellPosition;
- (id)initWithStreaming:(bool)arg1 table:(id)arg2;
- (bool)isCounting;
- (bool)isStreaming;
- (id)lastCellRead;
- (long long)row;
- (void)setAlwaysPutReadCellsInArray:(bool)arg1;
- (void)setCurrentOverlapCell:(id)arg1;
- (void)setIsCountingCount:(bool)arg1;
- (void)setLastCellRead:(id)arg1;
- (void)skipCells:(long long)arg1;
- (id)table;

@end
