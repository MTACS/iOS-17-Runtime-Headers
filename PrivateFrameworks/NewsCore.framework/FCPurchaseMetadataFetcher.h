
@interface FCPurchaseMetadataFetcher : NSObject <FCPurchaseMetadataFetcher> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _bundleID;
    NSNumber * _externalVersionID;
    FCPurchaseLookupResult * _lookupResult;
}

- (void).cxx_destruct;
- (id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurchase:(bool)arg2;
- (id)init;

@end
