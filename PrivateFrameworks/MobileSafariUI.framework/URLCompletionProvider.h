
@interface URLCompletionProvider : CompletionProvider {
    <WBBookmarkProvider> * _bookmarkProvider;
    bool  _bookmarksWereModified;
    NSObject<OS_dispatch_queue> * _cfCompletionQueue;
    URLCompletionDatabase * _completionDatabase;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSString * _currentPrefix;
    bool  _historyWasModified;
    unsigned long long  _maxResults;
    bool  _needScheduleBackgroundTaskOnAppSuspend;
    <WBSParsecSearchSession> * _parsecSearchSession;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _prefixMutex;
    bool  _providesTopHits;
    WBSCompletionQuery * _query;
    NSArray * _searchParametersList;
    unsigned long long  _urlCompletionBackgroundTaskIdentifier;
}

@property (nonatomic, retain) <WBSParsecSearchSession> *parsecSearchSession;
@property (nonatomic) bool providesTopHits;
@property (nonatomic, retain) NSArray *searchParametersList;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_bookmarksDidChange:(id)arg1;
- (id)_doUpdateForPrefix:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 withSearchParameters:(id)arg3;
- (void)_endURLCompletionBackgroundTask;
- (void)_historyDidChange:(id)arg1;
- (unsigned long long)cfErrorForQuery:(id)arg1;
- (void)clearCachedCompletions;
- (id)completionsForQuery:(id)arg1 isCFSearch:(bool)arg2;
- (void)dealloc;
- (id)findCompletionsForKey:(id)arg1 isCFSearch:(bool)arg2;
- (id)getKeyForQueryString:(id)arg1 isCFSearch:(bool)arg2;
- (id)initWithBookmarkProvider:(id)arg1 cloudTabStore:(id)arg2 profileIdentifier:(id)arg3 maxResults:(unsigned long long)arg4 searchableCollectionsMask:(int)arg5;
- (unsigned long long)maximumCachedCompletionCount;
- (id)parsecSearchSession;
- (bool)providesTopHits;
- (id)searchParametersList;
- (void)setParsecSearchSession:(id)arg1;
- (void)setProvidesTopHits:(bool)arg1;
- (void)setQueryToComplete:(id)arg1;
- (void)setSearchParametersList:(id)arg1;

@end
