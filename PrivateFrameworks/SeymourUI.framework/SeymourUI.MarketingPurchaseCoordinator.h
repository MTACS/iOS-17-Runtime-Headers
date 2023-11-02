
@interface SeymourUI.MarketingPurchaseCoordinator : NSObject <AMSPurchaseDelegate> {
    void bag;
    void eventHub;
    void presentingViewController;
    void purchaseHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id /* block */)arg3;

@end
