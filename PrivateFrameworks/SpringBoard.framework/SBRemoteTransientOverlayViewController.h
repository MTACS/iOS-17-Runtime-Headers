
@interface SBRemoteTransientOverlayViewController : SBTransientOverlayViewController <SBIdleTimerCoordinating, SBRemoteTransientOverlayHostContentAdapterDelegate> {
    UIView * _contentViewWrapperView;
    <SBRemoteTransientOverlayViewControllerDelegate> * _delegate;
    SBRemoteTransientOverlayHostContentAdapter * _hostContentAdapter;
    SBIdleTimerCoordinatorHelper * _idleTimerCoordinatorHelper;
    bool  _isPresented;
    long long  _lastWallpaperStyle;
    SBRemoteTransientOverlayViewController * _pairedRemoteTransientOverlay;
    BSAnimationSettings * _pendingAnimationSettings;
    long long  _preferredDismissalAnimationStyle;
    bool  _presentationEmbeddedInTargetScene;
    long long  _wallpaperEffectAnimations;
    SBTransientOverlayWallpaperEffectView * _wallpaperEffectView;
    long long  _wallpaperVariant;
}

@property (getter=isActivatingForSiri, nonatomic, readonly) bool activatingForSiri;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBRemoteTransientOverlayViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isScreenshotMarkup;
@property (nonatomic) SBRemoteTransientOverlayViewController *pairedRemoteTransientOverlay;
@property (nonatomic, readonly) long long preferredDismissalAnimationStyle;
@property (nonatomic, readonly) bool shouldInvalidateWhenDeactivated;
@property (readonly) Class superclass;
@property (getter=isSwitcherEligible, nonatomic, readonly) bool switcherEligible;
@property (nonatomic) long long wallpaperVariant;

+ (void)requestViewControllersForAlertDefinition:(id)arg1 sceneWorkspaceController:(id)arg2 connectionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_configureWallpaperEffectViewWithAnimationSettings:(id)arg1;
- (id)_hostContentViewController;
- (id)_initWithHostContentAdapter:(id)arg1;
- (bool)_needsWallpaperEffectView;
- (int)_preferredStatusBarVisibility;
- (void)_setMediaOverridePID:(int)arg1;
- (bool)allowsStackingOverlayContentAbove;
- (id)associatedBundleIdentifiersToSuppressInSystemAperture;
- (bool)becomeFirstResponder;
- (void)beginIgnoringAppearanceUpdates;
- (void)beginIgnoringContentOverlayInsetUpdates;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)clientSceneIdentityToken;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)dealloc;
- (long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostContentAdapter:(id)arg1;
- (id)delegate;
- (void)didInvalidate;
- (void)didTransitionToAttachedToWindowedAccessory:(bool)arg1 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)endIgnoringAppearanceUpdates;
- (void)endIgnoringContentOverlayInsetUpdates;
- (bool)handleDoubleHeightStatusBarTap;
- (void)handleGestureDismissal;
- (bool)handleHeadsetButtonPress:(bool)arg1;
- (bool)handleHomeButtonDoublePress;
- (bool)handleHomeButtonLongPress;
- (bool)handleHomeButtonPress;
- (bool)handleLockButtonPress;
- (void)handlePictureInPictureDidBegin;
- (bool)handleVolumeDownButtonPress;
- (bool)handleVolumeUpButtonPress;
- (bool)hasServiceProcessIdentifier:(int)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (bool)isActivatingForSiri;
- (bool)isContentOpaque;
- (bool)isPresentedByBundleIdentifier:(id)arg1;
- (bool)isPresentedByProcess:(id)arg1;
- (bool)isPresentedFromSceneWithIdentityTokenString:(id)arg1;
- (bool)isScreenshotMarkup;
- (bool)isSwitcherEligible;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)pairedRemoteTransientOverlay;
- (int)pictureInPictureProcessIdentifier;
- (id)preferredBackgroundActivitiesToSuppress;
- (long long)preferredDismissalAnimationStyle;
- (id)preferredDisplayLayoutElementIdentifier;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredLockedGestureDismissalStyle;
- (id)preferredSceneDeactivationReasonValue;
- (long long)preferredStatusBarStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (bool)prefersStatusBarActivityItemVisible;
- (void)prepareForActivationWithContext:(id)arg1 presentationMode:(long long)arg2 presentEmbedded:(bool)arg3 windowScene:(id)arg4 completion:(id /* block */)arg5;
- (void)preserveInputViewsAnimated:(bool)arg1;
- (void)remoteTransientOverlayHostContentAdapter:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteTransientOverlayHostContentAdapter:(id)arg1 needsStatusBarAppearanceUpdateWithAnimationSettings:(id)arg2;
- (id)remoteTransientOverlayHostContentAdapter:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
- (void)remoteTransientOverlayHostContentAdapter:(id)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(id)arg2;
- (void)remoteTransientOverlayHostContentAdapterDidChangeContentOpaque:(id)arg1;
- (void)remoteTransientOverlayHostContentAdapterDidChangeFeaturePolicy:(id)arg1;
- (void)remoteTransientOverlayHostContentAdapterDidChangeGestureDismissalStyles:(id)arg1;
- (void)remoteTransientOverlayHostContentAdapterDidChangePreferredSceneDeactivationReasonValue:(id)arg1;
- (void)remoteTransientOverlayHostContentAdapterDidChangeShouldDisableOrientationUpdates:(id)arg1;
- (void)remoteTransientOverlayHostContentAdapterDidChangeSupportedInterfaceOrientations:(id)arg1;
- (void)remoteTransientOverlayHostContentAdapterRequestsDeactivation:(id)arg1;
- (void)remoteTransientOverlayHostContentAdapterRequestsInvalidation:(id)arg1;
- (id)representedDisplayItem;
- (bool)resignFirstResponder;
- (void)restoreInputViewsAnimated:(bool)arg1;
- (int)serviceProcessIdentifier;
- (void)setContainerOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdleTimerCoordinator:(id)arg1;
- (void)setPairedRemoteTransientOverlay:(id)arg1;
- (void)setPresentationEmbeddedInTargetScene:(bool)arg1;
- (void)setWallpaperVariant:(long long)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutorotate;
- (bool)shouldDisableBanners;
- (bool)shouldDisableControlCenter;
- (bool)shouldDisableInteractiveScreenshotGesture;
- (bool)shouldDisableOrientationUpdates;
- (bool)shouldDisableReachability;
- (bool)shouldDisableSiri;
- (bool)shouldInvalidateWhenDeactivated;
- (bool)shouldPendAlertItems;
- (bool)shouldUseSceneBasedKeyboardFocus;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (long long)wallpaperVariant;

@end
