
@interface NewsSubscription.OfferManager : NSObject <FCBundleSubscriptionChangeObserver, FCNetworkReachabilityObserving> {
    void bundleSubscriptionManager;
    void cachedBestOffers;
    void cachedNewsPlusOffers;
    void cachedServicesBundleOffers;
    void clientIdentifier;
    void clientVersion;
    void configurationManager;
    void deduper;
    void deduperToken;
    void featureAvailability;
    void lastSeenBestOffers;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastSessionEndTime;
    void observers;
    void offersResetTimeInterval;
    void processQueue;
    void serviceType;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;
- (void)networkReachabilityDidChange:(id)arg1;

@end
