
@interface SKPaymentDelegate : NSObject <NSSecureCoding, SKPaymentDelegateProtocol> {
    SKPaymentQueue * _paymentQueue;
    NSString * _transactionUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleEngagementRequest:(id)arg1 replyBlock:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 transactionUUID:(id)arg2;
- (void)shouldContinueTransactionWithNewStorefront:(id)arg1 replyBlock:(id /* block */)arg2;

@end
