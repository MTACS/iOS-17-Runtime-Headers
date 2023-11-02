
@interface NewsSubscription.PaywallFormatContentService : NSObject <FCBundleSubscriptionChangeObserver, FCNewsAppConfigurationObserving> {
    void configurationManager;
    void formatContentCache;
    void formatService;
    void paywallConfig;
    void resourceService;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (void)configurationManagerPaywallConfigDidChange:(id)arg1;
- (id)init;

@end
