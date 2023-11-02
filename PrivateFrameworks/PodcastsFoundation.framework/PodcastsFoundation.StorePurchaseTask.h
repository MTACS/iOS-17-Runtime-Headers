
@interface PodcastsFoundation.StorePurchaseTask : NSObject <AMSPurchaseDelegate> {
    void uiDelegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id /* block */)arg3;

@end
