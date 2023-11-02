
@interface CKRegistrationViewController : UIViewController <AKTapToSignInViewControllerDelegate> {
    AKTapToSignInViewController * _akSignInVC;
    id /* block */  _completionBlock;
    OBPrivacyLinkController * _privacyLinkController;
}

@property (nonatomic, retain) AKTapToSignInViewController *akSignInVC;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLinkController;
@property (readonly) Class superclass;

+ (id)_inProgressRegisteringNonPhoneAccount;
+ (bool)_shouldShowAuthKitSignIn;
+ (bool)shouldShowRegistration;

- (void).cxx_destruct;
- (void)_handleRegistrarCompletion:(bool)arg1 errorAlertController:(id)arg2;
- (id)accountRegistrar;
- (id)akSignInVC;
- (bool)canBecomeFirstResponder;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)init;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)privacyLinkController;
- (void)setAkSignInVC:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setErrorPresentationViewController:(id)arg1;
- (void)setPrivacyLinkController:(id)arg1;
- (void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)updateInsetsForKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
