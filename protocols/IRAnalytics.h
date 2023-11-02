
@protocol IRAnalytics <NSObject>

@optional

- (NSDictionary *)uiAnalyticsWithEvent:(IREventDO *)arg1 forCandidateIdentifier:(NSString *)arg2 systemState:(IRSystemStateDO *)arg3 candidatesContainer:(IRCandidatesContainerDO *)arg4 miloPrediction:(IRMiloLslPredictionDO *)arg5 inspections:(NSDictionary *)arg6 statisticsManager:(IRStatisticsManager *)arg7 service:(IRServiceDO *)arg8;
- (NSDictionary *)weeklyAnalyticsWithServiceStore:(IRServiceStore *)arg1 statistics:(IRStatisticsDO *)arg2 service:(IRServiceDO *)arg3;

@end
