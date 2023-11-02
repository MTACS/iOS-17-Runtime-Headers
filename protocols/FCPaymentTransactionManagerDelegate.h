
@protocol FCPaymentTransactionManagerDelegate

@required

- (void)transactionFailedWithProductID:(NSString *)arg1 transactionState:(long long)arg2 transactionError:(NSError *)arg3;
- (void)transactionPurchased:(FCCompletedPaymentTransaction *)arg1;

@end
