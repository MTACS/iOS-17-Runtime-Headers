
@interface SBSUIRemoteAlertScene : UIWindowScene

@property (nonatomic, readonly) SBSRemoteAlertActivationContext *activationContext;
@property (nonatomic, readonly) SBSRemoteAlertConfigurationContext *configurationContext;
@property (nonatomic, readonly, copy) NSString *configurationIdentifier;
@property (nonatomic, retain) <SBSUIRemoteAlertSceneDelegate> *delegate;

- (id)activationContext;
- (id)configurationContext;
- (id)configurationIdentifier;
- (void)deactivate;
- (void)invalidate;
- (void)setAllowsAlertStacking:(bool)arg1;
- (void)setAllowsMenuButtonDismissal:(bool)arg1;
- (void)setBackgroundActivitiesToSuppress:(id)arg1 animationSettings:(id)arg2;
- (void)setContentOpaque:(bool)arg1;
- (void)setContentOverlaysStatusBar:(bool)arg1 animationSettings:(id)arg2;
- (void)setDesiredAutoLockDuration:(double)arg1;
- (void)setDesiredHardwareButtonEvents:(unsigned long long)arg1;
- (void)setDesiredIdleTimerSettings:(id)arg1;
- (void)setDisablesAlertItems:(bool)arg1;
- (void)setDisablesBanners:(bool)arg1;
- (void)setDisablesControlCenter:(bool)arg1;
- (void)setDisablesSiri:(bool)arg1;
- (void)setDismissalAnimationStyle:(long long)arg1;
- (void)setIdleTimerDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setInteractiveScreenshotGestureDisabled:(bool)arg1;
- (void)setOrientationChangedEventsDisabled:(bool)arg1;
- (void)setReachabilityDisabled:(bool)arg1;
- (void)setSceneDeactivationReason:(id)arg1;
- (void)setSwipeDismissalStyle:(long long)arg1;
- (void)setWallpaperStyle:(long long)arg1 animationSettings:(id)arg2;
- (void)setWhitePointAdaptivityStyle:(long long)arg1;

@end
