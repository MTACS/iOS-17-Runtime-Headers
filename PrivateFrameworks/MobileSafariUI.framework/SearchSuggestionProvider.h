
@interface SearchSuggestionProvider : CompletionProvider <NSURLSessionDataDelegate> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    WBSCompletionQuery * _currentCompletionQuery;
    NSString * _currentSearchString;
    bool  _forPrivateBrowsing;
    <LoadProgressObserver> * _loadProgressObserver;
    NSMutableSet * _pendingTasks;
    WBSSearchSuggestionsFetcher * _searchSuggestionsFetcher;
    NSURLSession * _session;
    UniversalSearchSession * _universalSearchSession;
    NSString * _userAgentString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <LoadProgressObserver> *loadProgressObserver;
@property (readonly) Class superclass;
@property (nonatomic) UniversalSearchSession *universalSearchSession;

- (void).cxx_destruct;
- (void)_didFinishSearchTask:(id)arg1;
- (void)_willStartSearchTask:(id)arg1;
- (id)completionsForQuery:(id)arg1;
- (void)dealloc;
- (id)initForPrivateBrowsing:(bool)arg1;
- (id)loadProgressObserver;
- (unsigned long long)maximumCachedCompletionCount;
- (void)setLoadProgressObserver:(id)arg1;
- (void)setQueryToComplete:(id)arg1;
- (void)setUniversalSearchSession:(id)arg1;
- (void)stop;
- (id)suggestionStringsForData:(id)arg1;
- (id)universalSearchSession;

@end
