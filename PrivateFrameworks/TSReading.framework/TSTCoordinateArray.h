
@interface TSTCoordinateArray : NSObject {
    double  mAverage;
    double * mCoordinates;
    unsigned int  mCount;
    bool  mLayoutDirectionIsLeftToRight;
    unsigned int  mOffset;
    double  mTableWidth;
    NSMutableIndexSet * mVisibleIndices;
}

- (void)dealloc;
- (id)description;
- (void)hasRightToLeftOrderingWithWidth:(double)arg1;
- (id)initWithCount:(unsigned int)arg1 atOffset:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;

@end
