
@interface NewsUI2.StubBundleSubscriptionManager : _TtCs12_SwiftObject <FCBundleSubscriptionManagerType> {
    void bundleSubscription;
    void cachedSubscription;
    void entitlementsOverrideProvider;
}

@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription;
@property (nonatomic, readonly) FCBundleSubscription *cachedSubscription;
@property (nonatomic, retain) <FCEntitlementsOverrideProviderType> *entitlementsOverrideProvider;
@property (nonatomic, readonly) FCBundleSubscription *validatedCachedSubscription;

- (void)addObserver:(id)arg1;
- (id)bundleSubscription;
- (id)bundleSubscriptionLookupEntry;
- (id)cachedSubscription;
- (void)clearBundleSubscription;
- (id)entitlementsOverrideProvider;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)prepareForUseWithCompletion:(id /* block */)arg1;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)arg1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 hideBundleDetectionUI:(bool)arg2 completion:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;
- (void)renewalNoticeShownWithPurchaseID:(id)arg1;
- (void)setEntitlementsOverrideProvider:(id)arg1;
- (void)silentExpireBundleSubscription;
- (id)validatedCachedSubscription;

@end
