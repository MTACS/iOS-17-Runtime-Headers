
@interface DKFindMySignOutController : OBWelcomeController <AKAppleIDAuthenticationDelegate, AKInlineSignInViewControllerDelegate, UITextFieldDelegate> {
    ACAccount * _account;
    AKAppleIDAuthenticationInAppContext * _authContext;
    id /* block */  _completion;
    UIView * _containerOutlineView;
    UIButton * _forgotButton;
    bool  _isAuthInProgress;
    UITextField * _passwordField;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) AKAppleIDAuthenticationInAppContext *authContext;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) UIView *containerOutlineView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *forgotButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAuthInProgress;
@property (nonatomic, retain) UITextField *passwordField;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_authenticateWithPassword:(id)arg1;
- (void)_cancelTapped:(id)arg1;
- (void)_disableFindMy:(id)arg1 withPassword:(id)arg2;
- (void)_handleFMIPAuthenticationResponse:(id)arg1 withError:(id)arg2 forContext:(id)arg3 completion:(id /* block */)arg4;
- (id)_messageForError:(id)arg1;
- (void)_passwordRecoveryButtonWasTapped:(id)arg1;
- (id)_titleForError:(id)arg1;
- (void)_turnOffTapped:(id)arg1;
- (id)account;
- (id)authContext;
- (id /* block */)completion;
- (id)containerOutlineView;
- (id)forgotButton;
- (id)initWithAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)isAuthInProgress;
- (id)passwordField;
- (void)setAccount:(id)arg1;
- (void)setAuthContext:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setContainerOutlineView:(id)arg1;
- (void)setForgotButton:(id)arg1;
- (void)setIsAuthInProgress:(bool)arg1;
- (void)setPasswordField:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
