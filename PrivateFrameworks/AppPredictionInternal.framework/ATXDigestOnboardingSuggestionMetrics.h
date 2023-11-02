
@interface ATXDigestOnboardingSuggestionMetrics : _ATXCoreAnalyticsMetric {
    NSString * _outcome;
    NSString * _sessionUUID;
    double  _timeToResolution;
}

@property (nonatomic, retain) NSString *outcome;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) double timeToResolution;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)metricName;
- (id)outcome;
- (id)sessionUUID;
- (void)setOutcome:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimeToResolution:(double)arg1;
- (double)timeToResolution;

@end
