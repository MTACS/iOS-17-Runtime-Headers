
@protocol FCPaymentTransactionObserverDelegate <NSObject>

@required

- (void)paymentTransactionObserver:(FCPaymentTransactionObserver *)arg1 didFailPurchaseTransactionWithTransaction:(SKPaymentTransaction *)arg2;
- (void)paymentTransactionObserver:(FCPaymentTransactionObserver *)arg1 didFinishPurchaseTransaction:(SKPaymentTransaction *)arg2;

@end
