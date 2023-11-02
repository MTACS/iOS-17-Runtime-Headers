
@interface FPUIAuthenticationViewController : UIViewController {
    <FPUIAuthenticationDelegate> * _authenticationDelegate;
    NSURL * _initialConnectionURL;
    FPUIAuthenticationLandingViewController * _landingViewController;
}

@property (nonatomic) <FPUIAuthenticationDelegate> *authenticationDelegate;
@property (nonatomic, copy) NSURL *initialConnectionURL;
@property FPUIAuthenticationLandingViewController *landingViewController;

- (void).cxx_destruct;
- (id)authenticationDelegate;
- (id)initWithServerURL:(id)arg1;
- (id)initialConnectionURL;
- (id)landingViewController;
- (void)setAuthenticationDelegate:(id)arg1;
- (void)setInitialConnectionURL:(id)arg1;
- (void)setLandingViewController:(id)arg1;
- (void)viewDidLoad;

@end
