
@interface HDMCSettingsMigrationManager : NSObject <HDHealthDaemonReadyObserver, HDProfileReadyObserver> {
    <HDMCSettingsMigrationManagerDelegate> * _delegate;
    NSArray * _migrationSteps;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDMCSettingsMigrationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_performMigrationFromCurrentMigrationVersion:(long long)arg1;
- (void)daemonReady:(id)arg1;
- (id)delegate;
- (id)initWithProfile:(id)arg1 userDefaults:(id)arg2 delegate:(id)arg3;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
