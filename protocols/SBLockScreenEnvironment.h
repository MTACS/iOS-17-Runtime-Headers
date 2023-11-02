
@protocol SBLockScreenEnvironment <NSObject>

@required

- (<SBApplicationHosting> *)applicationHoster;
- (<SBLockScreenApplicationLaunching> *)applicationLauncher;
- (<SBAutoUnlockRule> *)autoUnlockRule;
- (<SBLockScreenBacklightControlling> *)backlightController;
- (<SBLockScreenBehaviorSuppressing> *)behaviorSuppressor;
- (<SBBiometricUnlockBehavior> *)biometricUnlockBehavior;
- (<SBLockScreenBlockedStateObserving> *)blockedStateObserver;
- (<SBButtonEventsHandler> *)buttonEventsHandler;
- (<SBLockScreenButtonObserving> *)buttonObserver;
- (<SBLockScreenCallHandling> *)callController;
- (<SBLockScreenContentStateProviding> *)contentStateProvider;
- (<SBLockScreenCustomActionStoring> *)customActionStore;
- (<SBLockScreenIdleTimerControlling> *)idleTimerController;
- (<SBIdleTimerProviding> *)idleTimerProvider;
- (<SBLockScreenLockingAndUnlocking> *)lockController;
- (<SBLockScreenMediaControlsPresenting> *)mediaControlsPresenter;
- (<SBLockScreenPasscodeViewPresenting> *)passcodeViewPresenter;
- (<SBLockScreenPluginPresenting> *)pluginPresenter;
- (<SBLockScreenProximityBehaviorProviding> *)proximityBehaviorProvider;
- (UIViewController *)rootViewController;
- (<SBFScreenWakeAnimationTarget> *)screenWakeAnimationTarget;
- (<SBLockScreenSpotlightPresenting> *)spotlightPresenter;
- (<SBLockScreenStatusBarTransitioning> *)statusBarTransitionController;
- (<SBSWidgetMetricsProviding> *)widgetMetricsProvider;

@end
