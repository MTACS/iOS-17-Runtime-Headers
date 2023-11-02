
@interface PXStatsCalculator : NSObject {
    long long  _count;
    double  _first;
    double  _max;
    double  _min;
    double  _squareSum;
    double  _sum;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) double first;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double mean;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double standardDeviation;

- (void)addValue:(double)arg1;
- (long long)count;
- (double)first;
- (id)init;
- (double)max;
- (double)mean;
- (double)min;
- (double)standardDeviation;

@end
