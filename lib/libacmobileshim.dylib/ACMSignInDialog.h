
@interface ACMSignInDialog : ACMDialog <ACMSignInDialogProtocol, UIAlertViewDelegate, UITextFieldDelegate> {
    UITextField * _accountNameField;
    <ACMSignInDialogDelegate> * _delegate;
    UITextField * _passwordField;
    NSString * _requestedUserName;
    long long  _signInDialogState;
    unsigned long long  _stateChangeCounter;
    bool  _userHasBegunEditingText;
}

@property (nonatomic, retain) UITextField *accountNameField;
@property (readonly, copy) NSString *debugDescription;
@property <ACMSignInDialogDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextField *passwordField;
@property NSString *passwordString;
@property (nonatomic, retain) NSString *requestedUserName;
@property (nonatomic) long long signInDialogState;
@property (nonatomic) unsigned long long stateChangeCounter;
@property (readonly) Class superclass;
@property (nonatomic) bool userHasBegunEditingText;
@property (readonly) NSString *userNameString;

- (id)accountNameField;
- (bool)canSignIn;
- (void)cancel;
- (void)controlsDidChangeState:(bool)arg1;
- (void)controlsWillChangeState:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disableControls:(bool)arg1;
- (void)onIForgot:(id)arg1;
- (void)onSignIn:(id)arg1;
- (void)onSignInCancel:(id)arg1;
- (id)passwordField;
- (id)passwordString;
- (id)requestedUserName;
- (void)setAccountNameField:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasswordField:(id)arg1;
- (void)setPasswordString:(id)arg1;
- (void)setRequestedUserName:(id)arg1;
- (void)setSignInDialogState:(long long)arg1;
- (void)setStateChangeCounter:(unsigned long long)arg1;
- (void)setUserHasBegunEditingText:(bool)arg1;
- (bool)shouldAuthenticateOnUserInput;
- (long long)signInDialogState;
- (unsigned long long)stateChangeCounter;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)userHasBegunEditingText;
- (id)userNameString;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
