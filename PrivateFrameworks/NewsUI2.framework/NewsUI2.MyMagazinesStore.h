
@interface NewsUI2.MyMagazinesStore : NSObject <FCIssueReadingHistoryObserving, FCOfflineIssueListObserving, FCSubscriptionObserving> {
    void $__lazy_storage_$_lazyInitializingPromise;
    void accessQueue;
    void aggregateStoreProvider;
    void badgeIssueIDs;
    void configManager;
    void currentIssues;
    void currentIssuesChecker;
    void downloadedIssues;
    void firstFullRefresh;
    void issueReadingHistory;
    void issueService;
    void lazyPersistentStore;
    void offlineIssueList;
    void offlineIssueManager;
    void paidBundleConfigManager;
    void personalizationService;
    void recentlyReadIssues;
    void state;
    void subscriptionController;
}

- (void).cxx_destruct;
- (id)init;
- (void)issueReadingHistoryDidChange:(id)arg1 forIssueIDs:(id)arg2;
- (void)offlineIssueList:(id)arg1 didAddIssues:(id)arg2 removeIssues:(id)arg3;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;

@end
