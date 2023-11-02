
@interface NewsUI2.AudioHistoryFeedDataManager : NSObject <FCReadingHistoryObserving> {
    void accessQueue;
    void delegate;
    void feedService;
    void feedServiceConfigFetcher;
    void headlineService;
    void readingHistory;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;

@end
