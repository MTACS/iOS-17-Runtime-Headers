
@interface NewsUI2.SubscriberStatusConditionProvider : NSObject <FCBundleSubscriptionChangeObserver, FCNewsAppConfigurationObserving> {
    void appConfigurationManager;
    void bundleSubscriptionManager;
    void statusConditions;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;
- (id)init;

@end
