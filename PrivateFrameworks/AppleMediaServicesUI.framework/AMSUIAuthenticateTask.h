
@interface AMSUIAuthenticateTask : AMSAuthenticateTask <AMSAuthenticateTaskDelegate> {
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createAuthKitUpdateTaskForAccount:(id)arg1;
- (id)_presentEngagementRequest:(id)arg1;
- (void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3;
- (id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3 bag:(id)arg4;
- (id)initWithAuthenticationResults:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3;
- (id)initWithAuthenticationResults:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3 bag:(id)arg4;
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2 bag:(id)arg3;
- (id)presentingViewController;

@end
