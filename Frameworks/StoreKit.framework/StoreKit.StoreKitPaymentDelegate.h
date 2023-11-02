
@interface StoreKit.StoreKitPaymentDelegate : SwiftNativeNSObject <SKPaymentDelegateProtocol> {
    void handler;
}

- (void)handleEngagementRequest:(id)arg1 replyBlock:(id /* block */)arg2;
- (id)init;
- (void)shouldContinueTransactionWithNewStorefront:(id)arg1 replyBlock:(id /* block */)arg2;

@end
