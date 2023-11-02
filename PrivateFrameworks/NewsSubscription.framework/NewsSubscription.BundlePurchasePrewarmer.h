
@interface NewsSubscription.BundlePurchasePrewarmer : NSObject <FCBundleSubscriptionChangeObserver, FCNetworkReachabilityObserving> {
    void _purchase;
    void bundleSubscriptionManager;
    void configurationManager;
    void deduper;
    void networkReachability;
    void purchaseManager;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (id)init;
- (void)networkReachabilityDidChange:(id)arg1;

@end
