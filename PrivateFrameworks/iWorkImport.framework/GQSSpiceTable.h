
@interface GQSSpiceTable : GQSTable {
    void * mColumnPositions;
    float  mCurrentCellMaxX;
    float  mCurrentCellMaxY;
    float  mCurrentCellMinX;
    float  mCurrentCellMinY;
    id  mCurrentCellStorage;
    id  mCurrentCellStyle;
    bool  mReadingRowVectors;
    void * mRowPositions;
    struct __CFDictionary { } * mVectorUidToAlongMap;
}

- (void)aboutToReadCells;
- (void)aboutToReadColumnVectors;
- (void)aboutToReadRowVectors;
- (float)alongValueForVectorUid:(const char *)arg1;
- (void)dealloc;
- (id)init;
- (void)setAlongValue:(float)arg1 forOwnedVectorUid:(char *)arg2;

@end
