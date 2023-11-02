
@interface MapsSync.MapsSyncBaseQuery : NSObject <MapsSync.MapsSyncFetchedResultsChangeDelegate, MapsSync.MapsSyncGenericQueryDelegate, MapsSync.MapsSyncGenericQueryMergeDelegate> {
    void _didChangeDebouncer;
    void _historyToken;
    void _isInitComplete;
    void _isInitCompleteLock;
    void _tokenLock;
    void delegate;
    void genericQuery;
    void mapsSyncFetchedResultsControllerDelegate;
    void mergeDelegate;
    void predicate;
}

@property (nonatomic) <_TtP8MapsSync25MapsSyncDataQueryDelegate_> *delegate;
@property (nonatomic, retain) <_TtP8MapsSync21MapsSyncQueryProtocol_> *genericQuery;
@property (nonatomic, retain) _TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate *mapsSyncFetchedResultsControllerDelegate;
@property (nonatomic) <_TtP8MapsSync30MapsSyncDataQueryMergeDelegate_> *mergeDelegate;
@property (nonatomic, retain) NSPredicate *predicate;

+ (id)additionalNotificationTypes;
+ (id)signpostLog;

- (void).cxx_destruct;
- (void)completeInit;
- (id)delegate;
- (void)deleteAllObjectsWithCompletion:(id /* block */)arg1;
- (void)fetchBaseContents:(id /* block */)arg1;
- (void)fetchBaseContentsWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCountWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchQueryBaseContents:(id /* block */)arg1;
- (void)fetchQueryBaseContentsWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchedResultsDidChangeObjectWithControllerDelegate:(id)arg1 object:(id)arg2 indexPath:(id)arg3 changeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)fetchedResultsDidChangeWithControllerDelegate:(id)arg1;
- (void)fetchedResultsWillChangeWithControllerDelegate:(id)arg1;
- (id)findDuplicates:(id)arg1;
- (id)genericQuery;
- (id)init;
- (id)initWithQueryDelegate:(id)arg1 predicate:(id)arg2;
- (bool)isInitComplete;
- (bool)isReady;
- (id)mapsSyncFetchedResultsControllerDelegate;
- (id)mergeDelegate;
- (id)mergeDuplicateObjectsWithDuplicates:(id)arg1;
- (void)preFetchHook:(id /* block */)arg1;
- (id)predicate;
- (void)queryContentsDidChangeObjectWithNotification:(id)arg1 object:(id)arg2 indexPath:(id)arg3 changeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)queryContentsDidChangeWithNotification:(id)arg1;
- (void)queryContentsDidLoadWithNotification:(id)arg1;
- (void)queryContentsWillChangeWithNotification:(id)arg1;
- (void)queryContextDidChangeWithNotification:(id)arg1;
- (void)queryIsReady;
- (void)queryStoreDidChangeWithNotification:(id)arg1;
- (void)reloadContentsWithCompletion:(id /* block */)arg1 queue:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGenericQuery:(id)arg1;
- (void)setMapsSyncFetchedResultsControllerDelegate:(id)arg1;
- (void)setMergeDelegate:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)watchItemsMatchingPredicate:(id)arg1;

@end
