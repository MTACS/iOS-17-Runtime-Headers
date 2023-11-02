
@interface NewsUI2.AudioFeedDataManager : NSObject <FCReadingHistoryObserving> {
    void accessQueue;
    void delegate;
    void feedPluginManager;
    void feedService;
    void feedServiceConfigFetcher;
    void offlineManager;
    void subscriptionService;
    void tagService;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
- (void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2;
- (void)readingHistoryDidClear:(id)arg1;
- (void)readingHistoryLikelyClearedRemotely:(id)arg1;

@end
