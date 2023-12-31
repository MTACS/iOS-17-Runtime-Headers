
@interface SBCoverSheetPresentationManager : NSObject <CSCoverSheetViewControllerObserver, CSExternalAppearanceProviding, CSExternalBehaviorProviding, PTSettingsKeyObserver, SBAssistantObserver, SBCoverSheetGrabberDelegate, SBCoverSheetSecureAppEnvironmentViewControllerDelegate, SBCoverSheetSlidingViewControllerDelegate, SBDeviceApplicationSceneHandleObserver, SBFBacklightEnvironmentSceneProviding, SBFIdleTimerBehaviorProviding, SBFZStackParticipantDelegate, SBPearlMatchingStateProviderDelegate, SBSecureAppObserver, SBSecureAppViewControllerDelegate, SBWallpaperOrientationProvider> {
    SBDisableActiveInterfaceOrientationChangeAssertion * _activeInterfaceOrientationChangeAssertion;
    bool  _activeInterfaceOrientationLocked;
    bool  _animateIconsOnPresentationToo;
    SBAsynchronousRenderingAssertion * _asynchronousRenderingAssertion;
    bool  _centerFollowsFinger;
    SBCoverSheetSlidingViewController * _coverSheetSlidingViewController;
    SBWindow * _coverSheetWindow;
    NSMutableSet * _coverSheetWindowVisibleReasons;
    <BSInvalidatable> * _deferOrientationUpdatesAssertion;
    <SBCoverSheetPresentationDelegate> * _delegate;
    NSHashTable * _dismissalObservers;
    bool  _dismissingCoverSheet;
    CSCoverSheetFlyInSettings * _flyInSettings;
    bool  _hasBeenDismissedSinceBoot;
    bool  _hasBeenDismissedSinceKeybagLock;
    bool  _hasBeenDismissedSinceKeybagLockAndAuthenticated;
    SBCoverSheetIconFlyInAnimator * _iconAnimator;
    id /* block */  _iconAnimatorCompletionBlock;
    NSObject<OS_dispatch_group> * _iconAnimatorCompletionGroup;
    bool  _iconAnimatorNeedsAnimating;
    double  _iconFlyInFriction;
    double  _iconFlyInInteractiveDampingRatioMax;
    double  _iconFlyInInteractiveDampingRatioMin;
    double  _iconFlyInInteractiveResponseMax;
    double  _iconFlyInInteractiveResponseMin;
    double  _iconFlyInTension;
    bool  _isCoverSheetHostingUnlockedEnvironmentWindows;
    <BSInvalidatable> * _keyboardFocusAssertion;
    <SBLockScreenEnvironment> * _lockScreenEnvironment;
    CSLockScreenSettings * _lockScreenSettings;
    BSEventQueue * _lockUnlockQueue;
    SBMainWorkspace * _mainWorkspace;
    bool  _needsFakeStatusBarUpdate;
    long long  _participantState;
    <SBPearlMatchingStateProvider> * _pearlMatchingStateProvider;
    bool  _pendingClearSecureAppViewControllers;
    id /* block */  _ppt_transitionBeginsCallback;
    id /* block */  _ppt_transitionEndsCallback;
    bool  _preparingToDismissCoverSheet;
    BSCompoundAssertion * _preserveSecureAppAssertions;
    <BSInvalidatable> * _requireWallpaperAssertion;
    bool  _rubberBandCleanupNeeded;
    UIImpactFeedbackGenerator * _rubberBandFeedbackGenerator;
    SBCoverSheetSceneManager * _sceneManager;
    long long  _scrollingStrategy;
    id /* block */  _secureAppCleanupHandler;
    SBCoverSheetSecureAppEnvironmentViewController * _secureAppEnvironmentViewController;
    SBCoverSheetSlidingViewController * _secureAppSlidingViewController;
    SBDashBoardHostedAppViewController * _secureAppViewController;
    SBWindow * _secureAppWindow;
    NSMutableSet * _secureAppWindowVisibleReasons;
    bool  _shouldDisplayFakeStatusBar;
    <BSInvalidatable> * _suspendWallpaperAnimationAssertion;
    <BSInvalidatable> * _systemApertureCoverSheetAssertion;
    unsigned long long  _transitionOverrideOptions;
    CSCoverSheetTransitionSettings * _transitionSettings;
    unsigned long long  _transitionType;
    <SBUILockStateProvider> * _uiLockStateProvider;
    SBAtomicObjectQueue * _unlockProgressQueue;
    bool  _wallpaperFloatingLayerHidden;
    UIView<BSInvalidatable> * _wallpaperFloatingLayerView;
    UIView * _wallpaperFloatingLayerViewContainerView;
    bool  _wantsHomeGestureOwnership;
    SBFZStackParticipant * _zStackParticipant;
}

