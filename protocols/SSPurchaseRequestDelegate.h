
@protocol SSPurchaseRequestDelegate <SSRequestDelegate>

@optional

- (void)purchaseRequest:(SSPurchaseRequest *)arg1 purchaseDidFail:(SSPurchase *)arg2 withError:(NSError *)arg3;
- (void)purchaseRequest:(SSPurchaseRequest *)arg1 purchaseDidSucceed:(SSPurchase *)arg2;

@end
