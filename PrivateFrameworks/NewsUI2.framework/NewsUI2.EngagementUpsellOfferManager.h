
@interface NewsUI2.EngagementUpsellOfferManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void bundlePurchasePrewarmer;
    void bundleSubscriptionManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  offerEntry;
    void offerManager;
    void store;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
