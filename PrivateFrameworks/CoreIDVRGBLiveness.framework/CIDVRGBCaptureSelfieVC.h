
@interface CIDVRGBCaptureSelfieVC : UIViewController <CIDVRGBCaptureSelfieControllerDelegate> {
    bool  _accessibilityOptionsEnabled;
    long long  _alertCause;
    long long  _alertCount;
    double  _alertStartTime;
    CIDVRGBAudioSession * _audioSession;
    UILabel * _axOptionsPrompt;
    NSLayoutConstraint * _axOptionsPromptBottomConstraint;
    NSMutableArray * _blocksAwaitingImageQualityVerifications;
    UIVisualEffectView * _blurView;
    UIView * _bottomContainer;
    NSLayoutConstraint * _bottomContainerSelfieHeightConstraint;
    CIDVRGBCameraPreview * _cameraFeed;
    NSArray * _cameraPreviewConstraintsDefault;
    NSArray * _cameraPreviewConstraintsExpanded;
    bool  _cameraPreviewExpanded;
    bool  _canResumeGestureTutorial;
    UILabel * _coachingPrompt;
    NSLayoutConstraint * _coachingPromptBottomConstraint;
    UIView * _coachingPromptContainer;
    UIScrollView * _coachingPromptScrollView;
    NSLayoutConstraint * _coachingPromptTopConstraint;
    CIDVRGBCoachingView * _coachingView;
    NSLayoutConstraint * _coachingViewCenterYConstraintLarge;
    NSLayoutConstraint * _coachingViewCenterYConstraintSmall;
    NSLayoutConstraint * _coachingViewWidthConstraintLarge;
    NSLayoutConstraint * _coachingViewWidthConstraintSmall;
    CIDVRGBCaptureUIConfig * _config;
    long long  _consecutiveInvalidFrames;
    UIButton * _continueButton;
    <CIDVRGBCaptureSelfieController> * _controller;
    long long  _currentGesture;
    double  _currentGestureDetectionStartTime;
    bool  _didSkipLastGesture;
    NSTimer * _errorReminderTimer;
    UIButton * _expandButton;
    UIBarButtonItem * _flashButton;
    long long  _flashMode;
    NSTimer * _gestureDetectedTimer;
    NSTimer * _gestureTutorialDelayTimer;
    bool  _hasCancelledFromStitch;
    bool  _hasPausedGestureTutorial;
    bool  _hasPresentedFirstGesture;
    bool  _hasPresentedLastGesture;
    bool  _hasShownAXOptions;
    bool  _hasShownErrorAlert;
    bool  _hasShownGestureNotDetectedAlert;
    bool  _hasShownGestureReminder;
    bool  _hasShownInvalidFramesAlert;
    bool  _haveOverriddenWindowUserInterfaceStyle;
    NSError * _latestImageQualityError;
    UIView * _livenessButtonContainer;
    id /* block */  _livenessPrimaryBlock;
    UIButton * _livenessPrimaryButton;
    UIActivityIndicatorView * _livenessPrimaryButtonActivityIndicator;
    id /* block */  _livenessSecondaryBlock;
    UIButton * _livenessSecondaryButton;
    unsigned long long  _maxRetakeCount;
    bool  _modelsAreRunning;
    UIView * _nagContainer;
    UILabel * _nagPrompt;
    bool  _originalIdleTimerDisabled;
    UIColor * _originalNavBarColor;
    long long  _originalWindowUserInterfaceStyle;
    NSString * _primaryButtonTitle;
    long long  _reminderCount;
    UIButton * _retakeButton;
    UIImageView * _selfieView;
    bool  _shouldIgnoreErrors;
    bool  _shouldShowSkipGestureAfterInitialTimer;
    CIDVRGBCameraShutterView * _shutterButton;
    UILabel * _shutterPrompt;
    CIDVRGBCaptureTimer * _skipAlertTimer;
    CIDVRGBCaptureTimer * _skipButtonTimer;
    UIView * _topContainer;
    NSLayoutConstraint * _topContainerLivenessHeightConstraint;
}

@property (nonatomic, retain) CIDVRGBCaptureUIConfig *config;

