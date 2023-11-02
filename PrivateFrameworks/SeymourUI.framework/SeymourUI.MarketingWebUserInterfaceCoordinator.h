
@interface SeymourUI.MarketingWebUserInterfaceCoordinator : NSObject <AMSUIWebDelegate> {
    void presentingViewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(id /* block */)arg3;
- (void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;

@end
