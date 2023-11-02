
@interface DNDSMutableMetricsRecord : DNDSMetricsRecord

@property (nonatomic, copy) NSDate *lastDailyHeartbeat;
@property (nonatomic, copy) NSDate *lastMonthlyHeartbeat;
@property (nonatomic, copy) NSDate *lastWeeklyHeartbeat;
@property (nonatomic, copy) NSDictionary *metricsByDay;
@property (nonatomic, copy) NSDictionary *metricsByMonth;
@property (nonatomic, copy) NSDictionary *metricsByWeek;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setLastDailyHeartbeat:(id)arg1;
- (void)setLastMonthlyHeartbeat:(id)arg1;
- (void)setLastWeeklyHeartbeat:(id)arg1;
- (void)setMetricsByDay:(id)arg1;
- (void)setMetricsByMonth:(id)arg1;
- (void)setMetricsByWeek:(id)arg1;

@end
