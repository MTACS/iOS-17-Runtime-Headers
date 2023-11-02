
@protocol SBTransientOverlayViewControllerDelegate <NSObject>

@required

- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (bool)defaultShouldAutorotateForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (bool)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewController:(SBTransientOverlayViewController *)arg1 requestZStackParticipantPreferencesUpdateWithReason:(NSString *)arg2;
- (void)transientOverlayViewControllerDidEndRotation:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerDidUpdatePresentationPrefersStatusBarHidden:(SBTransientOverlayViewController *)arg1;
- (bool)transientOverlayViewControllerIsForegroundActive:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerWillBeginRotation:(SBTransientOverlayViewController *)arg1 toInterfaceOrientation:(long long)arg2;

@end
