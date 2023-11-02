
@interface HDMCWatchSettingsReconciliationManager : NSObject <HDFeatureSettingsManagerObserver, HDHealthDaemonReadyObserver, HDProfileReadyObserver> {
    <HDMCWatchSettingsReconciliationManagerDelegate> * _delegate;
    NSArray * _managedKeys;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDMCWatchSettingsReconciliationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_applyReconciledValueFromSettingValues:(id)arg1 forSettingKeys:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_reconcileValuesForAllKeys;
- (void)_queue_reconcileValuesForKeys:(id)arg1;
- (id)_queue_settingValuesForSettingKeys:(id)arg1 error:(id*)arg2;
- (void)_startKeyValueObserving;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)featureSettingsManager:(id)arg1 didUpdateSettingsForFeatureIdentifier:(id)arg2;
- (id)initWithProfile:(id)arg1 userDefaults:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
