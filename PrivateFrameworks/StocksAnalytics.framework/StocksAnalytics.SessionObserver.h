
@interface StocksAnalytics.SessionObserver : NSObject <FCBundleSubscriptionChangeObserver> {
    void appConfigurationManager;
    void client;
    void cloudContext;
    void kind;
    void sessionManager;
    void tracker;
    void userContext;
    void watchlistManager;
    void window;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)pushOrientationData;

@end
