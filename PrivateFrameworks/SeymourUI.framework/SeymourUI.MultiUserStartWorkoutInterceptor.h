
@interface SeymourUI.MultiUserStartWorkoutInterceptor : NSObject <AMSUIDynamicViewControllerDelegate, AMSUIWebDelegate> {
    void dependencies;
    void dynamicOfferCoordinator;
    void eventHub;
    void multiUserClient;
    void serviceSubscriptionCache;
    void sessionClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
    void webUserInterfaceCoordinator;
}

- (void).cxx_destruct;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;
- (id)init;
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(id /* block */)arg3;
- (void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;

@end
