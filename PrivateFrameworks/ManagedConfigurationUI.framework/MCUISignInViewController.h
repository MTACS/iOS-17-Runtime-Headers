
@interface MCUISignInViewController : MCSectionBasedTableViewController <AKInlineSignInViewControllerDelegate> {
    MCSignInPageAuthenticationSectionController * _authSectionController;
    bool  _authenticationFinished;
    <MCUISignInViewControllerDelegate> * _delegate;
    bool  _signInButtonTapped;
    MCSignInPageTitleSectionController * _titleSectionController;
}

@property (nonatomic, retain) MCSignInPageAuthenticationSectionController *authSectionController;
@property (nonatomic) bool authenticationFinished;
@property (nonatomic, retain) AKAppleIDAuthenticationInAppContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MCUISignInViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *orgName;
@property (nonatomic) bool signInButtonTapped;
@property (readonly) Class superclass;
@property (nonatomic, retain) MCSignInPageTitleSectionController *titleSectionController;

- (void).cxx_destruct;
- (id)authSectionController;
- (bool)authenticationFinished;
- (id)context;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)orgName;
- (void)setAuthSectionController:(id)arg1;
- (void)setAuthenticationFinished:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOrgName:(id)arg1;
- (void)setSignInButtonTapped:(bool)arg1;
- (void)setTitleSectionController:(id)arg1;
- (bool)signInButtonTapped;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)signInViewController:(id)arg1 willPerformAuthenticationWithContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)titleSectionController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
