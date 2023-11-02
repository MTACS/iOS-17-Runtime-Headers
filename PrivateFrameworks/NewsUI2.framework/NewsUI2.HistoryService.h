
@interface NewsUI2.HistoryService : NSObject <FCReadingHistoryObserving> {
    void clearReadingHistoryManager;
    void headlineModelFactory;
    void headlineService;
    void headlineStreamingResults;
    void issueReadingHistory;
    void observers;
    void readingHistory;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
- (void)readingHistory:(id)arg1 didChangeOffensiveStateForArticlesWithIDs:(id)arg2;
- (void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2;

@end
