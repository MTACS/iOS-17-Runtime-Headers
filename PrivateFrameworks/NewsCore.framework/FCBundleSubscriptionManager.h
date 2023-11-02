
@interface FCBundleSubscriptionManager : NSObject <FCAppActivityObserving, FCBundleChannelProviderDelegate, FCBundleSubscriptionManagerType> {
    NFMutexLock * _accessLock;
    <FCBundleChannelProviderType> * _bundleChannelProvider;
    <FCBundleEntitlementsProviderType> * _bundleEntitlementsProvider;
    FCBundleSubscriptionLookUpEntryManager * _bundleSubscriptionLookupEntryManager;
    FCBundleSubscription * _cachedSubscription;
    <FCCoreConfigurationManager> * _configurationManager;
    <FCContentContext> * _contentContext;
    bool  _hasRunEntitlementOnce;
    FCKeyValueStore * _localStore;
    NSHashTable * _observers;
    FCAsyncSerialQueue * _refreshQueue;
}

@property (nonatomic, readonly, copy) FCBundleSubscription *bundleSubscription;
@property (nonatomic, retain) FCBundleSubscription *cachedSubscription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCEntitlementsOverrideProviderType> *entitlementsOverrideProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FCBundleSubscription *validatedCachedSubscription;

- (void).cxx_destruct;
- (void)activityObservingApplicationDidEnterBackground;
- (void)addObserver:(id)arg1;
- (void)bundleChannelProvider:(id)arg1 bundleChannelIDsDidChangeWithChannelIDs:(id)arg2 version:(id)arg3;
- (id)bundleSubscription;
- (id)bundleSubscriptionLookupEntry;
- (id)cachedSubscription;
- (void)clearBundleSubscription;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (id)init;
- (id)initWithPrivateDataDirectory:(id)arg1 configurationManager:(id)arg2 contentContext:(id)arg3 appActivityMonitor:(id)arg4 entitlementsProvider:(id)arg5;
- (void)prepareForUseWithCompletion:(id /* block */)arg1;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)arg1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 hideBundleDetectionUI:(bool)arg2 completion:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;
- (void)renewalNoticeShownWithPurchaseID:(id)arg1;
- (void)setCachedSubscription:(id)arg1;
- (void)setEntitlementsOverrideProvider:(id)arg1;
- (void)silentExpireBundleSubscription;
- (id)validatedCachedSubscription;

@end
