
@interface NewsUI2.HistoryFeedDataManager : NSObject <FCReadingHistoryObserving, FCReadingListObserving> {
    void accessQueue;
    void clearReadingHistoryManager;
    void dataProvider;
    void delegate;
    void feedService;
    void feedServiceConfigFetcher;
    void headlineService;
    void newsletterManager;
    void personalizationData;
    void readingHistory;
    void readingList;
    void userActivityManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2;
- (void)readingHistory:(id)arg1 didChangeOffensiveStateForArticlesWithIDs:(id)arg2;
- (void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2;
- (void)readingHistoryDidClear:(id)arg1;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;

@end
