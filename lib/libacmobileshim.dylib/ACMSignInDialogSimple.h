
@interface ACMSignInDialogSimple : ACMSignInDialog <ACMSignInDialogSimpleProtocol> {
    NSString * _accountNameFieldPlaceholder;
    UIView * _backgroudView;
    UIColor * _backgroundColor;
    UIButton * _cancelButton;
    UIColor * _licenseTextColor;
    UITextView * _licenseTextField;
    UIButton * _loginButton;
    UIImage * _logo;
}

@property (nonatomic, retain) NSString *accountNameFieldPlaceholder;
@property (nonatomic, retain) UIView *backgroudView;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) UIButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property <ACMSignInDialogDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIColor *licenseTextColor;
@property (nonatomic, readonly) UIButton *loginButton;
@property (nonatomic, retain) UIImage *logo;
@property NSString *passwordString;
@property (nonatomic, retain) NSString *requestedUserName;
@property (readonly) Class superclass;
@property (readonly) NSString *userNameString;
@property (nonatomic, readonly) unsigned long long verticalShift;

- (id)accountNameFieldPlaceholder;
- (id)backgroudView;
- (id)backgroundColor;
- (id)cancelButton;
- (void)checkFields;
- (void)dealloc;
- (void)disableControls:(bool)arg1;
- (void)focus;
- (id)licenseTextColor;
- (void)loadView;
- (id)loginButton;
- (id)logo;
- (id)passwordString;
- (void)setAccountNameFieldPlaceholder:(id)arg1;
- (void)setBackgroudView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setLicenseTextColor:(id)arg1;
- (void)setLogo:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)statusBarStyle;
- (id)userNameString;
- (unsigned long long)verticalShift;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
