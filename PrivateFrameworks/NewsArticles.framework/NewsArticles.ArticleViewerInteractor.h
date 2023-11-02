
@interface NewsArticles.ArticleViewerInteractor : NSObject <FCSubscriptionObserving> {
    void blueprintProvider;
    void commandCenter;
    void coordinator;
    void dataManager;
    void delegate;
    void historyService;
    void insertAdvertisementBlueprintModifier;
    void pageBlueprintFactory;
    void pageBlueprintManager;
    void pageTracker;
    void paidAccessChecker;
}

- (void).cxx_destruct;
- (id)init;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;

@end
