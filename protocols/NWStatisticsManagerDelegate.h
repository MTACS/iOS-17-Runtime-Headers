
@protocol NWStatisticsManagerDelegate <NSObject>

@optional

- (void)statisticsManager:(NWStatisticsManager *)arg1 didAddSource:(NWStatisticsSource *)arg2;
- (void)statisticsManager:(NWStatisticsManager *)arg1 didReceiveDirectSystemInformation:(NSDictionary *)arg2;
- (void)statisticsManager:(NWStatisticsManager *)arg1 didRemoveSource:(NWStatisticsSource *)arg2;

@end
