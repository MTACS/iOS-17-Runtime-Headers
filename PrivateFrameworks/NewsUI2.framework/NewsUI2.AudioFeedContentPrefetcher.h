
@interface NewsUI2.AudioFeedContentPrefetcher : NSObject <FCBundleSubscriptionChangeObserver> {
    void backgroundAppRefreshEnabled;
    void bundleSubscriptionManager;
    void feedConfigManager;
    void formatService;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
