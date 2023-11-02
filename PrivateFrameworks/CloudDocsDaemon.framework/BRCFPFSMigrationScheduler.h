
@interface BRCFPFSMigrationScheduler : NSObject {
    <BRCCiconiaStatusProvider> * _ciconiaStatusProvider;
    NSUserDefaults * _fpfsFeatureDefaults;
    NSObject<OS_dispatch_queue> * _trialRefreshQueue;
    NSObject<OS_dispatch_source> * _trialRefreshSource;
}

- (void).cxx_destruct;
- (bool)_enableFPFSFeature;
- (id)_getBootTime;
- (id)_getBootUUID;
- (bool)_isCoconiaSuccessful;
- (bool)_isMigrationToFPFSDisabled;
- (void)_removeUserDefaultsForMigrationDisabled;
- (void)_scheduleRebootIfNeeded;
- (void)_scheduleXPCActivityForReboot;
- (void)_stopTrialRefresh;
- (void)_stopXPCActivityForReboot;
- (void)fixFPFSFeatureFlagUserDefaults;
- (id)initWithCiconiaStatusProvider:(id)arg1;
- (void)removeSchedule;
- (void)scheduleMigrationIfNeeded;

@end
