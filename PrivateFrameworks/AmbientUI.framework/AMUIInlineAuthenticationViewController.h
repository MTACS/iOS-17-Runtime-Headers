
@interface AMUIInlineAuthenticationViewController : UIViewController <AMAuthenticationSender, SBUIPasscodeLockViewDelegate> {
    <AMAuthenticationHandling> * _authenticationHandler;
    <AMUIDateProviding> * _dateProvider;
    AMUIDateTimeDataLayerViewController * _dateTimeLayerViewController;
    <AMUIInlineAuthenticationViewControllerDelegate> * _delegate;
    MTMaterialView * _materialView;
    AMUIPasscodeButton * _passcodeButton;
    UIView<SBUIPasscodeLockView> * _passcodeView;
    NSString * _unlockDestination;
}

@property (nonatomic) <AMAuthenticationHandling> *authenticationHandler;
@property (nonatomic, retain) <AMUIDateProviding> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMUIInlineAuthenticationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attemptUnlockForBioUnlock:(bool)arg1;
- (bool)_canShowWhileLocked;
- (void)_handlePasscodeButtonAction;
- (void)_reset;
- (void)_setDateTimeLayerHidden:(bool)arg1;
- (void)_setPasscodeVisible:(bool)arg1;
- (bool)_shouldSkipBiometricPresentation;
- (id)_unlockReason;
- (id)authenticationHandler;
- (id)dateProvider;
- (id)delegate;
- (id)initWithUnlockDestination:(id)arg1;
- (id)passcode;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewStateChange:(id)arg1;
- (void)resetForFailedPasscode;
- (void)resetForSuccess;
- (void)setAuthenticationHandler:(id)arg1;
- (void)setDateProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
