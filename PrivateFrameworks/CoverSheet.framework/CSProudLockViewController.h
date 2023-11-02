
@interface CSProudLockViewController : CSCoverSheetViewControllerBase <PTSettingsKeyObserver, SBUIProudLockContainerViewControllerDelegate, SBUIProudLockContainerViewControllerLockStatusProvider> {
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    <SBUIBiometricResource> * _biometricResource;
    long long  _deferredAuthenticationState;
    <CSProudLockViewControllerDelegate> * _delegate;
    <BSInvalidatable> * _faceDetectWantedAssertion;
    bool  _hasReactedToAuthentication;
    bool  _isAuthenticated;
    CSLockScreenPearlSettings * _pearlSettings;
    SBUIProudLockContainerViewController * _proudLockContainerViewController;
    bool  _shouldReactToAuthentication;
    bool  _suspendLockUpdates;
}

@property (nonatomic, retain) <SBFAuthenticationStatusProvider> *authenticationStatusProvider;
@property (nonatomic, retain) <SBUIBiometricResource> *biometricResource;
@property (nonatomic, readonly) UIView *cameraCoveredView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSProudLockViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPasscodeSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBiometricLockedOut;
@property (nonatomic, retain) SBUIProudLockContainerViewController *proudLockContainerViewController;
@property (nonatomic, readonly) UIView *proudLockView;
@property (readonly) Class superclass;
@property (nonatomic) bool suspendLockUpdates;

- (void).cxx_destruct;
- (void)_clearFaceDetectAssertion;
- (void)_createFaceDetectAssertion;
- (bool)_shouldApplyScaleAndBlurForAuthenticated;
- (void)_updateForAuthenticated:(bool)arg1;
- (void)_updateForProudLockStateChangeAnimated:(bool)arg1;
- (void)_updateForProudLockStateChangeDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_updateProudLockViewControllerConfiguration;
- (void)aggregateAppearance:(id)arg1;
- (id)authenticationStatusProvider;
- (id)biometricResource;
- (id)cameraCoveredView;
- (id)delegate;
- (bool)handleEvent:(id)arg1;
- (bool)hasPasscodeSet;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isBiometricLockedOut;
- (id)proudLockContainerViewController;
- (void)proudLockContainerViewController:(id)arg1 guidanceTextVisibilityDidChange:(id)arg2 animated:(bool)arg3;
- (bool)proudLockContainerViewControllerIsCoverSheetVisible:(id)arg1;
- (id)proudLockView;
- (void)setAuthenticationStatusProvider:(id)arg1;
- (void)setBiometricResource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProudLockContainerViewController:(id)arg1;
- (void)setSuspendLockUpdates:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)suspendLockUpdates;
- (id)transientSubtitleText;
- (void)updateLockForBiometricMatchFailure;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
