
@protocol SBSUIRemoteAlertSceneHostComponentDelegate <NSObject>

@required

- (void)remoteAlertSceneHostComponent:(SBSUIRemoteAlertSceneHostComponent *)arg1 didChangeBackgroundActivitiesToSuppressWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteAlertSceneHostComponent:(SBSUIRemoteAlertSceneHostComponent *)arg1 didChangePreferredStatusBarVisibilityWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteAlertSceneHostComponent:(SBSUIRemoteAlertSceneHostComponent *)arg1 didChangeWallpaperStyleWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteAlertSceneHostComponent:(SBSUIRemoteAlertSceneHostComponent *)arg1 didSetIdleTimerDisabled:(bool)arg2 forReason:(NSString *)arg3;
- (void)remoteAlertSceneHostComponentDidChangeAllowsAlertStacking:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeAllowsMenuButtonDismissal:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeContentOpaque:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeDesiredAutoLockDuration:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeDesiredHardwareButtonEvents:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeDesiredIdleTimerSettings:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeDismissalAnimationStyle:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeFeaturePolicy:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangePreferredSceneDeactivationReason:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeShouldDisableOrientationUpdates:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeSupportedInterfaceOrientations:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeSwipeDismissalStyle:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeWhitePointAdaptivityStyle:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidDeactivate:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidInvalidate:(SBSUIRemoteAlertSceneHostComponent *)arg1;

@end
