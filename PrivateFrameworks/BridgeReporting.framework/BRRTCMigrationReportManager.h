
@interface BRRTCMigrationReportManager : NSObject {
    bool  _metricSubmitted;
    bool  _migrationBegan;
    BRRTCMigrationMetric * _migrationMetric;
    NSUUID * _pairingID;
}

@property (nonatomic) bool metricSubmitted;
@property (nonatomic) bool migrationBegan;
@property (nonatomic, retain) BRRTCMigrationMetric *migrationMetric;
@property (nonatomic, readonly) NSUUID *pairingID;

- (void).cxx_destruct;
- (id)_likelyOffendingTransaction;
- (id)_transactionNameFromKey:(id)arg1;
- (void)addDeviceDetails:(id)arg1;
- (void)addTransactionPhase:(id)arg1 withSuccess:(bool)arg2 withPairingID:(id)arg3;
- (id)initWithPairingID:(id)arg1;
- (bool)metricSubmitted;
- (bool)migrationBegan;
- (id)migrationMetric;
- (id)pairingID;
- (id)retrieveMigrationMetric;
- (void)setErrorCode:(id)arg1 domain:(id)arg2 description:(id)arg3;
- (void)setIsAutomation:(bool)arg1;
- (void)setMetricSubmitted:(bool)arg1;
- (void)setMigrationBegan:(bool)arg1;
- (void)setMigrationDeviceUnpairedBecauseKeychainIsOff:(bool)arg1;
- (void)setMigrationDeviceUnpairedBecauseStale:(bool)arg1;
- (void)setMigrationFailedBTKeysNotSynced:(bool)arg1;
- (void)setMigrationMetric:(id)arg1;
- (void)setMigrationSucceeded:(bool)arg1;
- (void)setSessionID:(id)arg1;
- (void)submitMetic;

@end
