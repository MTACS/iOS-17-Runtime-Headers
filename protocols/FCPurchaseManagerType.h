
@protocol FCPurchaseManagerType

@required

- (bool)anyOngoingPurchases;
- (<FCPurchaseManagerDelegate> *)delegate;
- (NFPromise *)fetchPurchaseMetadataForPurchaseID:(NSString *)arg1 restorePurchase:(bool)arg2;
- (bool)isPurchaseOngoingForTagID:(NSString *)arg1;
- (<FCPurchaseFlowOverrideProviderType> *)purchaseFlowOverrideProvider;
- (void)setDelegate:(id <FCPurchaseManagerDelegate>)arg1;
- (void)setPurchaseFlowOverrideProvider:(id <FCPurchaseFlowOverrideProviderType>)arg1;
- (void)simulateFailurePurchaseWithProductID:(NSString *)arg1 transactionState:(long long)arg2 error:(NSError *)arg3;
- (void)simulateSuccessfulPurchaseWithProductID:(NSString *)arg1 tagID:(NSString *)arg2 purchaseID:(NSString *)arg3;
- (void)startBundlePurchaseWithPurchase:(FCPurchase *)arg1 error:(id*)arg2;
- (void)startPurchaseWithTagID:(NSString *)arg1 purchase:(FCPurchase *)arg2 webAccessOptIn:(bool)arg3 error:(id*)arg4;

@end
