
@interface ASCredentialRequestConfirmButtonSubPane : ASCredentialRequestSubPane <LAUIAuthenticationDelegate> {
    NSObject<OS_os_activity> * _authorizationActivity;
    ASCredentialRequestButton * _authorizationButton;
    UIView * _authorizationButtonContainerView;
    UILabel * _biometricLabel;
    LAUIAuthenticationView * _biometricsView;
    bool  _canPerformBiometricAuthentication;
    UIView * _containerView;
    <ASCredentialRequestSubPaneConfirmButtonDelegate> * _delegate;
    UIStackView * _mainStackView;
    ASCredentialRequestPaneContext * _paneContext;
    id /* block */  _processingStateCompletionHandler;
    NSObject<OS_dispatch_group> * _processingStateGroup;
}

@property (nonatomic, readonly) ASCredentialRequestButton *authorizationButton;
@property (nonatomic) bool authorizationCapabilityEnabled;
@property (nonatomic, copy) NSString *buttonText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASCredentialRequestSubPaneConfirmButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_createMainStackView;

- (void).cxx_destruct;
- (void)_addArrangedSpaceToMainStackView:(double)arg1;
- (unsigned long long)_authenticationMechanism;
- (void)_authorizationButtonBioSelected:(id)arg1;
- (void)_authorizationWithPasscodeOrPasswordButtonSelected:(id)arg1;
- (void)_authorizeAppleAccountWithPasswordButtonSelected:(id)arg1;
- (void)_continueButtonTapped;
- (void)_disableBiometricView;
- (void)_enableLAUIAuthenticationMechanism;
- (void)_enterProcessingStateWithCompletionHandler:(id /* block */)arg1;
- (void)_initializeAuthorizationButton;
- (bool)_isDelegateReadyForAuthorization;
- (id)_passcodeOrPasswordButtonTitle;
- (id)_passwordAuthenticationButtonTitle;
- (void)_performPasscodeOrPasswordValidation:(id /* block */)arg1;
- (void)_setGlyphViewGestureRecognizerEnabled:(bool)arg1;
- (id)_setUpAlertImageWithConstraints;
- (void)_setupBiometricButtonWithConstraints:(id)arg1;
- (void)_setupLabelWithTitle:(id)arg1 animated:(bool)arg2;
- (void)_switchToAppleAccountPassword;
- (void)_switchToBiometricsView:(bool)arg1 withAuthenticationMechanismEnabled:(bool)arg2 showAlert:(bool)arg3 alertString:(id)arg4;
- (void)_switchToPasscodeOrPassword;
- (void)_updateLabelAnimatedWithTitle:(id)arg1;
- (id)_verticalSpacerWithConstant:(double)arg1;
- (void)_waitForTimeInterval:(double)arg1 withGroup:(id)arg2;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)addToStackView:(id)arg1 withCustomSpacingAfter:(double)arg2 context:(id)arg3;
- (void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3;
- (id)authorizationButton;
- (bool)authorizationCapabilityEnabled;
- (void)biometricAuthenticationFailureWithAlertString:(id)arg1;
- (id)buttonText;
- (void)dealloc;
- (id)delegate;
- (void)finishProcessingWithCompletionHandler:(id /* block */)arg1;
- (id)initWithActivity:(id)arg1;
- (void)invalidateProcessingState;
- (void)processBiometricMatchWithCompletionHandler:(id /* block */)arg1;
- (void)setAuthorizationCapabilityEnabled:(bool)arg1;
- (void)setButtonText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUpButtonInPaneContext:(id)arg1;
- (void)showAlertContinuingWithPassword:(bool)arg1;
- (void)showAuthenticationMechanismForExternalPasswordCredential;
- (void)showContinueButton;
- (void)showContinueButtonWithTitle:(id)arg1;
- (void)showContinueWithPasswordButton;

@end
