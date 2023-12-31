
@interface SBLockScreenManager : NSObject <BSDescriptionProviding, CSCoverSheetViewControllerDelegate, CSWallpaperColorProvider, PBUIWallpaperObserver, SBBacklightControllerObserver, SBCoverSheetPresentationDelegate, SBFPrivateAuthenticationObserver, SBHomeButtonShowPasscodeRecognizerDelegate, SBHomeButtonSuppressAfterUnlockRecognizerDelegate, SBIdleTimerCoordinating, SBIdleTimerProviding, SBLockScreenBiometricAuthenticationCoordinatorDelegate, SBMotionDetectionWakeControllerDelegate, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBSRemoteAlertHandleObserver, SBTapToWakeDelegate, SBUILockStateProvider, SBUILockStateProviding, UIGestureRecognizerDelegate> {
    id /* block */  _alertLaunchFinish;
    bool  _allowDisablePasscodeLockAssertion;
    bool  _allowUILockUnlock;
    UINotificationFeedbackGenerator * _authenticationFeedbackGenerator;
    SBLockScreenAutoUnlockAggregateRule * _autoUnlockRuleAggregator;
    <BSInvalidatable> * _bannerSuppressionAssertion;
    SBLockScreenBiometricAuthenticationCoordinator * _biometricAuthenticationCoordinator;
    SBCoverSheetBiometricResourceObserver * _biometricResourceObserver;
    NSString * _delayedLockReason;
    <SBHomeButtonShowPasscodeRecognizer> * _homeButtonShowPasscodeRecognizer;
    <SBHomeButtonSuppressAfterUnlockRecognizer> * _homeButtonSuppressAfterUnlockRecognizer;
    SBIdleTimerCoordinatorHelper * _idleTimerCoordinatorHelper;
    bool  _ignoringDelayDismissalPending;
    bool  _isInLostMode;
    bool  _isScreenOn;
    bool  _isUILocked;
    bool  _isWaitingToLockUI;
    SBLiftToWakeManager * _liftToWakeManager;
    SBLockElementViewProvider * _lockElement;
    NSHashTable * _lockElementSuppressionAssertions;
    <SBFLockOutStatusProvider> * _lockOutController;
    SBLockScreenDisabledAssertionManager * _lockScreenDisabledAssertionManager;
    <SBLockScreenEnvironment> * _lockScreenEnvironment;
    SBLockScreenOrientationManager * _lockScreenOrientationManager;
    BSCompoundAssertion * _lockScreenPresentationPendingAssertions;
    NSMutableDictionary * _mesaAutoUnlockingDisabledAssertions;
    NSMutableDictionary * _mesaCoordinatorDisabledAssertions;
    NSMutableDictionary * _mesaUnlockingDisabledAssertions;
    NSMutableDictionary * _mesaWalletPreArmDisabledAssertions;
    NSMutableSet * _mesaWalletPreArmDisabledReasons;
    <BSInvalidatable> * _motionDetectionIdleTimerAssertion;
    SBMotionDetectionWakeController * _motionDetectionWakeController;
    SBFMouseButtonDownGestureRecognizer * _mouseButtonDownGesture;
    SBPasscodeEntryTransientOverlayViewController * _passcodeEntryTransientOverlayViewController;
    bool  _passcodeEntryTransientOverlayViewControllerPresentedAnimated;
    SBPearlInterlockObserver * _pearlInterlockObserver;
    <BSInvalidatable> * _pipInterruptionAssertion;
    bool  _presentedPasscodeWhileUILocking;
    <SAInvalidatable> * _proudLockAssertion;
    bool  _saveUnlockRequest;
    bool  _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    SBFAuthenticationAssertion * _sustainAuthenticationWhileUIUnlockedAssertion;
    SBTapToWakeController * _tapToWakeController;
    bool  _uiHasBeenLockedOnce;
    bool  _uiUnlocking;
    id /* block */  _unlockActionBlock;
    SBLockScreenUnlockRequest * _unlockRequest;
    SBFUserAuthenticationController * _userAuthController;
    SBSRemoteAlertHandle * _wakeToRemoteAlertHandle;
}

