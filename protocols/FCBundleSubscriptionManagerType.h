
@protocol FCBundleSubscriptionManagerType <FCBundleSubscriptionProviderType>

@required

- (void)addObserver:(id <FCBundleSubscriptionChangeObserver>)arg1;
- (FCBundleSubscriptionLookUpEntry *)bundleSubscriptionLookupEntry;
- (FCBundleSubscription *)cachedSubscription;
- (void)clearBundleSubscription;
- (<FCEntitlementsOverrideProviderType> *)entitlementsOverrideProvider;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)prewarmBundleTagIDsWithPurchaseID:(NSString *)arg1;
- (void)refreshBundleSubscriptionWithCachePolicy:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FCBundleSubscription *, void*
- (void)refreshBundleSubscriptionWithCachePolicy:(void *)arg1 hideBundleDetectionUI:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FCBundleSubscription *, void*
- (void)removeObserver:(id <FCBundleSubscriptionChangeObserver>)arg1;
- (void)renewalNoticeShownWithPurchaseID:(NSString *)arg1;
- (void)setEntitlementsOverrideProvider:(id <FCEntitlementsOverrideProviderType>)arg1;
- (void)silentExpireBundleSubscription;
- (FCBundleSubscription *)validatedCachedSubscription;

@end
