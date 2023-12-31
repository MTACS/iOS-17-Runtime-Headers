
@protocol FCPurchaseManagerDelegate

@required

- (void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(NSString *)arg1 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg2;
- (void)purchaseFailedWithProductID:(NSString *)arg1 transactionState:(long long)arg2 transactionError:(NSError *)arg3 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg4;
- (void)purchaseSuccessWithProductID:(NSString *)arg1 transaction:(FCCompletedPaymentTransaction *)arg2 chargeCurrencyCode:(NSString *)arg3 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg4;

@end