@property (getter=isUIUnlocking, nonatomic) bool UIUnlocking;
@property (readonly) bool bioAuthenticatedWhileMenuButtonDown;
@property (nonatomic, readonly) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasWakeToContentForInactiveDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) bool isLockScreenActive;
@property (readonly) bool isLockScreenVisible;
@property (readonly) bool isSupressingLockButton;
@property (readonly) bool isUILocked;
@property (readonly) bool isWaitingToLockUI;
@property (getter=_liftToWakeManager, setter=_setLiftToWakeManager:, nonatomic, retain) SBLiftToWakeManager *liftToWakeManager;
@property (getter=_lockOutController, setter=_setLockOutController:, nonatomic, retain) <SBFLockOutStatusProvider> *lockOutController;
@property (nonatomic, readonly) <SBLockScreenEnvironment> *lockScreenEnvironment;
@property (nonatomic, readonly) SBLockScreenOrientationManager *lockScreenOrientationManager;
@property (getter=isLockScreenPresentationPending, readonly) bool lockScreenPresentationPending;
@property (getter=_motionDetectionWakeController, setter=_setMotionDetectionWakeController:, nonatomic, retain) SBMotionDetectionWakeController *motionDetectionWakeController;
@property (nonatomic, readonly) <SBNotificationDestination> *notificationDestination;
@property (readonly) bool shouldHandlePocketStateChanges;
@property (readonly) bool shouldPlayLockSound;
@property (readonly) bool shouldTapToWake;
@property (readonly) Class superclass;
@property (getter=_tapToWakeController, setter=_setTapToWakeController:, nonatomic, retain) SBTapToWakeController *tapToWakeController;
@property (nonatomic, copy) id /* block */ unlockActionBlock;
@property (getter=_userAuthController, setter=_setUserAuthController:, nonatomic, retain) SBFUserAuthenticationController *userAuthController;

