
@interface ATXInterruptedAppSessionSummaryMetrics : _ATXCoreAnalyticsMetric {
    unsigned long long  _interruptedAppSessions;
    unsigned long long  _totalAppSessions;
}

@property (nonatomic) unsigned long long interruptedAppSessions;
@property (nonatomic, readonly) double percentageInterruptedAppSessions;
@property (nonatomic) unsigned long long totalAppSessions;

- (id)coreAnalyticsDictionary;
- (id)initWithDimensions:(id)arg1;
- (unsigned long long)interruptedAppSessions;
- (id)metricName;
- (double)percentageInterruptedAppSessions;
- (void)setInterruptedAppSessions:(unsigned long long)arg1;
- (void)setTotalAppSessions:(unsigned long long)arg1;
- (unsigned long long)totalAppSessions;

@end
