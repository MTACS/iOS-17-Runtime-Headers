
@interface AppStoreKitInternal.ArcadeSubscriptionManager : NSObject <SKPaymentQueueClientDelegate, SKPaymentTransactionObserver> {
    void activeStoreAccountProvider;
    void arcadeSubscriptionFamilyId;
    void dialogHandler;
    void logger;
    void observers;
    void paymentCallbacks;
    void paymentQueue;
    void stateLock;
    void subscriptionEntitlements;
    void subscriptionState;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)entitlementsDidChange;
- (void)handleEngagementRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)init;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;

@end
