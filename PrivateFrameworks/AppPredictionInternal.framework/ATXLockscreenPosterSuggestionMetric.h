
@interface ATXLockscreenPosterSuggestionMetric : _ATXCoreAnalyticsMetric {
    bool  _engaged;
    NSString * _extensionBundleId;
    bool  _outcome;
    unsigned long long  _section;
    NSString * _sessionId;
}

@property (nonatomic) bool engaged;
@property (nonatomic, copy) NSString *extensionBundleId;
@property (nonatomic) bool outcome;
@property (nonatomic) unsigned long long section;
@property (nonatomic, copy) NSString *sessionId;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (bool)engaged;
- (id)extensionBundleId;
- (id)metricName;
- (bool)outcome;
- (unsigned long long)section;
- (id)sessionId;
- (void)setEngaged:(bool)arg1;
- (void)setExtensionBundleId:(id)arg1;
- (void)setOutcome:(bool)arg1;
- (void)setSection:(unsigned long long)arg1;
- (void)setSessionId:(id)arg1;

@end
