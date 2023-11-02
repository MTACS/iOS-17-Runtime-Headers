
@interface HKChartSummaryTimescopeTrend : NSObject {
    NSString * _localizableTrendDescription;
    long long  _timeScope;
    NSArray * _trendSpans;
}

@property (nonatomic, readonly) NSString *localizableTrendDescription;
@property (nonatomic, readonly) long long timeScope;
@property (nonatomic, readonly) NSArray *trendSpans;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initForTimeScope:(long long)arg1 trendSpans:(id)arg2 localizableTrendDescription:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizableTrendDescription;
- (long long)timeScope;
- (id)trendSpans;

@end
