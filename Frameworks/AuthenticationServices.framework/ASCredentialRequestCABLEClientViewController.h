
@interface ASCredentialRequestCABLEClientViewController : ASCredentialRequestPaneViewController {
    NSObject<OS_os_activity> * _authorizationActivity;
    ASCABLELoginChoice * _loginChoice;
    ASCAuthorizationPresentationContext * _presentationContext;
}

- (void).cxx_destruct;
- (void)_addBelowQRCodeSpacerView;
- (double)_marginBelowQRCode;
- (double)_marginBelowSecurityKeyButton;
- (id)_qrCodeMessage;
- (void)_setUpQRCodeView;
- (void)_setUpSecurityKeyButtonViewIfNeeded;
- (void)_setUpTitleView;
- (id)_titleText;
- (void)_useSecurityKeyButtonTapped;
- (id)initWithPresentationContext:(id)arg1 loginChoice:(id)arg2 activity:(id)arg3;
- (void)viewDidLoad;

@end
