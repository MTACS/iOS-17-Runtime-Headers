
@interface SiriInvocationAnalytics.AccumulatedAggregationStats : NSObject {
    void aggregationStartTimestamp;
    void aggregationStats;
    void cohortType;
    void intendedRequestRatio;
    void numberOfDaysAggregation;
}

@property (nonatomic) double aggregationStartTimestamp;
@property (nonatomic, copy) NSArray *aggregationStats;
@property (nonatomic, copy) NSString *cohortType;
@property (nonatomic) double intendedRequestRatio;
@property (nonatomic) long long numberOfDaysAggregation;

- (void).cxx_destruct;
- (double)aggregationStartTimestamp;
- (id)aggregationStats;
- (id)cohortType;
- (id)init;
- (double)intendedRequestRatio;
- (long long)numberOfDaysAggregation;
- (void)setAggregationStartTimestamp:(double)arg1;
- (void)setAggregationStats:(id)arg1;
- (void)setCohortType:(id)arg1;
- (void)setIntendedRequestRatio:(double)arg1;
- (void)setNumberOfDaysAggregation:(long long)arg1;

@end
