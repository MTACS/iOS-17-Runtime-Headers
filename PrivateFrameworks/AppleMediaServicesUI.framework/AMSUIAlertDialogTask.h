
@interface AMSUIAlertDialogTask : AMSTask {
    UIViewController * _presentingViewController;
    AMSDialogRequest * _request;
}

@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) AMSDialogRequest *request;

+ (long long)_keyboardTypeFromType:(long long)arg1;

- (void).cxx_destruct;
- (id)_createIOSViewControllerFromRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)cancel;
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2;
- (id)present;
- (id)presentingViewController;
- (id)request;

@end
