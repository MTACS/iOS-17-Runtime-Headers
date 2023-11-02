
@interface ATXModeAppLaunchFeaturizer : NSObject <ATXModeFeaturizer> {
    _PASSimpleCoalescingTimer * _cooldownTimer;
    bool  _cooldownTimerIsEnabled;
    <ATXModeFeaturizerDelegate> * _delegate;
    _PASSimpleCoalescingTimer * _easeInTimer;
    bool  _easeInTimerIsEnabled;
    ATXFrontBoardLayoutAggregator * _frontBoardLayoutAggregator;
    NSObject<OS_dispatch_queue> * _queue;
    BMBiomeScheduler * _scheduler;
    BPSSink * _sink;
    long long  _state;
}

@property (nonatomic) bool cooldownTimerIsEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXModeFeaturizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool easeInTimerIsEnabled;
@property (readonly) unsigned long long hash;
@property long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_actuallyEndMode;
- (void)_actuallyStartMode;
- (id)_latestAppLaunchBundleIds;
- (void)_processActiveApps:(id)arg1;
- (id)_provideFeaturesWithBundleIds:(id)arg1;
- (id)additionalAllowedBundleIds;
- (void)beginListening;
- (bool)cooldownTimerIsEnabled;
- (id)delegate;
- (bool)easeInTimerIsEnabled;
- (unsigned long long)expectedGenreId;
- (id)init;
- (int)modeFeatureType;
- (id)provideFeatures;
- (id)registrationId;
- (void)setCooldownTimerIsEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEaseInTimerIsEnabled:(bool)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)stopListening;

@end
