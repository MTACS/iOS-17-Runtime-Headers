
@protocol FCPaymentTransactionManager

@required

- (bool)canMakePayments;
- (<FCPaymentTransactionManagerDelegate> *)delegate;
- (void)registerOngoingPurchaseTransactionsWithEntry:(FCOngoingPurchaseEntry *)arg1;
- (void)setDelegate:(id <FCPaymentTransactionManagerDelegate>)arg1;
- (void)startPurchaseWithTagID:(NSString *)arg1 productID:(NSString *)arg2 purchaseID:(NSString *)arg3 bundleID:(NSString *)arg4 appAdamID:(NSNumber *)arg5 storeExternalVersion:(NSNumber *)arg6 price:(NSNumber *)arg7 webAccessOptIn:(bool)arg8 payment:(SKMutablePayment *)arg9;

@end
