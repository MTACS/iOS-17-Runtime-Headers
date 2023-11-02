
@interface ACM2SVAuthenticationUIController : NSObject <ACC2SVAuthenticationUIControllerProtocol, ACM2SVCodeVerificationViewControllerDelegate, ACM2SVTrustedDevicesViewControllerDelegate> {
    ACM2SVCodeVerificationViewController * _codeVerificationViewController;
    <ACC2SVAuthenticationUIControllerDelegate> * _delegate;
    UIViewController * _parentViewController;
    ACM2SVTrustedDevicesViewController * _trustedDevicesViewController;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, retain) ACM2SVCodeVerificationViewController *codeVerificationViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACC2SVAuthenticationUIControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long keyboardAppearance;
@property (nonatomic, readonly) UIColor *labelTextColor;
@property (nonatomic, retain) UIViewController *parentViewController;
@property (nonatomic, readonly) long long statusBarStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, retain) ACM2SVTrustedDevicesViewController *trustedDevicesViewController;

- (id)backgroundColor;
- (void)cancelInProgressImageDownloads;
- (void)chooseTrustedDeviceWithDeviceList:(id)arg1 completion:(id /* block */)arg2;
- (id)codeVerificationViewController;
- (void)codeVerificationViewControllerNeedsResendCode:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)downloadImageWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)enterVerificationCodeWithLength:(unsigned long long)arg1 forDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)handleFailoverWithCompletion:(id /* block */)arg1;
- (void)hideEnterVerificationCodeViewControllerAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)hideTrustedDevicesViewControllerAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)hideUIAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithParentViewController:(id)arg1;
- (long long)keyboardAppearance;
- (id)labelTextColor;
- (id)parentViewController;
- (void)resetCodeVerificationViewController;
- (void)resetTrustedDevicesViewControllerWithDeviceList:(id)arg1;
- (void)setCodeVerificationViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setTrustedDevicesViewController:(id)arg1;
- (void)showAlertWithError:(id)arg1 completion:(id /* block */)arg2;
- (long long)statusBarStyle;
- (id)textColor;
- (id)tintColor;
- (id)trustedDevicesViewController;
- (void)trustedDevicesViewControllerDidSelectUnableReceiveMessages:(id)arg1;
- (void)trustedDevicesViewControllerNeedsRefresh:(id)arg1;

@end