- (void).cxx_destruct;
- (void)_animateGestureReminderWithCompletion:(id /* block */)arg1;
- (void)_animateTransitionToGesture:(long long)arg1 completion:(id /* block */)arg2;
- (void)_animateTransitionToPhotoCaptureWithCompletion:(id /* block */)arg1;
- (void)_cancelCaptureSession:(id)arg1;
- (void)_cancelErrorReminderTimer;
- (void)_cancelFromInvalidFramesWithCode:(long long)arg1;
- (void)_cancelFromStitchDetection:(id)arg1;
- (void)_cancelGestureTutorialDelayTimer;
- (void)_cancelSkipButtonTimers;
- (long long)_coachingViewStyleForGesture:(long long)arg1;
- (void)_completeCaptureSession;
- (void)_continuePressed:(id)arg1;
- (void)_dispatchSkipButtonTimers;
- (void)_enableAccessibilityOptions;
- (void)_enableSkipButtonWithReminder;
- (void)_hideBlurView:(id /* block */)arg1;
- (void)_hideCoachingView;
- (void)_incrementInvalidFrameCounterWithCode:(long long)arg1;
- (void)_livenessPrimaryButtonPressed:(id)arg1;
- (void)_livenessSecondaryButtonPressed:(id)arg1;
- (void)_overrideWindowUserInterfaceStyle;
- (void)_pauseSkipButtonTimers;
- (void)_pauseTutorial;
- (void)_performBlocksAwaitingImageQualityVerification;
- (void)_performSelfieCapture;
- (void)_presentCoachingForGesture:(long long)arg1 completion:(id /* block */)arg2;
- (void)_presentCoachingSuccess:(id /* block */)arg1;
- (void)_presentErrorGenericAlert:(id)arg1;
- (void)_presentErrorLowDiskSpaceAlert;
- (void)_presentForcedSkipGestureAlert;
- (void)_presentLastGestureDetectedScreen;
- (void)_presentSelfieErrorAlert:(id)arg1;
- (void)_presentSkipGestureAlert;
- (void)_repeatCurrentGestureCoaching;
- (void)_resetInvalidFrameCounter;
- (long long)_restartCauseFromErrorCode:(long long)arg1;
- (void)_restartSelfieCapture;
- (void)_restoreOriginalWindowUserInterfaceStyle;
- (void)_resumeTutorial;
- (void)_retakePressed:(id)arg1;
- (void)_sendAlertAnalyticsEvent;
- (void)_sendGestureDetectedAnalyticsEvent;
- (void)_setCoachingPromptText:(id)arg1;
- (void)_setCoachingPromptTextForGesture:(long long)arg1;
- (void)_setErrorReminderTimer;
- (void)_setUseFlash:(bool)arg1;
- (void)_setupBlurView;
- (void)_setupBottomContainer;
- (void)_setupCameraFeed;
- (void)_setupCoachingPrompt;
- (void)_setupCoachingPromptContainer;
- (void)_setupCoachingPromptScrollView;
- (void)_setupCoachingView;
- (void)_setupContinueButton;
- (void)_setupController;
- (void)_setupExpandButton;
- (void)_setupFlashButton;
- (void)_setupLivenessButtonContainer;
- (void)_setupLivenessPrimaryButton;
- (void)_setupLivenessSecondaryButton;
- (void)_setupNag;
- (void)_setupRetakeButton;
- (void)_setupSelfieView;
- (void)_setupShutterButton;
- (void)_setupShutterPrompt;
- (void)_setupTopContainer;
- (bool)_shouldRestart;
- (void)_showAXOptions;
- (void)_showBlurView:(id /* block */)arg1;
- (void)_showNextGesture:(long long)arg1;
- (void)_showPhotoCapture;
- (void)_showSelfieCapturedOptions;
- (void)_skipGesture;
- (void)_startCaptureSession;
- (void)_startShowingLivenessActivity;
- (void)_stopShowingLivenessActivity;
- (void)_toggleCameraPreviewExpansion:(id)arg1;
- (void)_toggleFlash:(id)arg1;
- (void)_updateViewsForWatchMode;
- (void)_useLargeCoachingView;
- (void)_useSmallCoachingView;
- (id)boldFontWithFont:(id)arg1;
- (void)captureSelfieDidDetectIncorrectGesture;
- (void)captureSelfieDidEncounterError:(id)arg1;
- (void)captureSelfieDidFinishGestureMonitoring;
- (void)captureSelfieDidObtainImageQualityError:(id)arg1;
- (void)captureSelfieDidObtainPicture:(id)arg1 error:(id)arg2;
- (void)captureSelfieWillMonitorGesture:(long long)arg1;
- (id)config;
- (void)loadView;
- (void)performBlockAfterImageQualityVerifications:(id /* block */)arg1;
- (long long)preferredStatusBarStyle;
- (void)prepareForDismissal;
- (void)setConfig:(id)arg1;
- (void)setController:(id)arg1;
- (bool)shouldEnableAXByDefault;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
