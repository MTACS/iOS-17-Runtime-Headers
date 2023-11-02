
@interface NewsUI2.BundleSubscriberAdSegmentProvider : NSObject <FCBundleSubscriptionChangeObserver> {
    void needsUpdate;
    void subscriptionManager;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
