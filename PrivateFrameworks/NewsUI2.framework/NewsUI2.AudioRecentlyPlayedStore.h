
@interface NewsUI2.AudioRecentlyPlayedStore : NSObject <FCReadingHistoryObserving> {
    void headlineCache;
    void headlineService;
    void paidBundleConfigManager;
    void readingHistory;
    void recentlyPlayedUpdatedSignal;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
- (void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2;
- (void)readingHistoryDidClear:(id)arg1;

@end
