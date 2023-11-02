
@interface NewsUI2.ReadingListOfflineContentContributor : NSObject <FCReadingListObserving> {
    void configurationManager;
    void offlineContentRequests;
    void readingHistory;
    void readingList;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;

@end
