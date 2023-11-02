
@interface CNAutocompleteQueryCacheHelper : NSObject {
    CNCache * _cache;
    CNAutocompleteQueryCacheMissAuditor * _cacheMissAuditor;
    <CNSchedulerProvider> * _schedulerProvider;
    NSString * _searchString;
    CNObservable * _serverSearchObservable;
}

@property (nonatomic, readonly) CNCache *cache;
@property (nonatomic, readonly) CNAutocompleteQueryCacheMissAuditor *cacheMissAuditor;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic, readonly, copy) NSString *searchString;
@property (nonatomic, readonly) CNObservable *serverSearchObservable;

+ (id)cache_os_log;
+ (bool)shouldCacheResults:(id)arg1;
+ (id)stringByRemovingLastCharacterFromString:(id)arg1;

- (void).cxx_destruct;
- (id)cache;
- (id)cacheMissAuditor;
- (id)cachedFutureForSearchString:(id)arg1;
- (id)cachedResultsObservable;
- (id)initWithCache:(id)arg1 searchString:(id)arg2 serverSearchObservable:(id)arg3;
- (id)initWithCache:(id)arg1 searchString:(id)arg2 serverSearchObservable:(id)arg3 cacheMissAuditor:(id)arg4 schedulerProvider:(id)arg5;
- (id)observablesForSearchString:(id)arg1 withCachedResults:(id)arg2;
- (id)remoteResultsForSearchString:(id)arg1;
- (id)remoteResultsForSearchString:(id)arg1 andCompletePromise:(id)arg2;
- (id)schedulerProvider;
- (id)searchString;
- (id)serverSearchObservable;
- (id)uncachedResultsObservable;

@end
