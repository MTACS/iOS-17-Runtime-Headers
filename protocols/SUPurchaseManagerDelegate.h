
@protocol SUPurchaseManagerDelegate <NSObject>

@optional

- (void)purchaseManager:(SUPurchaseManager *)arg1 didAddPurchases:(NSArray *)arg2;
- (void)purchaseManager:(SUPurchaseManager *)arg1 didFinishPurchaseRequest:(SSPurchaseRequest *)arg2 withError:(NSError *)arg3;
- (void)purchaseManager:(SUPurchaseManager *)arg1 failedToAddPurchases:(NSArray *)arg2;
- (SUPurchaseBatch *)purchaseManager:(SUPurchaseManager *)arg1 purchaseBatchForItems:(NSArray *)arg2;
- (SUPurchaseBatch *)purchaseManager:(SUPurchaseManager *)arg1 purchaseBatchForPurchases:(NSArray *)arg2;
- (void)purchaseManager:(SUPurchaseManager *)arg1 willAddPurchases:(NSArray *)arg2;
- (void)purchaseManagerDidEndUpdates:(SUPurchaseManager *)arg1;
- (void)purchaseManagerWillBeginUpdates:(SUPurchaseManager *)arg1;

@end
