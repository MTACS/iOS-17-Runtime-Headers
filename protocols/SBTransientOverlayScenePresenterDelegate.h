
@protocol SBTransientOverlayScenePresenterDelegate <NSObject>

@required

- (SBPresentationObservationToken *)bannerLongLookPresentationObservationTokenForTransientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1;
- (SBPresentationObservationToken *)controlCenterPresentationObservationTokenForTransientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1;
- (SBStatusBarSettings *)currentStatusBarSettingsForTransientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1;
- (bool)defaultShouldAutorotateForTransientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1;
- (bool)isKeyboardVisibleForSpringBoardForTransientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1;
- (SBPresentationObservationToken *)siriPresentationObservationTokenForTransientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1;
- (<BSInvalidatable> *)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 acquireBannerLongLookWindowLevelAssertionWithReason:(NSString *)arg2 windowLevel:(double)arg3;
- (<BSInvalidatable> *)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 acquireControlCenterWindowLevelAssertionWithReason:(NSString *)arg2 windowLevel:(double)arg3;
- (<BSInvalidatable> *)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 acquireDeviceOrientationUpdateDeferralAssertionWithReason:(NSString *)arg2;
- (<BSInvalidatable> *)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 acquireDisableAutoUnlockAssertionWithReason:(NSString *)arg2;
- (SBInAppStatusBarHiddenAssertion *)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 acquireHideAppStatusBarAssertionWithReason:(NSString *)arg2 animated:(bool)arg3;
- (<BSInvalidatable> *)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 acquireInteractiveScreenshotGestureDisabledAssertionWithReason:(NSString *)arg2;
- (<BSInvalidatable> *)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 acquireProximitySensorEnabledAssertionWithReason:(NSString *)arg2;
- (<BSInvalidatable> *)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 acquireSiriWindowLevelAssertionWithReason:(NSString *)arg2 windowLevel:(double)arg3;
- (<BSInvalidatable> *)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 acquireWallpaperAnimationSuspensionAssertionWithReason:(NSString *)arg2;
- (void)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 didDismissViewController:(SBTransientOverlayViewController *)arg2 wasTopmostPresentation:(bool)arg3;
- (UIApplicationSceneDeactivationAssertion *)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 newSceneDeactivationAssertionWithReason:(long long)arg2;
- (void)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 preferredWhitePointAdaptivityStyleDidChangeWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 registerCoverSheetExternalBehaviorProvider:(id <CSExternalBehaviorProviding>)arg2;
- (bool)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 shouldResignFirstResponderForKeyWindow:(UIWindow *)arg2;
- (bool)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 shouldRestoreFirstResponderForKeyWindow:(UIWindow *)arg2;
- (void)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 unregisterCoverSheetExternalBehaviorProvider:(id <CSExternalBehaviorProviding>)arg2;
- (void)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 willChangeTopmostViewControllerInterfaceOrientationToOrientation:(long long)arg2;
- (void)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 willPresentViewController:(SBTransientOverlayViewController *)arg2;
- (void)transientOverlayScenePresenterRequestsAppIconForceTouchDismissal:(id <SBTransientOverlayPresenting>)arg1 animated:(bool)arg2;
- (void)transientOverlayScenePresenterRequestsControlCenterDismissal:(id <SBTransientOverlayPresenting>)arg1 animated:(bool)arg2;
- (void)transientOverlayScenePresenterRequestsSiriDismissal:(id <SBTransientOverlayPresenting>)arg1 animated:(bool)arg2;

@end
