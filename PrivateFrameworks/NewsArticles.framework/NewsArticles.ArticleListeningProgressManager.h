
@interface NewsArticles.ArticleListeningProgressManager : NSObject <FCReadingHistoryObserving> {
    void cachedArticleTextRanges;
    void commandCenter;
    void listeningProgressObservations;
    void paidBundleConfigManager;
    void readingHistory;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;

@end
