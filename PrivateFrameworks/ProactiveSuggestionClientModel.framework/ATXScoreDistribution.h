
@interface ATXScoreDistribution : NSObject {
    double  _max;
    double  _min;
    NSMutableArray * _scores;
    double  _sum;
}

@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double mean;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double standardDeviation;

- (void).cxx_destruct;
- (void)enumerateAsHistogramWithNumberOfBins:(unsigned long long)arg1 binHandler:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXDeviceLevelMetricsScoreDistribution:(id)arg1;
- (double)max;
- (double)mean;
- (double)min;
- (void)recordScore:(double)arg1;
- (double)standardDeviation;

@end
