
@interface FACreateChildController : NSObject <FANavigationControllerDelegate> {
    ACAccount * _appleAccount;
    <FACreateChildControllerDelegate> * _delegate;
    FANavigationController * _navController;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) ACAccount *appleAccount;
@property (nonatomic) <FACreateChildControllerDelegate> *delegate;
@property (nonatomic, retain) FANavigationController *navController;
@property (nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)_createChildAuthContext;
- (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)arg1;
- (id)_repairAuthContextWithAuthResults:(id)arg1;
- (id)_repairFAContextWithAuthResults:(id)arg1;
- (id)_repairParametersFromAuthResults:(id)arg1;
- (void)_setupPresentedViewController;
- (id)appleAccount;
- (void)createChildAccountWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)initWithAppleAccount:(id)arg1;
- (id)navController;
- (void)navigationController:(id)arg1 didPresentInitialViewController:(id)arg2;
- (void)navigationController:(id)arg1 presentViewController:(id)arg2;
- (id)presentingViewController;
- (void)repairChildAccountWithAuthenticationResults:(id)arg1 completion:(id /* block */)arg2;
- (void)setAppleAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavController:(id)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
