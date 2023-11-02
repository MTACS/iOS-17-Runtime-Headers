
@interface AMSUIDelegateTokenTask : AMSDelegateTokenTask {
    UIViewController * _presentingViewController;
}

@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, retain) AMSProcessInfo *processInfo;

- (void).cxx_destruct;
- (id)authenticateTaskWithRequest:(id)arg1;
- (id)initWithDelegateAuthenticateRequest:(id)arg1 account:(id)arg2 presentingViewController:(id)arg3;
- (id)initWithDelegateAuthenticateRequest:(id)arg1 account:(id)arg2 processInfo:(id)arg3 presentingViewController:(id)arg4;
- (id)perform;
- (id)presentingViewController;

@end
