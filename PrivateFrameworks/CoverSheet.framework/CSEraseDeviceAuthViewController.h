
@interface CSEraseDeviceAuthViewController : UIViewController <AKInlineSignInViewControllerDelegate> {
    AKAppleIDAuthenticationInAppContext * _authContext;
    AKInlineSignInViewController * _authenticationViewController;
    UIButton * _cancelButton;
    <CSEraseDeviceAuthViewControllerDelegate> * _delegate;
    UIView * _labelsContainerView;
    UIView * _springView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) AKAppleIDAuthenticationInAppContext *authContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSEraseDeviceAuthViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateConstraints;
- (id)_authenticationView;
- (bool)_canShowWhileLocked;
- (void)_handleCancelButtonAction;
- (void)_presentEraseConfirmationAlertWithAuthResults:(id)arg1;
- (void)_updateForFailedAppleIDAuthentication;
- (id)authContext;
- (id)delegate;
- (void)loadView;
- (void)setAuthContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSubtitleLabelText:(id)arg1;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)viewDidLoad;

@end
