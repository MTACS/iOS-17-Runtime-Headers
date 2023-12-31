
@interface SBInCallPresentationSession : NSObject <BSInvalidatable, FBSceneObserver, SBApplicationHosting, SBApplicationSceneHandleUpdateContributing, SBBannerUnfurlSourceContextProviding, SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBInCallBannerPresentableViewControllerDelegate, SBInCallTransientOverlayViewControllerDelegate, SBLayoutStateTransitionObserver, SBSceneHandleActionConsuming, SBSystemApertureSceneElementLaunchActionHandling, SBUIActiveOrientationObserver, SBWorkspaceApplicationSceneTransitionContextDelegate> {
    NSMutableSet * _activeSystemAnimationDeactivationReasons;
    NSMutableSet * _activeSystemGestureDeactivationReasons;
    <BSInvalidatable> * _allowHiddenAppAssertion;
    long long  _ambientDisplayStyle;
    SBWindowSceneStatusBarSettingsAssertion * _appStatusBarSettingsAssertion;
    NSMutableArray * _assertionAnalyticSources;
    SBBacklightController * _backlightController;
    NSMutableDictionary * _bannerDidDisappearHandlerByUUID;
    SBBannerManager * _bannerManager;
    SBInCallBannerPresentableViewController * _bannerPresentableViewController;
    UIApplicationSceneDeactivationManager * _deactivationManager;
    <SBInCallPresentationSessionDelegate> * _delegate;
    NSMutableArray * _deviceLockHandlingCompletionHandlers;
    NSMapTable * _entityToSceneUpdateContext;
    NSMapTable * _entityToUnfurlSourceContext;
    bool  _hasAdoptedFullscreenOverlayAPI;
    bool  _hasBegunHandlingPresentationRequest;
    bool  _hasHandledInitialPresentationRequest;
    bool  _hasReceivedFinalizeSceneDestructionRequest;
    <BSInvalidatable> * _hideSharePlayContentFromClonedDisplayAssertion;
    <BSInvalidatable> * _ignoreSuspendedUnderLockAssertion;
    SBSUIInCallSceneClientSettingsDiffInspector * _inCallSceneClientSettingsDiffInspector;
    bool  _isAmbientPresented;
    bool  _isAttachedToWindowedAccessory;
    bool  _isHandlingDeviceLock;
    bool  _isHandlingTransientOverlayDismissalRequest;
    bool  _isInvalidated;
    bool  _isNonModalPresentationActive;
    bool  _isPerformingSwitcherPresentation;
    bool  _isScreenSharingPresentation;
    bool  _isTransientOverlayPresentationActive;
    SBSystemApertureSceneElement * _jindoElement;
    <SAInvalidatable> * _jindoInvalidatable;
    SBWorkspaceKeyboardFocusController * _keyboardFocusController;
    BSEventQueue * _localEventQueue;
    SBLockScreenManager * _lockScreenManager;
    SBMainSwitcherControllerCoordinator * _mainSwitcherCoordinator;
    bool  _nonModalPresentationsSuppressed;
    bool  _observedSceneHandlePrefersHomeIndicatorAutoHidden;
    SBPIPControllerCoordinator * _pipControllerCoordinator;
    double  _preferredBannerHeight;
    SBLayoutElement * _preferredDismissalPrimaryElement;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredPIPDodgingInsets;
    unsigned long long  _presentationModeRevisionID;
    <BSInvalidatable> * _preventKeyboardFocusAssertion;
    bool  _preventsBannersWhenPresentedAsOverlay;
    NSUUID * _requestedPresentationConfigurationIdentifier;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    SBDeviceApplicationSceneHandle * _sceneHandleToObserveForShowSystemControlsAction;
    SBSetupManager * _setupManager;
    bool  _shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
    SpringBoard * _springBoard;
    <BSInvalidatable> * _suppressHomeIndicatorWhileAttachedToWindowedAccessoryAssertion;
    UIApplicationSceneDeactivationAssertion * _systemAnimationSceneDeactivationAssertion;
    UIApplicationSceneDeactivationAssertion * _systemGestureSceneDeactivationAssertion;
    SBInCallTransientOverlayViewController * _transientOverlayViewController;
    SBUIController * _uiController;
    SBWindowScene * _windowScene;
    SBMainWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBInCallPresentationSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disallowsLockHardwareButtonDoublePress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFullscreenCallInSwitcher;
@property (getter=areNonModalPresentationsSuppressed, nonatomic) bool nonModalPresentationsSuppressed;
@property (nonatomic) double preferredBannerHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredPIPDodgingInsets;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic) bool shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsHandlingDeviceLock;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)_acquireAssertionForAnalyticsSource:(id)arg1;
- (void)_activeJindoElementIfNeeded;
- (void)_addSystemAnimationDeactivationReason:(id)arg1;
- (void)_addSystemGestureDeactivationReason:(id)arg1;
- (bool)_allowsInitiallyDismissedPresentation;
- (bool)_allowsNonModalPresentation;
- (void)_appendToMutableInCallSceneSettings:(id)arg1 presentationMode:(long long)arg2 shouldPresentAsEmbedded:(bool)arg3;
- (id)_clientSettingsIfExists;
- (void)_configureTransitionRequest:(id)arg1 forPresentingTransientOverlay:(id)arg2 animated:(bool)arg3;
- (void)_createJindoElement;
- (void)_createJindoElementIfNeeded;
- (id)_createTransientOverlayViewController;
- (long long)_currentPresentationModeForLayoutState:(id)arg1;
- (void)_destroySceneEntityIfExists;
- (void)_dispatchBlockToMainEventQueueWithReason:(id)arg1 block:(id /* block */)arg2;
- (void)_handleRequestInCallPresentationModeAction:(id)arg1;
- (bool)_hasExistingSceneSettingsPresentationModeForLayoutState:(id)arg1;
- (id)_inCallSceneClientSettingsDiffInspector;
- (unsigned long long)_incrementPresentationModeRevisionIDWithReason:(id)arg1;
- (void)_insertIntoSwitcherAsDismissedWithAnalyticsSource:(id)arg1 transitionValidator:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_invalidateJindoElementIfNeeded;
- (bool)_isAmbientPresentationActive;
- (bool)_isCallConnectedForScene;
- (bool)_isDismissedForLayoutState:(id)arg1;
- (bool)_isInSwitcherModel;
- (bool)_isShowingFullScreenForLayoutState:(id)arg1;
- (bool)_isShowingInPIP;
- (bool)_isValidForSceneUpdates;
- (void)_notifySceneOfDeviceLockFromSource:(int)arg1 completion:(id /* block */)arg2;
- (void)_performBannerDismissalTransitionAnimated:(bool)arg1 analyticsSource:(id)arg2 completion:(id /* block */)arg3;
- (void)_performBannerPresentationTransitionWithAnalyticsSource:(id)arg1 completion:(id /* block */)arg2;
- (void)_performBannerToFullScreenPresentationTransitionAnimated:(bool)arg1 analyticsSource:(id)arg2 completion:(id /* block */)arg3;
- (void)_performBannerToTransientOverlayPresentationTransitionAnimated:(bool)arg1 analyticsSource:(id)arg2 completion:(id /* block */)arg3;
- (void)_performBlockUsingMainEventQueueWithReason:(id)arg1 handler:(id /* block */)arg2;
- (void)_performNonModalDismissalTransitionAnimated:(bool)arg1 analyticsSource:(id)arg2 completion:(id /* block */)arg3;
- (void)_performNonModalPresentationTransitionWithAnalyticsSource:(id)arg1 completion:(id /* block */)arg2;
- (void)_performPresentationWithRequestedPresentationMode:(long long)arg1 isUserInitiated:(bool)arg2 animated:(bool)arg3 analyticsSource:(id)arg4 completion:(id /* block */)arg5;
- (void)_performSceneUpdateTransactionWithContext:(id)arg1;
- (void)_performSwitcherDismissalTransitionAnimated:(bool)arg1 shouldDestroyScene:(bool)arg2 analyticsSource:(id)arg3 completion:(id /* block */)arg4;
- (void)_performSwitcherPresentationTransitionAnimated:(bool)arg1 isUserInitiated:(bool)arg2 analyticsSource:(id)arg3 completion:(id /* block */)arg4;
- (void)_performTransientOverlayDismissalTransitionAnimated:(bool)arg1 shouldInsertIntoSwitcherModel:(bool)arg2 analyticsSource:(id)arg3 completion:(id /* block */)arg4;
- (void)_performTransientOverlayPresentationTransitionAnimated:(bool)arg1 analyticsSource:(id)arg2 completion:(id /* block */)arg3;
- (void)_prepareForTransientOverlayPresentationTransactionWithAnimation:(bool)arg1 analyticsSource:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentWithRequestedConfiguration:(id)arg1 animated:(bool)arg2 analyticsSource:(id)arg3 completion:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentedBannerBoundsInWindowScene:(id)arg1;
- (void)_removeFromSwitcherForPrefersHiddenWhenDismissedWithValidator:(id /* block */)arg1;
- (void)_removeSystemAnimationDeactivationReason:(id)arg1;
- (void)_removeSystemGestureDeactivationReason:(id)arg1;
- (id)_sceneManager;
- (bool)_sceneSupportsHandlingDeviceLock;
- (id)_screen;
- (void)_sendShowNoticeForSystemControlsActionIfNeeded;
- (void)_setNonModalPresentationActive:(bool)arg1;
- (void)_setTransientOverlayPresentationActive:(bool)arg1;
- (bool)_shouldConsiderScenePrimaryForLayoutState:(id)arg1;
- (bool)_shouldExcludeFromSwitcherWhenDismissed;
- (bool)_shouldUseTransientOverlayForFullScreenPresentation;
- (bool)_systemControlsShouldPresentAsEmbeddedForLayoutState:(id)arg1;
- (void)_uiLockStateDidChange:(id)arg1;
- (void)_updateAmbientPresentationSettingsForInCallSettings:(id)arg1;
- (void)_updateAppStatusBarSettingsAssertionForLayoutState:(id)arg1;
- (void)_updateKeyboardFocusPreventionAssertionWithLayoutState:(id)arg1;
- (void)_updatePIPInsetsForExpanseHUDForUnlockedEnvironmentMode:(long long)arg1 shouldConsiderPrimary:(bool)arg2;
- (void)_updateSceneDeactivationAssertions;
- (void)_updateSceneHandleToObserveForSendingShowNoticeForSystemControlsAction:(id)arg1;
- (void)_updateSceneSettingsForAmbientPresentationSettingsUpdate;
- (void)_updateSystemControlsShouldPresentAsEmbedded;
- (void)_updateVisibilityInSwitcherForPrefersHiddenWhenDismissedIfNeededForLayoutState:(id)arg1;
- (void)_windowedAccessoryDidAttachOrDetach:(id)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)applicationSceneHandle:(id)arg1 appendToSceneSettings:(id)arg2 fromRequestContext:(id)arg3 entity:(id)arg4;
- (void)applicationSceneHandle:(id)arg1 appendToTransitionContext:(id)arg2 fromRequestContext:(id)arg3 entity:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2;
- (bool)areNonModalPresentationsSuppressed;
- (id)bannerUnfurlSourceContextForTransitionRequest:(id)arg1;
- (bool)canBeRestored;
- (bool)canHostAnApp;
- (void)conformsToSBApplicationHosting;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)disablesSystemVolumeHUDForCategory:(id)arg1;
- (bool)disallowsLockHardwareButtonDoublePress;
- (void)dismissAndFinalizeSceneDestructionAnimated:(bool)arg1 analyticsSource:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissAnimated:(bool)arg1 shouldFinalizeSceneDestruction:(bool)arg2 analyticsSource:(id)arg3 completion:(id /* block */)arg4;
- (void)ensureInclusionInSwitcherForRestoreFromPIPWithCompletion:(id /* block */)arg1;
- (bool)handleAccessoryAttachWithCompletion:(id /* block */)arg1;
- (void)handleDeviceLockFromSource:(int)arg1 completion:(id /* block */)arg2;
- (bool)handleHeadsetButtonPress:(bool)arg1;
- (void)handleRingerButtonDown;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (void)inCallBannerPresentableViewController:(id)arg1 didDisappearWithReason:(id)arg2;
- (void)inCallBannerPresentableViewController:(id)arg1 viewWillTransitionSizeWithAnimationSettings:(id)arg2;
- (void)inCallBannerPresentableViewController:(id)arg1 willDisappearWithReason:(id)arg2;
- (void)inCallBannerPresentableViewControllerCallConnectedStatusChanged:(id)arg1;
- (void)inCallBannerPresentableViewControllerDidAppear:(id)arg1;
- (void)inCallBannerPresentableViewControllerDidCrossDefaultDraggingThreshold:(id)arg1;
- (void)inCallBannerPresentableViewControllerDidReceiveTap:(id)arg1;
- (void)inCallBannerPresentableViewControllerUserInteractionDidEnd:(id)arg1;
- (void)inCallBannerPresentableViewControllerUserInteractionWillBegin:(id)arg1;
- (void)inCallBannerPresentableViewControllerWillAppear:(id)arg1;
- (void)inCallTransientOverlayViewController:(id)arg1 didAppearAnimated:(bool)arg2;
- (void)inCallTransientOverlayViewController:(id)arg1 didDisappearAnimated:(bool)arg2;
- (void)inCallTransientOverlayViewController:(id)arg1 viewWillTransitionSizeWithAnimationSettings:(id)arg2;
- (void)inCallTransientOverlayViewController:(id)arg1 willAppearAnimated:(bool)arg2;
- (void)inCallTransientOverlayViewController:(id)arg1 willDisappearAnimated:(bool)arg2;
- (void)inCallTransientOverlayViewControllerDidUpdateAmbientPresentationIsAmbientPresented:(bool)arg1 ambientDisplayStyle:(long long)arg2;
- (void)inCallTransientOverlayViewControllerRequestsDismissal:(id)arg1;
- (bool)inCallTransientOverlayViewControllerShouldPreventBannerPresentations:(id)arg1;
- (bool)inCallTransientOverlayViewControllerShouldSupportAlwaysOnDisplay:(id)arg1;
- (id)initWithSceneHandle:(id)arg1 workspace:(id)arg2 bannerManager:(id)arg3 lockScreenManager:(id)arg4 deactivationManager:(id)arg5 mainSwitcherCoordinator:(id)arg6 backlightController:(id)arg7 keyboardFocusController:(id)arg8 springBoard:(id)arg9 setupManager:(id)arg10 uiController:(id)arg11 pipCoordinator:(id)arg12;
- (void)invalidate;
- (bool)isFullscreenCallInSwitcher;
- (bool)isHostingAnApp;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (id)overrideAppSceneEntityForLaunchingApplication:(id)arg1;
- (double)preferredBannerHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredPIPDodgingInsets;
- (void)presentWithRequestedConfiguration:(id)arg1 animated:(bool)arg2 analyticsSource:(id)arg3 completion:(id /* block */)arg4;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (bool)sceneElement:(id)arg1 handleLaunchActionForAppWithBundleIdentifier:(id)arg2 persistenceIdentifier:(id)arg3;
- (id)sceneHandle;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (bool)sceneHandle:(id)arg1 didReceiveAction:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneHandle:(id)arg1 replacedWithSceneHandle:(id)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeBackgroundActivitiesToSuppressTo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNonModalPresentationsSuppressed:(bool)arg1;
- (void)setPreferredBannerHeight:(double)arg1;
- (void)setShouldIgnoreHomeIndicatorAutoHiddenClientSettings:(bool)arg1;
- (bool)shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsBecomingVisibleWhenUnlockingFromSource:(int)arg1 wakingDisplay:(bool)arg2;
- (bool)supportsHandlingDeviceLock;
- (void)transitionToSceneHandleIfNeeded:(id)arg1;
- (id)windowScene;

@end
