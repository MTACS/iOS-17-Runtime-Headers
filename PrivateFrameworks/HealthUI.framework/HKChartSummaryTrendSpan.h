
@interface HKChartSummaryTrendSpan : NSObject {
    HKQuantity * _trendAverage;
    NSDateInterval * _trendDateInterval;
}

@property (nonatomic, readonly) HKQuantity *trendAverage;
@property (nonatomic, readonly) NSDateInterval *trendDateInterval;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTrendDateInterval:(id)arg1 trendAverage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)trendAverage;
- (id)trendDateInterval;

@end
