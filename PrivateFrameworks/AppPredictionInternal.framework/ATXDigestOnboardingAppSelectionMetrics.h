
@interface ATXDigestOnboardingAppSelectionMetrics : _ATXCoreAnalyticsMetric {
    bool  _addedToDigest;
    unsigned long long  _avgNumBasicNotifications;
    unsigned long long  _avgNumMessageNotfications;
    unsigned long long  _avgNumTimeSensitiveNonMessageNotifications;
    NSString * _bundleId;
    unsigned long long  _rank;
    NSString * _sessionUUID;
    bool  _wasShownInDigestOnboarding;
}

@property (nonatomic) bool addedToDigest;
@property (nonatomic) unsigned long long avgNumBasicNotifications;
@property (nonatomic) unsigned long long avgNumMessageNotfications;
@property (nonatomic) unsigned long long avgNumTimeSensitiveNonMessageNotifications;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) unsigned long long rank;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) bool wasShownInDigestOnboarding;

- (void).cxx_destruct;
- (bool)addedToDigest;
- (unsigned long long)avgNumBasicNotifications;
- (unsigned long long)avgNumMessageNotfications;
- (unsigned long long)avgNumTimeSensitiveNonMessageNotifications;
- (id)bundleId;
- (id)coreAnalyticsDictionary;
- (id)metricName;
- (unsigned long long)rank;
- (id)sessionUUID;
- (void)setAddedToDigest:(bool)arg1;
- (void)setAvgNumBasicNotifications:(unsigned long long)arg1;
- (void)setAvgNumMessageNotfications:(unsigned long long)arg1;
- (void)setAvgNumTimeSensitiveNonMessageNotifications:(unsigned long long)arg1;
- (void)setBundleId:(id)arg1;
- (void)setRank:(unsigned long long)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setWasShownInDigestOnboarding:(bool)arg1;
- (bool)wasShownInDigestOnboarding;

@end
