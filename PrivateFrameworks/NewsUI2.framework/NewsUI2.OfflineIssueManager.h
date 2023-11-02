
@interface NewsUI2.OfflineIssueManager : NSObject {
    void backgroundAppRefreshChangeObserver;
    void backgroundAppRefreshEnabled;
    void issueIDsAvailableOffline;
    void issueOfflineManager;
    void networkReachability;
    void offlineContentManager;
    void offlineIssueList;
    void storageLevelProvider;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
