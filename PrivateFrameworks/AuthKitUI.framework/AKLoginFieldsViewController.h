
@interface AKLoginFieldsViewController : UIViewController <AKLoginFieldsViewControllerProtocol, UITextFieldDelegate> {
    AKAppleIDAuthenticationContext * _context;
    <AKLoginFieldsDelegate> * _delegate;
    UITextField * _passwordField;
    UITextField * _usernameField;
}

@property (nonatomic) AKAppleIDAuthenticationContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKLoginFieldsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UITextField *passwordField;
@property (readonly) Class superclass;
@property (nonatomic) UITextField *usernameField;

- (void).cxx_destruct;
- (void)_hidePasswordIfNeeded;
- (void)_preparePasswordField;
- (void)_prepareUsernameField;
- (void)clearPassword;
- (id)context;
- (id)delegate;
- (id)initWithContext:(id)arg1;
- (id)passwordField;
- (id)passwordText;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasswordField:(id)arg1;
- (void)setUsernameField:(id)arg1;
- (void)showPasswordField;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)usernameField;
- (id)usernameText;
- (void)viewDidLoad;

@end
