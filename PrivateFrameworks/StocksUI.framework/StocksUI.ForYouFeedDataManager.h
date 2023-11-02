
@interface StocksUI.ForYouFeedDataManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void accessQueue;
    void appConfigurationManager;
    void bundleSubscriptionManager;
    void cancellables;
    void delegate;
    void feedService;
    void feedServiceConfigFetcher;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastRefreshDate;
    void priceDataManager;
    void watchlistManager;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (void)dealloc;
- (id)init;

@end
