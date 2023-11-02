
@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate> {
    bool  _attemptingUnlock;
    SBFUserAuthenticationController * _authenticationController;
    <SBPasscodeEntryTransientOverlayViewControllerDelegate> * _delegate;
    int  _intent;
    bool  _keyboardVisible;
    long long  _overridePresentationOrientation;
    <SBUIPasscodeLockView> * _passcodeRequester;
    SBUIPasscodeViewWithLockScreenStyle * _passcodeView;
    CSLockScreenPearlSettings * _pearlSettings;
    CSPoseidonViewController * _poseidonViewController;
    bool  _showEmergencyCallButton;
    NSString * _unlockDestination;
    bool  _useBiometricPresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBPasscodeEntryTransientOverlayViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int intent;
@property (nonatomic) long long overridePresentationOrientation;
@property (nonatomic) bool showEmergencyCallButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *unlockDestination;
@property (nonatomic) bool useBiometricPresentation;

- (void).cxx_destruct;
- (void)_attemptUnlock:(id)arg1 passcode:(id)arg2;
- (bool)_canShowWhileLocked;
- (void)_passcodeLockViewPasscodeEntered:(id)arg1 authenticationType:(unsigned long long)arg2;
- (int)_preferredStatusBarVisibility;
- (void)_updatePrototypeSettings;
- (bool)canBecomeLocalFirstResponder;
- (id)delegate;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (void)handleWillShowKeyboard:(bool)arg1;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (id)initWithAuthenticationController:(id)arg1;
- (int)intent;
- (bool)isContentOpaque;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (long long)overridePresentationOrientation;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (id)preferredDisplayLayoutElementIdentifier;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (bool)prefersEmbeddedDisplayPresentation;
- (void)setDelegate:(id)arg1;
- (void)setIntent:(int)arg1;
- (void)setOverridePresentationOrientation:(long long)arg1;
- (void)setShowEmergencyCallButton:(bool)arg1;
- (void)setUnlockDestination:(id)arg1;
- (void)setUseBiometricPresentation:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldAutorotate;
- (bool)showEmergencyCallButton;
- (unsigned long long)supportedInterfaceOrientations;
- (id)unlockDestination;
- (bool)useBiometricPresentation;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
