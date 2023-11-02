
@interface SBDeviceApplicationRemoteTransientOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationRemoteTransientOverlayViewProviding, SBTransientOverlayViewControllerDelegate> {
    NSMutableArray * _activePresentationContexts;
    SBDeviceApplicationRemoteTransientOverlayContainerViewController * _containerVC;
    bool  _handlesSceneBackedRemoteTransientOverlaysOnly;
    NSMapTable * _keyboardFocusRedirectionsByRemoteVC;
    bool  _needsDeactivationWithNoActiveTransientOverlays;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool handlesSceneBackedRemoteTransientOverlaysOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (void)_dismissRemoteOverlayVC:(id)arg1;
- (void)_handleAppSwitcherWillPresent:(id)arg1;
- (void)_handleCoverSheetDidPresent:(id)arg1;
- (id)_realOverlayViewController;
- (bool)contentWantsTraitsArbiterBasedRotation;
- (void)dealloc;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1;
- (bool)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1;
- (void)dismissRemoteTransientOverlayViewController:(id)arg1;
- (bool)handlesSceneBackedRemoteTransientOverlaysOnly;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2 handlesSceneBackedRemoteTransientOverlaysOnly:(bool)arg3;
- (bool)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)arg1;
- (bool)isPresentingOnBehalfOfApplication:(id)arg1;
- (bool)isPresentingTransientOverlay:(id)arg1;
- (void)noteDisplayModeChange:(long long)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)presentRemoteTransientOverlayViewController:(id)arg1 presentationRequest:(id)arg2;
- (long long)priority;
- (bool)shouldFollowSceneOrientation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)transientOverlayViewController:(id)arg1 requestZStackParticipantPreferencesUpdateWithReason:(id)arg2;
- (void)transientOverlayViewControllerDidEndRotation:(id)arg1;
- (void)transientOverlayViewControllerDidUpdatePresentationPrefersStatusBarHidden:(id)arg1;
- (bool)transientOverlayViewControllerIsForegroundActive:(id)arg1;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(id)arg1;
- (void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2;
- (id)windowScene;

@end
