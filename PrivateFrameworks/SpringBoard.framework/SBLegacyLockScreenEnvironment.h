
@interface SBLegacyLockScreenEnvironment : NSObject <BSDescriptionProviding, SBLockScreenEnvironment> {
    SBLockScreenViewControllerBase * _lockScreenViewController;
}

@property (nonatomic, readonly) <SBApplicationHosting> *applicationHoster;
@property (nonatomic, readonly) <SBLockScreenApplicationLaunching> *applicationLauncher;
@property (nonatomic, readonly) <SBAutoUnlockRule> *autoUnlockRule;
@property (nonatomic, readonly) <SBLockScreenBacklightControlling> *backlightController;
@property (nonatomic, readonly) <SBLockScreenBehaviorSuppressing> *behaviorSuppressor;
@property (nonatomic, readonly) <SBBiometricUnlockBehavior> *biometricUnlockBehavior;
@property (nonatomic, readonly) <SBLockScreenBlockedStateObserving> *blockedStateObserver;
@property (nonatomic, readonly) <SBButtonEventsHandler> *buttonEventsHandler;
@property (nonatomic, readonly) <SBLockScreenButtonObserving> *buttonObserver;
@property (nonatomic, readonly) <SBLockScreenCallHandling> *callController;
@property (nonatomic, readonly) <SBLockScreenContentStateProviding> *contentStateProvider;
@property (nonatomic, readonly) <SBLockScreenCustomActionStoring> *customActionStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SBLockScreenIdleTimerControlling> *idleTimerController;
@property (nonatomic, readonly) <SBIdleTimerProviding> *idleTimerProvider;
@property (nonatomic, readonly) <SBLockScreenLockingAndUnlocking> *lockController;
@property (nonatomic, readonly) <SBLockScreenMediaControlsPresenting> *mediaControlsPresenter;
@property (nonatomic, readonly) <SBLockScreenPasscodeViewPresenting> *passcodeViewPresenter;
@property (nonatomic, readonly) <SBLockScreenPluginPresenting> *pluginPresenter;
@property (nonatomic, readonly) <SBLockScreenProximityBehaviorProviding> *proximityBehaviorProvider;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (nonatomic, readonly) <SBFScreenWakeAnimationTarget> *screenWakeAnimationTarget;
@property (nonatomic, readonly) <SBLockScreenSpotlightPresenting> *spotlightPresenter;
@property (nonatomic, readonly) <SBLockScreenStatusBarTransitioning> *statusBarTransitionController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SBSWidgetMetricsProviding> *widgetMetricsProvider;

- (void).cxx_destruct;
- (id)applicationHoster;
- (id)applicationLauncher;
- (id)autoUnlockRule;
- (id)backlightController;
- (id)behaviorSuppressor;
- (id)biometricUnlockBehavior;
- (id)blockedStateObserver;
- (id)buttonEventsHandler;
- (id)buttonObserver;
- (id)callController;
- (id)contentStateProvider;
- (id)customActionStore;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)idleTimerController;
- (id)idleTimerProvider;
- (id)initWithLockScreenViewController:(id)arg1;
- (id)lockController;
- (id)mediaControlsPresenter;
- (id)passcodeViewPresenter;
- (id)pluginPresenter;
- (id)proximityBehaviorProvider;
- (id)rootViewController;
- (id)screenWakeAnimationTarget;
- (id)spotlightPresenter;
- (id)statusBarTransitionController;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)widgetMetricsProvider;

@end