+ (id)_sharedInstanceCreateIfNeeded:(bool)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (void)_activateLockScreenAnimated:(bool)arg1 animationProvider:(id /* block */)arg2 automatically:(bool)arg3 inScreenOffMode:(bool)arg4 dismissNotificationCenter:(bool)arg5 completion:(id /* block */)arg6;
- (void)_activeCallStateChanged;
- (bool)_attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(bool)arg2;
- (bool)_attemptUnlockWithPasscode:(id)arg1 mesa:(bool)arg2 finishUIUnlock:(bool)arg3;
- (bool)_attemptUnlockWithPasscode:(id)arg1 mesa:(bool)arg2 finishUIUnlock:(bool)arg3 completion:(id /* block */)arg4;
- (void)_authenticationStateChanged:(id)arg1;
- (bool)_canAttemptRealUIUnlockIgnoringBacklightNonsenseWithReason:(out id*)arg1;
- (bool)_canHandleTransitionRequest:(id)arg1;
- (void)_cleanupSystemApertureLockElementIfNecessaryWithReason:(id)arg1;
- (void)_cleanupSystemApertureLockElementIgnoringDelays:(bool)arg1 reason:(id)arg2;
- (void)_clearAuthenticationLockAssertion;
- (void)_createAuthenticationAssertion;
- (void)_deviceBlockedChanged:(id)arg1;
- (void)_disconnectActiveCallIfNeededFromSource:(int)arg1;
- (void)_emulateInterstitialPasscodePresentationForAccessibility:(bool)arg1;
- (void)_evaluatePreArmDisabledAssertions;
- (void)_evaluateWallpaperMode;
- (bool)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (void)_handleAuthenticationFeedback:(id)arg1;
- (void)_handleBacklightDidTurnOff:(id)arg1;
- (void)_handleBacklightLevelWillChange:(id)arg1;
- (bool)_hasValidLockElementSuppressionAssertion;
- (id)_hostingWindowScene;
- (bool)_isPasscodeVisible;
- (bool)_isUnlockDisabled;
- (id)_liftToWakeManager;
- (void)_lockFeaturesForRemoteLock:(bool)arg1;
- (id)_lockOutController;
- (void)_lockScreenDimmed:(id)arg1;
- (bool)_lockUI;
- (void)_maybeLaunchSetupForcingCheckIfNotBricked:(bool)arg1;
- (id)_motionDetectionWakeController;
- (id)_newLockScreenEnvironment;
- (void)_noteStartupTransitionDidBegin;
- (void)_noteStartupTransitionWillBegin;
- (void)_postLockCompletedNotification:(bool)arg1;
- (void)_prepareWallpaperForInteractiveMode;
- (void)_prepareWallpaperForStaticMode;
- (void)_reallySetUILocked:(bool)arg1;
- (void)_reevaluateSystemApertureLockElementSuppressionWithReason:(id)arg1;
- (void)_relockUIForButtonlikeSource:(int)arg1;
- (bool)_requiresEmptyLockElementForBacklightState:(long long)arg1;
- (void)_resetOrRestoreStateChanged:(id)arg1;
- (void)_runUnlockActionBlock:(bool)arg1;
- (void)_sendUILockStateChangedNotification;
- (void)_setHomeButtonShowPasscodeRecognizer:(id)arg1;
- (void)_setHomeButtonSuppressAfterUnlockRecognizer:(id)arg1;
- (void)_setIdleTimerCoordinator:(id)arg1;
- (void)_setLiftToWakeManager:(id)arg1;
- (void)_setLockOutController:(id)arg1;
- (void)_setMesaAutoUnlockingDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_setMesaCoordinatorDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_setMesaUnlockingDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_setMotionDetectionWakeController:(id)arg1;
- (bool)_setPasscodeVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setSystemApertureProudLockElementVisible:(bool)arg1 backlightState:(long long)arg2 withReason:(id)arg3;
- (void)_setSystemApertureProudLockElementVisible:(bool)arg1 withReason:(id)arg2;
- (void)_setSystemApertureProudLockElementVisible:(bool)arg1 withReason:(id)arg2 afterDelay:(double)arg3;
- (void)_setTapToWakeController:(id)arg1;
- (void)_setUILocked:(bool)arg1;
- (void)_setUserAuthController:(id)arg1;
- (void)_setWalletPreArmDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_setupModeChanged;
- (bool)_shouldBeInSetupMode;
- (bool)_shouldBeShowingLockElement;
- (bool)_shouldBeShowingLockElementForBacklightState:(long long)arg1;
- (bool)_shouldBloomForAnyReason;
- (bool)_shouldDisconnectCallWhenLockingForActiveAudioRoute;
- (bool)_shouldEmulateInterstitialPresentationForAccessibility:(bool)arg1;
- (bool)_shouldHideLockForElementSuppressionAssertion;
- (bool)_shouldLockAfterEndingFaceTimeCall;
- (bool)_shouldLockAfterEndingTelephonyCall;
- (bool)_shouldReactivateInCallWakingTheDisplay:(bool)arg1;
- (bool)_shouldUnlockUIOnKeyDownEvent;
- (bool)_shouldWakeToInCallForUnlockSource:(int)arg1 wakingTheDisplay:(bool)arg2;
- (bool)_shouldWakeToOtherContentForUnlockSource:(int)arg1 wakingTheDisplay:(bool)arg2 stopAfterWakeTo:(bool)arg3;
- (void)_showSystemApertureProudLockElementForBacklightState:(long long)arg1 WithReason:(id)arg2;
- (void)_showSystemApertureProudLockElementIfSupportedWithReason:(id)arg1;
- (bool)_specifiesTransientPresentationForMode:(long long)arg1;
- (id)_statusBarLayoutManager;
- (id)_tapToWakeController;
- (bool)_unlockWithRequest:(id)arg1 cancelPendingRequests:(bool)arg2 completion:(id /* block */)arg3;
- (void)_updateBloomIfNeeded;
- (id)_userAuthController;
- (void)_wakeScreenForMouseButtonDown:(id)arg1;
- (void)_wakeScreenForTapToWake;
- (id)acquireLockScreenPresentationPendingAssertionWithReason:(id)arg1;
- (id)acquireMotionDetectionWakeEnableAssertionWithReason:(id)arg1;
- (id)acquireSystemApertureLockElementSuppressionAssertionWithReason:(id)arg1;
- (void)activateLostModeForRemoteLock:(bool)arg1;
- (void)activationChanged:(id)arg1;
- (void)addLockScreenDisableAssertion:(id)arg1;
- (void)attemptUnlockWithMesa;
- (void)attemptUnlockWithPasscode:(id)arg1;
- (void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(bool)arg2 completion:(id /* block */)arg3;
- (id)averageColorForCurrentWallpaper;
- (id)averageColorForCurrentWallpaperInScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)backlightController:(id)arg1 didTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (void)backlightController:(id)arg1 didUpdateDigitizerDisabled:(bool)arg2 tapToWakeEnabled:(bool)arg3;
- (void)backlightController:(id)arg1 willTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (bool)bioAuthenticatedWhileMenuButtonDown;
- (id)biometricAuthenticationCoordinator;
- (void)biometricAuthenticationCoordinator:(id)arg1 handleIdentityMatchSuccess:(bool)arg2;
- (bool)biometricAuthenticationCoordinator:(id)arg1 requestsAuthenticationFeedback:(id)arg2;
- (bool)biometricAuthenticationCoordinator:(id)arg1 requestsUnlockWithIntent:(int)arg2;
- (bool)biometricAuthenticationCoordinatorShouldWaitToInvalidateMatchingAssertion:(id)arg1;
- (double)contrastForCurrentWallpaper;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)coverSheetPresentationManager:(id)arg1 unlockWithRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)coverSheetViewController;
- (void)coverSheetViewController:(id)arg1 requestsTouchIDDisabled:(bool)arg2 forReason:(id)arg3;
- (void)coverSheetViewController:(id)arg1 requestsTransientOverlaysDismissedAnimated:(bool)arg2;
- (void)coverSheetViewController:(id)arg1 setMesaUnlockingDisabled:(bool)arg2 forReason:(id)arg3;
- (void)coverSheetViewController:(id)arg1 startSpotlightInteractiveGestureTransactionForGesture:(id)arg2;
- (void)coverSheetViewController:(id)arg1 unlockWithRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)coverSheetViewControllerDidDismissInlinePasscode:(id)arg1;
- (void)coverSheetViewControllerHandleUnlockAttemptSucceeded:(id)arg1;
- (bool)coverSheetViewControllerHasBeenDismissedSinceKeybagLock:(id)arg1;
- (bool)coverSheetViewControllerHasSecureApp:(id)arg1;
- (void)coverSheetViewControllerIrisPlayingDidFinish:(id)arg1;
- (bool)coverSheetViewControllerIsPasscodeVisible:(id)arg1;
- (bool)coverSheetViewControllerIsShowingSecureApp:(id)arg1;
- (void)coverSheetViewControllerShouldDismissContextMenu:(id)arg1;
- (bool)coverSheetViewControllerShouldPreserveOrientationForExternalTransition:(id)arg1;
- (bool)coverSheetViewControllerTraitsArbiterOrientationActuationEnabled:(id)arg1;
- (void)coverSheetViewControllerWillPresentInlinePasscode:(id)arg1;
- (void)coverSheetWindowedAccessoryViewControllerDidDismiss:(id)arg1;
- (void)coverSheetWindowedAccessoryViewControllerDidPresent:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enableLostModePlugin;
- (void)exitLostModeIfNecessaryFromRemoteRequest:(bool)arg1;
- (void)extendedKeybagLockStateChanged:(bool)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)handleKeyHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (bool)handleTransitionRequest:(id)arg1;
- (bool)handlesHomeButtonSinglePresses;
- (bool)hasUIEverBeenLocked;
- (bool)hasWakeToContentForInactiveDisplay;
- (void)hideDimmingLayerDidChange:(bool)arg1;
- (void)homeButtonShowPasscodeRecognizerDidFailToRecognize:(id)arg1;
- (void)homeButtonShowPasscodeRecognizerRequestsPasscodeUIToBeShown:(id)arg1;
- (void)homeButtonSuppressAfterUnlockRecognizerRequestsEndOfSuppression:(id)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)init;
- (bool)isInLostMode;
- (bool)isLockScreenActive;
- (bool)isLockScreenDisabledForAssertion;
- (bool)isLockScreenPresentationPending;
- (bool)isLockScreenVisible;
- (bool)isPasscodeEntryTransientOverlayVisible;
- (bool)isSupressingLockButton;
- (bool)isUILocked;
- (bool)isUIUnlocking;
- (bool)isWaitingToLockUI;
- (void)loadViewsIfNeeded;
- (id)lockScreenEnvironment;
- (id)lockScreenOrientationManager;
- (void)lockScreenViewControllerDidDismiss;
- (void)lockScreenViewControllerDidPresent;
- (void)lockScreenViewControllerRequestsUnlock;
- (void)lockScreenViewControllerWillDismiss;
- (void)lockScreenViewControllerWillPresent;
- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2;
- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)motionDetectionWakeController:(id)arg1 motionDetectStateChanged:(bool)arg2;
- (id)newLegibilitySettingsProvider;
- (void)noteBacklightWillTransitionToInactive;
- (void)noteMenuButtonDoublePress;
- (void)noteMenuButtonSinglePress;
- (id)notificationDestination;
- (bool)passcodeEntryTransientOverlayViewController:(id)arg1 authenticatePasscode:(id)arg2;
- (bool)passcodeEntryTransientOverlayViewControllerDidDetectBottomFaceOcclusionsSinceScreenOn:(id)arg1;
- (bool)passcodeEntryTransientOverlayViewControllerDidDetectFaceOcclusionsSinceScreenOn:(id)arg1;
- (void)passcodeEntryTransientOverlayViewControllerDidDisappear:(id)arg1;
- (void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)arg1;
- (void)passcodeEntryTransientOverlayViewControllerRequestsEmergencyCall:(id)arg1;
- (id)passcodeEntryTransientOverlayViewControllerStatusSubtitleText;
- (id)passcodeEntryTransientOverlayViewControllerStatusText;
- (void)reevaluateSystemApertureLockElementSuppressionWithReason:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteLock:(bool)arg1;
- (void)removeLockScreenDisableAssertion:(id)arg1;
- (void)requestUserAttentionScreenWakeFromSource:(int)arg1 reason:(id)arg2;
- (void)setBiometricAutoUnlockingDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setPasscodeVisible:(bool)arg1 animated:(bool)arg2;
- (void)setUIUnlocking:(bool)arg1;
- (void)setUnlockActionBlock:(id /* block */)arg1;
- (bool)shouldHandlePocketStateChanges;
- (bool)shouldLockUIAfterEndingCall;
- (bool)shouldPlayLockSound;
- (bool)shouldTapToWake;
- (void)startUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)tapToWakeControllerDidRecognizePencilWakeGesture:(id)arg1;
- (void)tapToWakeControllerDidRecognizeWakeGesture:(id)arg1;
- (id /* block */)unlockActionBlock;
- (bool)unlockUIFromSource:(int)arg1 withOptions:(id)arg2;
- (bool)unlockWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSpringBoardStatusBarForLockScreenTeardown;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (bool)willAttemptToHandleTransitionRequest:(id)arg1;

@end
