
@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, UITextFieldDelegate> {
    UIColor * _backgroundColor;
    UILabel * _bodyLabel;
    UIView * _containerView;
    NSString * _customBodyText;
    NSString * _customButtonTitle;
    bool  _hideTitle;
    UIButton * _iForgotButton;
    UITextField * _passwordField;
    AKRoundedButton * _signInButton;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) NSString *customBodyText;
@property (nonatomic, retain) NSString *customButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideTitle;
@property (nonatomic, retain) UIButton *iForgotButton;
@property (nonatomic, retain) UITextField *passwordField;
@property (nonatomic, retain) AKRoundedButton *signInButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_bodyText;
- (id)_buttonTitle;
- (void)_createViews;
- (bool)_isSignInAllowed;
- (bool)_isUsingPasscodeAuth;
- (void)_passwordRecoveryButtonWasTapped:(id)arg1;
- (void)_setupConstraints;
- (void)_setupViews;
- (bool)_shouldHidePasswordField;
- (void)_signInButtonTapped:(id)arg1;
- (void)_updateViewConstraints;
- (id)backgroundColor;
- (bool)becomeFirstResponder;
- (id)bodyLabel;
- (bool)canBecomeFirstResponder;
- (id)containerView;
- (void)context:(id)arg1 needsPasswordWithCompletion:(id /* block */)arg2;
- (id)customBodyText;
- (id)customButtonTitle;
- (void)displayAlertForContext:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (bool)hideTitle;
- (id)iForgotButton;
- (id)init;
- (id)passwordField;
- (bool)resignFirstResponder;
- (void)setBackgroundColor:(id)arg1;
- (void)setBodyLabel:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setCustomBodyText:(id)arg1;
- (void)setCustomButtonTitle:(id)arg1;
- (void)setHideTitle:(bool)arg1;
- (void)setIForgotButton:(id)arg1;
- (void)setPasswordField:(id)arg1;
- (void)setSignInButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)signInButton;
- (void)startAnimating;
- (void)stopAnimating;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleLabel;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