@property (nonatomic, retain) SBDisableActiveInterfaceOrientationChangeAssertion *activeInterfaceOrientationChangeAssertion;
@property (getter=activeInterfaceOrientationLocked, nonatomic) bool activeInterfaceOrientationLocked;
@property (nonatomic) bool animateIconsOnPresentationToo;
@property (nonatomic, readonly, copy) NSString *appearanceIdentifier;
@property (nonatomic, retain) SBAsynchronousRenderingAssertion *asynchronousRenderingAssertion;
@property (nonatomic) bool centerFollowsFinger;
@property (nonatomic, readonly, copy) NSSet *components;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *coverSheetHostedAppSceneHandle;
@property (getter=isCoverSheetHostingAnApp, nonatomic, readonly) bool coverSheetHostingAnApp;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic, retain) SBCoverSheetSlidingViewController *coverSheetSlidingViewController;
@property (nonatomic, retain) SBWindow *coverSheetWindow;
@property (nonatomic, retain) NSMutableSet *coverSheetWindowVisibleReasons;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <BSInvalidatable> *deferOrientationUpdatesAssertion;
@property (nonatomic) <SBCoverSheetPresentationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *dismissalObservers;
@property (nonatomic) bool dismissingCoverSheet;
@property (nonatomic, retain) CSCoverSheetFlyInSettings *flyInSettings;
@property (nonatomic) bool hasBeenDismissedSinceBoot;
@property (nonatomic) bool hasBeenDismissedSinceKeybagLock;
@property (nonatomic, readonly) bool hasBeenDismissedSinceKeybagLockAndAuthenticated;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBCoverSheetIconFlyInAnimator *iconAnimator;
@property (nonatomic, copy) id /* block */ iconAnimatorCompletionBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *iconAnimatorCompletionGroup;
@property (nonatomic) bool iconAnimatorNeedsAnimating;
@property (nonatomic) double iconFlyInFriction;
@property (nonatomic) double iconFlyInInteractiveDampingRatioMax;
@property (nonatomic) double iconFlyInInteractiveDampingRatioMin;
@property (nonatomic) double iconFlyInInteractiveResponseMax;
@property (nonatomic) double iconFlyInInteractiveResponseMin;
@property (nonatomic) double iconFlyInTension;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) bool isCoverSheetHostingUnlockedEnvironmentWindows;
@property (nonatomic, retain) <BSInvalidatable> *keyboardFocusAssertion;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) <SBLockScreenEnvironment> *lockScreenEnvironment;
@property (nonatomic, retain) CSLockScreenSettings *lockScreenSettings;
@property (nonatomic, retain) BSEventQueue *lockUnlockQueue;
@property (nonatomic, retain) SBMainWorkspace *mainWorkspace;
@property (nonatomic) bool needsFakeStatusBarUpdate;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic) long long participantState;
@property (nonatomic) <SBPearlMatchingStateProvider> *pearlMatchingStateProvider;
@property (nonatomic) bool pendingClearSecureAppViewControllers;
@property (nonatomic, copy) id /* block */ ppt_transitionBeginsCallback;
@property (nonatomic, copy) id /* block */ ppt_transitionEndsCallback;
@property (nonatomic) bool preparingToDismissCoverSheet;
@property (nonatomic, retain) BSCompoundAssertion *preserveSecureAppAssertions;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, retain) <BSInvalidatable> *requireWallpaperAssertion;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic) bool rubberBandCleanupNeeded;
@property (nonatomic, retain) UIImpactFeedbackGenerator *rubberBandFeedbackGenerator;
@property (nonatomic, retain) SBCoverSheetSceneManager *sceneManager;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, copy) id /* block */ secureAppCleanupHandler;
@property (nonatomic, retain) SBCoverSheetSecureAppEnvironmentViewController *secureAppEnvironmentViewController;
@property (nonatomic, retain) SBCoverSheetSlidingViewController *secureAppSlidingViewController;
@property (nonatomic, retain) SBDashBoardHostedAppViewController *secureAppViewController;
@property (nonatomic, retain) SBWindow *secureAppWindow;
@property (nonatomic, retain) NSMutableSet *secureAppWindowVisibleReasons;
@property (nonatomic) bool shouldDisplayFakeStatusBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BSInvalidatable> *suspendWallpaperAnimationAssertion;
@property (nonatomic, retain) <BSInvalidatable> *systemApertureCoverSheetAssertion;
@property (nonatomic) unsigned long long transitionOverrideOptions;
@property (nonatomic) CSCoverSheetTransitionSettings *transitionSettings;
@property (nonatomic) unsigned long long transitionType;
@property (setter=setUILockStateProvider:, nonatomic, retain) <SBUILockStateProvider> *uiLockStateProvider;
@property (nonatomic, retain) SBAtomicObjectQueue *unlockProgressQueue;
@property (nonatomic) bool wallpaperFloatingLayerHidden;
@property (nonatomic, retain) UIView<BSInvalidatable> *wallpaperFloatingLayerView;
@property (nonatomic, retain) UIView *wallpaperFloatingLayerViewContainerView;
@property (nonatomic) bool wantsHomeGestureOwnership;
@property (nonatomic, retain) SBFZStackParticipant *zStackParticipant;

