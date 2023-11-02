
@interface FCOfflineIssueList : NSObject {
    FCKeyValueStore * _localStore;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSArray *issueIDs;

- (void).cxx_destruct;
- (void)addIssueID:(id)arg1 source:(long long)arg2;
- (void)addObserver:(id)arg1;
- (bool)containsIssueID:(id)arg1;
- (id)dateAddedForIssueID:(id)arg1;
- (id)dateRemovedForIssueID:(id)arg1;
- (bool)everContainedIssueID:(id)arg1;
- (id)init;
- (id)initWithStoreDirectoryFileURL:(id)arg1;
- (id)initWithStoreDirectoryFileURL:(id)arg1 appActivityMonitor:(id)arg2 backgroundTaskable:(id)arg3;
- (id)issueIDs;
- (void)removeAllIssues;
- (void)removeIssueIDs:(id)arg1;
- (void)removeObserver:(id)arg1;
- (long long)sourceForIssueID:(id)arg1;

@end
