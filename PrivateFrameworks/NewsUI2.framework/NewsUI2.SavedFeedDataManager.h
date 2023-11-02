
@interface NewsUI2.SavedFeedDataManager : NSObject <FCReadingListObserving> {
    void accessQueue;
    void dataProvider;
    void delegate;
    void feedService;
    void feedServiceConfigFetcher;
    void headlineService;
    void historyService;
    void readingList;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;

@end
