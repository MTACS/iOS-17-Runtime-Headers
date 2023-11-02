
@interface NewsSubscription.PurchaseManager : NSObject <AMSPurchaseResponseProtocol, FCPurchaseManagerDelegate> {
    void bundleSubscriptionManager;
    void internalPurchaseManager;
    void metricsBuilder;
    void purchaseContextEntriesManager;
    void purchaseController;
    void purchaseObservers;
    void sceneProvider;
    void transactionObservers;
}

- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg1 ongoingPurchaseEntry:(id)arg2;
- (void)purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4;
- (void)purchaseSuccessWithProductID:(id)arg1 transaction:(id)arg2 chargeCurrencyCode:(id)arg3 ongoingPurchaseEntry:(id)arg4;

@end
