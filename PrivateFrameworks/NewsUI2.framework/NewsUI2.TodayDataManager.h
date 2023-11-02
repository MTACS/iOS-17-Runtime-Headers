
@interface NewsUI2.TodayDataManager : NSObject {
    void _lastRefreshContext;
    void accessQueue;
    void appConfigManager;
    void blockNextAutoRefresh;
    void cachePreFlushTask;
    void delegate;
    void feedManager;
    void feedPluginManager;
    void feedServiceConfigFetcher;
    void historyService;
    void nativeAdService;
    void sharedItemAdditions;
    void sharedItemManager;
    void shortcutService;
    void sportsOnboardingManager;
    void subscriptionList;
    void subscriptionService;
}

- (void).cxx_destruct;
- (id)init;

@end
