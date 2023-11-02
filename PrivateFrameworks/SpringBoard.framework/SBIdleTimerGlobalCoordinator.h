
@interface SBIdleTimerGlobalCoordinator : NSObject <SBIdleTimerCoordinating, SBIdleTimerGlobalStateMonitorObserving, SBIdleTimerObserving> {
    PTTestRecipe * _clientDisableAssertionsTestRecipe;
    <SBIdleTimerGlobalCoordinatorDelegate> * _delegate;
    <BSInvalidatable> * _disableAutoDimAssertion;
    SBIdleTimerDescriptor * _enabledIdleTimerDescriptor;
    SBIdleTimerProxy * _enabledIdleTimerProxy;
    SBIdleTimerGlobalStateMonitor * _globalStateMonitor;
    SBIdleTimerCoordinatorHelper * _idleTimerCoordinatorHelper;
    SBIdleTimerDescriptorFactory * _idleTimerDescriptorFactory;
    NSMutableDictionary * _idleTimerDisableAssertions;
    <SBIdleTimerProviding> * _idleTimerProvider;
    SBIdleTimerProxy * _idleTimerProxy;
    bool  _idleTimerSourceEnabled;
    PTTestRecipe * _internalDisableAssertionsTestRecipe;
    <SBIdleTimerResetSource> * _lastResetSource;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    bool  _started;
    <BSInvalidatable> * _stateCaptureAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBIdleTimerGlobalCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SBIdleTimer> *idleTimer;
@property (getter=_idleTimerDisableAssertions, setter=_setIdleTimerDisableAssertions:, nonatomic, retain) NSMutableDictionary *idleTimerDisableAssertions;
@property (getter=isIdleTimerDisabled, nonatomic, readonly) bool idleTimerDisabled;
@property (getter=_idleTimerProvider, setter=_setIdleTimerProvider:, nonatomic) <SBIdleTimerProviding> *idleTimerProvider;
@property (readonly) Class superclass;

+ (id)_sharedInstanceCreateIfNeeded:(bool)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (id)_activeIdleTimerProvider;
- (void)_addStateCaptureHandlers;
- (void)_applyActiveIdleTimerDescriptorForReason:(id)arg1;
- (bool)_areIdleTimerDisableAssertionsPrevented;
- (bool)_hasIdleTimerDisableAssertions;
- (id)_idleTimerDisableAssertions;
- (void)_idleTimerPrefsChanged;
- (id)_idleTimerProvider;
- (void)_logEffectiveLockTimeout;
- (void)_registerClientDisableAssertionsTestRecipe;
- (void)_registerInternalDisableAssertionsTestRecipe;
- (void)_registerTestRecipes;
- (void)_setIdleTimerDisableAssertions:(id)arg1;
- (void)_setIdleTimerProvider:(id)arg1;
- (void)_setIdleTimerSourceEnabled:(bool)arg1 forReason:(id)arg2;
- (void)_setIdleTimerWithDescriptor:(id)arg1 forReason:(id)arg2;
- (id)_stateCaptureDescription;
- (void)_unregisterTestRecipes;
- (void)_updateGlobalStateDisableAssertions;
- (id)_updateIdleTimerForProvider:(id)arg1 behavior:(id)arg2 descriptor:(id)arg3 forReason:(id)arg4;
- (id)_updateIdleTimerForProvider:(id)arg1 behavior:(id)arg2 forReason:(id)arg3;
- (bool)_updateIdleTimerForReason:(id)arg1;
- (id)acquireIdleTimerDisableAssertionForReason:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)idleTimer;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidResetForUserAttention:(id)arg1;
- (void)idleTimerGlobalStateMonitor:(id)arg1 changedForReason:(id)arg2;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)init;
- (bool)isIdleTimerDisabled;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)resetIdleTimerForReason:(id)arg1;
- (void)resetIdleTimerIfCurrentIdealDurationAtLeast:(long long)arg1 forReason:(id)arg2;
- (void)resetIdleTimerIfNonConsecutiveSource:(id)arg1 forReason:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
