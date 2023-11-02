
@interface _PXStoryPPTMeasureInfo : NSObject {
    long long  _metric;
    PXStatsCalculator * _statistics;
}

@property (nonatomic, readonly) long long metric;
@property (nonatomic, readonly) PXStatsCalculator *statistics;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMetric:(long long)arg1;
- (long long)metric;
- (id)statistics;

@end
