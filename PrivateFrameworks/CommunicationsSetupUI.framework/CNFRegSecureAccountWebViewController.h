
@interface CNFRegSecureAccountWebViewController : CNFRegAuthorizedAccountWebViewController {
    IMAccount * _account;
    bool  _gotNewCredential;
    unsigned long long  _signinFailureCount;
    bool  _triedGettingNewCredentials;
}

@property (nonatomic, retain) IMAccount *account;

- (void).cxx_destruct;
- (void)_handleTimeout;
- (void)_incrementSigninFailureCount;
- (void)_launchForgotPasswordUrl;
- (void)_resetSigninFailureCount;
- (void)_setupAccountHandlers;
- (void)_showBadPasswordAlert;
- (void)_showForgotPasswordAlert;
- (void)_showRegistrationFailureWithError:(id)arg1;
- (void)_showRequestPasswordAlert;
- (id)account;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
