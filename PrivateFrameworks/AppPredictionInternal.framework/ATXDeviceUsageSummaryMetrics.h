
@interface ATXDeviceUsageSummaryMetrics : _ATXCoreAnalyticsMetric {
    unsigned long long  _devicePickupCount;
    NSDate * _lastEntryTime;
    double  _totalDeviceOnTime;
    double  _totalTime;
}

@property (nonatomic, readonly) double averagePickupDuration;
@property (nonatomic, readonly) unsigned long long devicePickupCount;
@property (nonatomic, readonly) double totalDeviceOnTime;
@property (nonatomic, readonly) double totalTime;

- (void).cxx_destruct;
- (double)averagePickupDuration;
- (id)coreAnalyticsDictionary;
- (unsigned long long)devicePickupCount;
- (void)handleConfigurationEntry:(id)arg1;
- (void)handleConfigurationExit:(id)arg1;
- (void)handleOnInterval:(id)arg1;
- (id)initWithDimensions:(id)arg1;
- (id)metricName;
- (double)totalDeviceOnTime;
- (double)totalTime;

@end
