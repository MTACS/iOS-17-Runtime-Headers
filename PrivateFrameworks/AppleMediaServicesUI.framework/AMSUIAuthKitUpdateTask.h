
@interface AMSUIAuthKitUpdateTask : AMSAuthKitUpdateTask {
    UIViewController * _presentingViewController;
}

@property (nonatomic, readonly) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (unsigned long long)_authenticationType;
- (void)_configureAuthKitContext:(id)arg1;
- (id)_createAuthKitContext;
- (id)_createAuthKitController;
- (id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3;
- (id)presentingViewController;

@end
