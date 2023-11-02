
@interface BWMovingWindowStats : BWStats {
    int  _dataPointIndex;
    double * _dataPoints;
    int  _numDataPoints;
    int  _windowSize;
}

@property (nonatomic, readonly) int windowSize;

- (void)addDataPoint:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithWindowSize:(int)arg1;
- (double)max;
- (double)min;
- (int)windowSize;

@end
