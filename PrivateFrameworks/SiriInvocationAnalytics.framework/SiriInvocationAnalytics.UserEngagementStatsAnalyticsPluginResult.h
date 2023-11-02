
@interface SiriInvocationAnalytics.UserEngagementStatsAnalyticsPluginResult : NSObject {
    void accumulatedAggregationStats;
    void dailyAggregatedStats;
}

@property (nonatomic, copy) NSArray *accumulatedAggregationStats;
@property (nonatomic, retain) _TtC23SiriInvocationAnalytics27AccumulatedAggregationStats *dailyAggregatedStats;

- (void).cxx_destruct;
- (id)accumulatedAggregationStats;
- (id)dailyAggregatedStats;
- (id)init;
- (void)setAccumulatedAggregationStats:(id)arg1;
- (void)setDailyAggregatedStats:(id)arg1;

@end
