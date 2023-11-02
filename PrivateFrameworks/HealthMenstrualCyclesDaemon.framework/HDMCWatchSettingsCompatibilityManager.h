
@interface HDMCWatchSettingsCompatibilityManager : NSObject <HDFeatureSettingsManagerObserver, HDHealthDaemonReadyObserver, HDProfileReadyObserver> {
    <HDMCWatchSettingsCompatibilityManagerDelegate> * _delegate;
    NSArray * _managedFeatures;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDMCWatchSettingsCompatibilityManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_computeAndApplyChangesForAllFeatures;
- (void)_queue_computeAndApplyChangesForFeature:(id)arg1;
- (void)daemonReady:(id)arg1;
- (id)delegate;
- (void)featureSettingsManager:(id)arg1 didUpdateSettingsForFeatureIdentifier:(id)arg2;
- (id)initWithProfile:(id)arg1 userDefaults:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
