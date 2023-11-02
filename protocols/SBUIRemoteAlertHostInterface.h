
@protocol SBUIRemoteAlertHostInterface

@required

- (void)deactivate;
- (void)dismiss;
- (void)invalidate;
- (void)setAllowsAlertItems:(bool)arg1;
- (void)setAllowsAlertStacking:(bool)arg1;
- (void)setAllowsBanners:(bool)arg1;
- (void)setAllowsControlCenter:(bool)arg1;
- (void)setAllowsMenuButtonDismissal:(bool)arg1;
- (void)setAllowsSiri:(bool)arg1;
- (void)setBackgroundActivitiesToCancel:(NSSet *)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setDesiredAutoLockDuration:(double)arg1;
- (void)setDesiredHardwareButtonEvents:(unsigned long long)arg1;
- (void)setDesiredIdleTimerSettings:(SBUIRemoteAlertIdleTimerSettings *)arg1;
- (void)setDismissalAnimationStyle:(long long)arg1;
- (void)setIdleTimerDisabled:(bool)arg1 forReason:(NSString *)arg2;
- (void)setInteractiveScreenshotGestureDisabled:(bool)arg1;
- (void)setLaunchingInterfaceOrientation:(long long)arg1;
- (void)setOrientationChangedEventsEnabled:(bool)arg1;
- (void)setReachabilityDisabled:(bool)arg1;
- (void)setSceneDeactivationReason:(NSNumber *)arg1;
- (void)setShouldDisableFadeInAnimation:(bool)arg1;
- (void)setShouldDismissOnUILock:(bool)arg1;
- (void)setStatusBarHidden:(bool)arg1 withDuration:(double)arg2;
- (void)setStyleOverridesToCancel:(unsigned long long)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1;
- (void)setSwipeDismissalStyle:(long long)arg1;
- (void)setWallpaperStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setWallpaperTunnelActive:(bool)arg1;
- (void)setWhitePointAdaptivityStyle:(long long)arg1;

@end
