
@protocol FCPurchaseMetadataFetcher

@required

- (NFPromise *)fetchPurchaseMetadataForPurchaseID:(NSString *)arg1 restorePurchase:(bool)arg2;

@end
