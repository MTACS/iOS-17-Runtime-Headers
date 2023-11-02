
@interface AMSUIAuthenticateCloudTask : AMSTask {
    AMSAuthenticateRequest * _authRequest;
    CDPUIController * _cdpUIController;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) AMSAuthenticateRequest *authRequest;
@property (nonatomic, retain) CDPUIController *cdpUIController;
@property (nonatomic, retain) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)_serviceContextWithResults:(id)arg1 parentViewController:(id)arg2;
- (id)authRequest;
- (id)cdpUIController;
- (id)initWithAuthRequest:(id)arg1 presentingViewController:(id)arg2;
- (id)performAuthenticate;
- (id)presentingViewController;
- (void)setAuthRequest:(id)arg1;
- (void)setCdpUIController:(id)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
