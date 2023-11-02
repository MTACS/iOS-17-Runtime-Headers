
@interface ATXNotificationManagementSettingsMetric : _ATXCoreAnalyticsMetric {
    bool  _hasOfferedDigest;
    bool  _hasSetupDigest;
    unsigned long long  _numConfiguredModes;
    unsigned long long  _numDailyDigests;
    unsigned long long  _numDigestApps;
}

@property (nonatomic) bool hasOfferedDigest;
@property (nonatomic) bool hasSetupDigest;
@property (nonatomic) unsigned long long numConfiguredModes;
@property (nonatomic) unsigned long long numDailyDigests;
@property (nonatomic) unsigned long long numDigestApps;

- (id)coreAnalyticsDictionary;
- (id)description;
- (bool)hasOfferedDigest;
- (bool)hasSetupDigest;
- (id)metricName;
- (unsigned long long)numConfiguredModes;
- (unsigned long long)numDailyDigests;
- (unsigned long long)numDigestApps;
- (void)setHasOfferedDigest:(bool)arg1;
- (void)setHasSetupDigest:(bool)arg1;
- (void)setNumConfiguredModes:(unsigned long long)arg1;
- (void)setNumDailyDigests:(unsigned long long)arg1;
- (void)setNumDigestApps:(unsigned long long)arg1;

@end
