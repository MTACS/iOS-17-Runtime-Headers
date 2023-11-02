
@interface NFGeneralStatisticsCALogger : NSObject

+ (void)_resetGeneralDeviceStatisticToDefaults;
+ (void)_setupInitValuesForGeneralTransactionStatistics;
+ (void)postAnalyticsGeneralTransactionStatistics;
+ (void)postAnalyticsSetupEndpoints:(unsigned int)arg1 totalUnknowntoSE:(unsigned int)arg2;
+ (void)postGeneralDeviceStatistics;
+ (void)postPlasticCardEnableStatus:(bool)arg1 aid:(id)arg2;
+ (void)updateAnalyticsGeneralTransactionStatistics:(id)arg1;
+ (void)updateGeneralDeviceStatistic:(id)arg1;

@end
