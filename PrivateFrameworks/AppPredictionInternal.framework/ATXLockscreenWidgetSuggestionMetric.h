
@interface ATXLockscreenWidgetSuggestionMetric : _ATXCoreAnalyticsMetric {
    NSString * _extensionBundleId;
    unsigned long long  _family;
    NSString * _kind;
    long long  _numEngaged;
    bool  _outcome;
    unsigned long long  _reason;
    NSString * _sessionId;
}

@property (nonatomic, copy) NSString *extensionBundleId;
@property (nonatomic) unsigned long long family;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic) long long numEngaged;
@property (nonatomic) bool outcome;
@property (nonatomic) unsigned long long reason;
@property (nonatomic, copy) NSString *sessionId;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)extensionBundleId;
- (unsigned long long)family;
- (id)kind;
- (id)metricName;
- (long long)numEngaged;
- (bool)outcome;
- (unsigned long long)reason;
- (id)sessionId;
- (void)setExtensionBundleId:(id)arg1;
- (void)setFamily:(unsigned long long)arg1;
- (void)setKind:(id)arg1;
- (void)setNumEngaged:(long long)arg1;
- (void)setOutcome:(bool)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setSessionId:(id)arg1;

@end
