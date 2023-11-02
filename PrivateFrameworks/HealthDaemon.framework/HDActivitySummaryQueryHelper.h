
@interface HDActivitySummaryQueryHelper : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver> {
    HDActivitySummaryBuilder * _activitySummaryBuilder;
    id /* block */  _batchedInitialResultsHandler;
    id /* block */  _batchedUpdateHandler;
    NSObject<OS_dispatch_queue> * _clientQueue;
    long long  _enumeratedSummaryCount;
    _HKFilter * _filter;
    bool  _initialResultsSent;
    long long  _lastProcessedAnchor;
    bool  _needsUpdateAfterUnlock;
    HDSQLitePredicate * _predicate;
    NSMutableDictionary * _previousActivityCachesByCacheIndex;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldBatchSummaries;
}

@property (nonatomic, readonly, copy) id /* block */ batchedInitialResultsHandler;
@property (nonatomic, readonly, copy) id /* block */ batchedUpdateHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long enumeratedSummaryCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) bool orderByDateAscending;
@property bool shouldIncludePrivateProperties;
@property bool shouldIncludeStatistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)batchedInitialResultsHandler;
- (id /* block */)batchedUpdateHandler;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (long long)enumeratedSummaryCount;
- (id)initWithProfile:(id)arg1 filter:(id)arg2 batchedInitialResultsHandler:(id /* block */)arg3 batchedUpdateHandler:(id /* block */)arg4;
- (unsigned long long)limit;
- (bool)orderByDateAscending;
- (void)pause;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setLimit:(unsigned long long)arg1;
- (void)setOrderByDateAscending:(bool)arg1;
- (void)setShouldIncludePrivateProperties:(bool)arg1;
- (void)setShouldIncludeStatistics:(bool)arg1;
- (bool)shouldIncludePrivateProperties;
- (bool)shouldIncludeStatistics;
- (void)start;
- (void)stop;

@end
