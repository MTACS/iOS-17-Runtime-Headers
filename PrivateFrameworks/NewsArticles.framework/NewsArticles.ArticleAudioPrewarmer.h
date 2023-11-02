
@interface NewsArticles.ArticleAudioPrewarmer : NSObject <FCBundleSubscriptionChangeObserver> {
    void avAssetPrewarmer;
    void bundleSubscriptionManager;
    void isBundleSubscribed;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2;
- (id)init;

@end
