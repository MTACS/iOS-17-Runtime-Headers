
@interface ASPasswordAuthenticationPaneViewController : ASCredentialRequestPaneViewController <UITextFieldDelegate> {
    <ASPasswordAuthenticationPaneViewControllerDelegate> * _authenticationDelegate;
    double  _keyboardHeight;
    NSLayoutConstraint * _paneHeaderStackViewBottomKeyboardConstraint;
    unsigned long long  _persona;
    ASCAuthorizationPresentationContext * _presentationContext;
    UITextField * _secureTextField;
    ASCredentialRequestButtonContinue * _signInButton;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UITextField * _usernameField;
}

@property (nonatomic) <ASPasswordAuthenticationPaneViewControllerDelegate> *authenticationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeManualPasswordCredentialEntry;
- (double)_containerViewHorizontalMargin;
- (void)_createViews;
- (double)_intrinsicContentHeight;
- (void)_keyboardHeightDidChange;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_manualPasswordEntryTitleLabelText;
- (double)_secureTextFieldInsetMargin;
- (id)_secureTextFieldPlaceholderText;
- (id)_securityKeyTitleLabelText;
- (void)_setConstraints;
- (void)_setUpAndAddIconImage;
- (void)_setUpSubtitleLabel;
- (void)_setUpUsernameLabel;
- (double)_signInButtonInsetMargin;
- (void)_signInButtonTapped;
- (id)_subtitleLabelFont;
- (void)_textFieldChanged:(id)arg1;
- (id)_titleLabelFont;
- (id)_titleLabelText;
- (id)_titleLabelTextColor;
- (double)_topViewMargin;
- (id)authenticationDelegate;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)initWithPersona:(unsigned long long)arg1 presentationContext:(id)arg2;
- (bool)resignFirstResponder;
- (void)setAuthenticationDelegate:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;

@end
