
@interface FCPaymentTransactionManager : NSObject <FCPaymentTransactionManager, FCPaymentTransactionObserverDelegate> {
    NSMutableDictionary * _paymentQueueByProductID;
    FCPaymentTransactionObserver * _paymentTransactionObserver;
    <FCPaymentTransactionManagerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCPaymentTransactionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *paymentQueueByProductID;
@property (nonatomic, retain) FCPaymentTransactionObserver *paymentTransactionObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canMakePayments;
- (id)createPaymentQueueWithProductID:(id)arg1 purchaseID:(id)arg2 bundleID:(id)arg3 webAccessOptIn:(bool)arg4 appAdamID:(id)arg5 storeExternalVersion:(id)arg6;
- (id)delegate;
- (id)init;
- (id)paymentQueueByProductID;
- (id)paymentTransactionObserver;
- (void)paymentTransactionObserver:(id)arg1 didFailPurchaseTransactionWithTransaction:(id)arg2;
- (void)paymentTransactionObserver:(id)arg1 didFinishPurchaseTransaction:(id)arg2;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaymentQueueByProductID:(id)arg1;
- (void)setPaymentTransactionObserver:(id)arg1;
- (void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 bundleID:(id)arg4 appAdamID:(id)arg5 storeExternalVersion:(id)arg6 price:(id)arg7 webAccessOptIn:(bool)arg8 payment:(id)arg9;

@end
