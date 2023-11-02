
@interface NewsUI2.SavedService : NSObject <FCReadingListObserving> {
    void articleController;
    void headlineModelFactory;
    void headlineService;
    void headlineStreamingResults;
    void observers;
    void readingList;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;

@end