+ (void)getLeadingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 trailingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forScreen:(id)arg3;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (void)_acquireAsynchronousRenderingAssertion;
- (void)_acquireSystemApertureCoverSheetAssertion;
- (void)_animateForProgress:(double)arg1;
- (void)_authenticationChanged:(id)arg1;
- (void)_cleanupARubberBandTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupATransition;
- (void)_cleanupDismissalTransition;
- (void)_cleanupIconAnimator;
- (void)_cleanupInterstitialTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupPresentationTransition;
- (void)_cleanupRubberBandDismissalTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupRubberBandPresentationTransitionForSlidingViewController:(id)arg1;
- (void)_clearSecureAppViewControllersIncludingWindow:(bool)arg1;
- (void)_clearSecureAppViewControllersIncludingWindow:(bool)arg1 force:(bool)arg2;
- (void)_createWallpaperOverlayIfNeededWithCoverSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_enqueueBlock:(id /* block */)arg1 withName:(id)arg2;
- (id)_impactFeedbackGeneratorConfigurationForStyle:(long long)arg1;
- (void)_invalidateSystemApertureCoverSheetAssertion;
- (bool)_isEffectivelyLocked;
- (id)_newRubberBandFeedbackGeneratorForSettings:(id)arg1;
- (void)_noteEffectiveLockStatusMayHaveChangedForUserNotification:(bool)arg1 canDismiss:(bool)arg2;
- (void)_notifyDelegateDidDismiss;
- (void)_notifyDelegateDidPresent;
- (void)_notifyDelegateRequestsUnlock;
- (void)_notifyDelegateWillDismiss;
- (void)_notifyDelegateWillPresent;
- (void)_performAfterSecureAppCleanup:(id /* block */)arg1;
- (void)_prepareCoverSheetWindowForDisplay;
- (void)_prepareForARubberBandTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForATransition;
- (void)_prepareForDismissalTransition;
- (void)_prepareForPresentationTransitionForUserGesture:(bool)arg1;
- (void)_prepareForRubberBandDismissalTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForRubberBandPresentationTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForTransitionToSecureApp;
- (void)_prepareIconAnimatorForPresenting:(bool)arg1;
- (void)_prepareInterstitialTransitionForSlidingViewController:(id)arg1;
- (void)_prepareSecureAppViewController;
- (void)_prepareSecureAppWindowForDisplay;
- (void)_relinquishAsynchronousRenderingAssertion;
- (void)_relinquishHomeGestureOwnership;
- (void)_removeWallpaperOverlay;
- (void)_requestHomeGestureOwnership;
- (void)_restartStartupTransitionBegan:(id)arg1;
- (bool)_secureAppTypeGetsCorrectDismissalSemantics:(unsigned long long)arg1;
- (void)_setCoverSheet:(bool)arg1 windowVisible:(bool)arg2 forReason:(id)arg3;
- (void)_setCoverSheetPresented:(bool)arg1 forcePresented:(bool)arg2 animated:(bool)arg3 options:(unsigned long long)arg4 withCompletion:(id /* block */)arg5;
- (void)_setCoverSheetPresented:(bool)arg1 forcePresented:(bool)arg2 animated:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)_setCoverSheetWindowVisible:(bool)arg1 forReason:(id)arg2;
- (void)_setOrientationUpdatesDeferred:(bool)arg1;
- (void)_setSecureAppWindowVisible:(bool)arg1 forReason:(id)arg2;
- (void)_setTransitionProgress:(double)arg1 animated:(bool)arg2 gestureActive:(bool)arg3 coverSheetProgress:(double)arg4 completion:(id /* block */)arg5;
- (void)_tellDashBoardOurAppearanceAndBehaviorChanged;
- (void)_tellDashBoardOurAppearanceChanged;
- (void)_tellDashBoardOurBehaviorChanged;
- (void)_transitionFromSecureAppToFullAppAndDismiss:(bool)arg1 preservingBanners:(bool)arg2;
- (void)_updateIconsFlyInWithSettings:(id)arg1;
- (void)_updateInterstitialTransitionForSlidingViewController:(id)arg1 withProgress:(double)arg2;
- (void)_updateProximitySensorState;
- (void)_updateSecureAppViewControllerVisibilityForAssertionsActive:(bool)arg1;
- (void)_updateShouldDisplayFakeStatusBarInVisibleTransition:(bool)arg1;
- (void)_updateTopButtonsForCoverSheetViewController:(id)arg1;
- (void)_updateVisibilityOfWindow:(id)arg1 forReasons:(id)arg2;
- (void)_updateWallpaperOverlay;
- (long long)_wallpaperEffectiveInterfaceOrientation;
- (long long)_wallpaperEffectiveInterfaceOrientationWithFallbackOrientation:(long long)arg1;
- (id)acquirePreserveSecureAppAssertionForReason:(id)arg1;
- (id)activeInterfaceOrientationChangeAssertion;
- (bool)activeInterfaceOrientationLocked;
- (void)addDismissalObserver:(id)arg1;
- (bool)animateIconsOnPresentationToo;
- (id)appearanceIdentifier;
- (void)assistantDidDisappear:(id)arg1 windowScene:(id)arg2;
- (id)asynchronousRenderingAssertion;
- (void)authenticationStateMayHaveChangedFromSource:(int)arg1;
- (bool)centerFollowsFinger;
- (id)components;
- (void)conformsToCSAppearanceProviding;
- (void)conformsToCSBehaviorProviding;
- (void)conformsToCSExternalBehaviorProviding;
- (bool)coverSheetCanTransitionToPresented:(bool)arg1;
- (id)coverSheetHostedAppSceneHandle;
- (id)coverSheetIdentifier;
- (id)coverSheetSlidingViewController;
- (void)coverSheetSlidingViewController:(id)arg1 animateForGestureActive:(bool)arg2 withProgress:(double)arg3 beginBlock:(id /* block */)arg4 endBlock:(id /* block */)arg5;
- (void)coverSheetSlidingViewController:(id)arg1 animationTickedWithProgress:(double)arg2 velocity:(double)arg3 coverSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 gestureActive:(bool)arg5 forPresentationValue:(bool)arg6;
- (void)coverSheetSlidingViewController:(id)arg1 committingToEndPresented:(bool)arg2;
- (void)coverSheetSlidingViewController:(id)arg1 dismissGestureChangedWithProgress:(double)arg2;
- (void)coverSheetSlidingViewController:(id)arg1 isTransitioning:(bool)arg2;
- (void)coverSheetSlidingViewController:(id)arg1 prepareForDismissalTransitionForReversingTransition:(bool)arg2 forUserGesture:(bool)arg3;
- (void)coverSheetSlidingViewController:(id)arg1 prepareForPresentationTransitionForUserGesture:(bool)arg2;
- (void)coverSheetSlidingViewControllerCleanupDismissalTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupPresentationTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(id)arg1;
- (bool)coverSheetSlidingViewControllerContentShouldAutoRotateWhenNotVisible:(id)arg1;
- (void)coverSheetSlidingViewControllerDidEndTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(id)arg1;
- (id)coverSheetSlidingViewControllerIfLoaded;
- (void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerReachabilityAnimationDidEnd:(id)arg1;
- (void)coverSheetSlidingViewControllerReachabilityAnimationWillBegin:(id)arg1;
- (bool)coverSheetSlidingViewControllerShouldAllowDismissal:(id)arg1;
- (void)coverSheetSlidingViewControllerUserPresentGestureBegan:(id)arg1;
- (id)coverSheetViewController;
- (void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2;
- (void)coverSheetViewController:(id)arg1 didUpdateLayout:(id)arg2;
- (void)coverSheetViewControllerActivityItemsMayHaveChanged:(id)arg1;
- (void)coverSheetViewControllerDidAddNewSceneHostEnvironment:(id)arg1;
- (void)coverSheetViewControllerDidObscureWallpaper:(id)arg1 obscured:(bool)arg2;
- (void)coverSheetViewControllerExternalLockProviderStateDidChange:(id)arg1;
- (void)coverSheetViewControllerWillPresentPosterSwitcher:(id)arg1;
- (id)coverSheetWindow;
- (id)coverSheetWindowVisibleReasons;
- (id)deferOrientationUpdatesAssertion;
- (id)delegate;
- (id)dismissalObservers;
- (bool)dismissingCoverSheet;
- (id)flyInSettings;
- (bool)hasBeenDismissedSinceBoot;
- (bool)hasBeenDismissedSinceKeybagLock;
- (bool)hasBeenDismissedSinceKeybagLockAndAuthenticated;
- (bool)hasContentUnderCoverSheetSlidingViewController:(id)arg1;
- (bool)hasFirstSwipeShowGrabberOverride;
- (id)iconAnimator;
- (id /* block */)iconAnimatorCompletionBlock;
- (id)iconAnimatorCompletionGroup;
- (bool)iconAnimatorNeedsAnimating;
- (double)iconFlyInFriction;
- (double)iconFlyInInteractiveDampingRatioMax;
- (double)iconFlyInInteractiveDampingRatioMin;
- (double)iconFlyInInteractiveResponseMax;
- (double)iconFlyInInteractiveResponseMin;
- (double)iconFlyInTension;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (id)init;
- (long long)interfaceOrientationForWallpaperController:(id)arg1;
- (bool)isActiveInterfaceOrientationLocked;
- (bool)isAnyGestureActivelyRecognized;
- (bool)isCoverSheetHostingAnApp;
- (bool)isCoverSheetHostingUnlockedEnvironmentWindows;
- (bool)isDismissGestureActive;
- (bool)isInSecureApp;
- (bool)isPresented;
- (bool)isTransitioning;
- (bool)isVisible;
- (bool)isVisibleAndNotDisappearing;
- (id)keyboardFocusAssertion;
- (id)legibilitySettings;
- (void)loadViewsIfNeeded;
- (id)lockScreenEnvironment;
- (id)lockScreenSettings;
- (id)lockUnlockQueue;
- (id)mainWorkspace;
- (bool)needsFakeStatusBarUpdate;
- (void)noteDeviceDidLock;
- (void)noteScreenDidTurnOff;
- (long long)notificationBehavior;
- (long long)participantState;
- (id)pearlMatchingStateProvider;
- (void)pearlMatchingStateProviderStateChangedForMatchFailure:(id)arg1;
- (bool)pendingClearSecureAppViewControllers;
- (id /* block */)ppt_transitionBeginsCallback;
- (id /* block */)ppt_transitionEndsCallback;
- (bool)preparingToDismissCoverSheet;
- (id)preserveSecureAppAssertions;
- (long long)proximityDetectionMode;
- (void)removeDismissalObserver:(id)arg1;
- (id)requireWallpaperAssertion;
- (unsigned long long)restrictedCapabilities;
- (bool)rubberBandCleanupNeeded;
- (id)rubberBandFeedbackGenerator;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (id)sceneManager;
- (id)scenesForBacklightSession;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (long long)scrollingStrategy;
- (id /* block */)secureAppCleanupHandler;
- (id)secureAppEnvironmentViewController;
- (void)secureAppEnvironmentViewControllerOwnsHomeGestureDidChange;
- (bool)secureAppEnvironmentViewControllerShouldEnableIdleWarning:(id)arg1 alwaysOnEnabled:(bool)arg2;
- (void)secureAppOfTypeDidBegin:(unsigned long long)arg1;
- (void)secureAppOfTypeDidEnd:(unsigned long long)arg1;
- (id)secureAppSlidingViewController;
- (id)secureAppSlidingViewControllerIfLoaded;
- (id)secureAppViewController;
- (void)secureAppViewControllerDidAuthenticate:(id)arg1;
- (id)secureAppWindow;
- (id)secureAppWindowVisibleReasons;
- (void)setActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)setActiveInterfaceOrientationLocked:(bool)arg1;
- (void)setAnimateIconsOnPresentationToo:(bool)arg1;
- (void)setAsynchronousRenderingAssertion:(id)arg1;
- (void)setCenterFollowsFinger:(bool)arg1;
- (void)setCoverSheetPresented:(bool)arg1 animated:(bool)arg2 options:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)setCoverSheetPresented:(bool)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)setCoverSheetSlidingViewController:(id)arg1;
- (void)setCoverSheetWindow:(id)arg1;
- (void)setCoverSheetWindowVisibleReasons:(id)arg1;
- (void)setDeferOrientationUpdatesAssertion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissalObservers:(id)arg1;
- (void)setDismissingCoverSheet:(bool)arg1;
- (void)setFlyInSettings:(id)arg1;
- (void)setHasBeenDismissedSinceBoot:(bool)arg1;
- (void)setHasBeenDismissedSinceKeybagLock:(bool)arg1;
- (void)setIconAnimator:(id)arg1;
- (void)setIconAnimatorCompletionBlock:(id /* block */)arg1;
- (void)setIconAnimatorCompletionGroup:(id)arg1;
- (void)setIconAnimatorNeedsAnimating:(bool)arg1;
- (void)setIconFlyInFriction:(double)arg1;
- (void)setIconFlyInInteractiveDampingRatioMax:(double)arg1;
- (void)setIconFlyInInteractiveDampingRatioMin:(double)arg1;
- (void)setIconFlyInInteractiveResponseMax:(double)arg1;
- (void)setIconFlyInInteractiveResponseMin:(double)arg1;
- (void)setIconFlyInTension:(double)arg1;
- (void)setKeyboardFocusAssertion:(id)arg1;
- (void)setLockScreenEnvironment:(id)arg1;
- (void)setLockScreenSettings:(id)arg1;
- (void)setLockUnlockQueue:(id)arg1;
- (void)setMainWorkspace:(id)arg1;
- (void)setNeedsFakeStatusBarUpdate:(bool)arg1;
- (void)setParticipantState:(long long)arg1;
- (void)setPearlMatchingStateProvider:(id)arg1;
- (void)setPendingClearSecureAppViewControllers:(bool)arg1;
- (void)setPpt_transitionBeginsCallback:(id /* block */)arg1;
- (void)setPpt_transitionEndsCallback:(id /* block */)arg1;
- (void)setPreparingToDismissCoverSheet:(bool)arg1;
- (void)setPreserveSecureAppAssertions:(id)arg1;
- (void)setRequireWallpaperAssertion:(id)arg1;
- (void)setRubberBandCleanupNeeded:(bool)arg1;
- (void)setRubberBandFeedbackGenerator:(id)arg1;
- (void)setSceneManager:(id)arg1;
- (void)setSecureAppCleanupHandler:(id /* block */)arg1;
- (void)setSecureAppEnvironmentViewController:(id)arg1;
- (void)setSecureAppSlidingViewController:(id)arg1;
- (void)setSecureAppViewController:(id)arg1;
- (void)setSecureAppWindow:(id)arg1;
- (void)setSecureAppWindowVisibleReasons:(id)arg1;
- (void)setShouldDisplayFakeStatusBar:(bool)arg1;
- (void)setSuspendWallpaperAnimationAssertion:(id)arg1;
- (void)setSystemApertureCoverSheetAssertion:(id)arg1;
- (void)setTransitionOverrideOptions:(unsigned long long)arg1;
- (void)setTransitionSettings:(id)arg1;
- (void)setTransitionType:(unsigned long long)arg1;
- (void)setUILockStateProvider:(id)arg1;
- (void)setUnlockProgressQueue:(id)arg1;
- (void)setWallpaperFloatingLayerHidden:(bool)arg1;
- (void)setWallpaperFloatingLayerView:(id)arg1;
- (void)setWallpaperFloatingLayerViewContainerView:(id)arg1;
- (void)setWantsHomeGestureOwnership:(bool)arg1;
- (void)setZStackParticipant:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldDisplayFakeStatusBar;
- (id)suspendWallpaperAnimationAssertion;
- (id)systemApertureCoverSheetAssertion;
- (id)traitsParticipantForSceneHandle:(id)arg1;
- (unsigned long long)transitionOverrideOptions;
- (id)transitionSettings;
- (unsigned long long)transitionType;
- (id)uiLockStateProvider;
- (id)unlockProgressQueue;
- (void)updateBecauseSecureAppChanged;
- (void)updateInterfaceOrientationToMatchOrientation:(long long)arg1;
- (void)updateVisibilityForGrabberVisible:(bool)arg1;
- (bool)wallpaperFloatingLayerHidden;
- (id)wallpaperFloatingLayerView;
- (id)wallpaperFloatingLayerViewContainerView;
- (bool)wantsHomeGestureOwnership;
- (void)willUIUnlockWithPendingUnlockRequest:(bool)arg1;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
