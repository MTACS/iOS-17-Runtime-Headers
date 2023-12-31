
@interface WBSParsecSearchResultCache : NSObject {
    unsigned long long  _cachedQueriesLimit;
    NSMutableDictionary * _resultSetCache;
    NSMutableDictionary * _resultSetsByPrefix;
}

@property (nonatomic, readonly) NSArray *allCachedQueries;

- (void).cxx_destruct;
- (bool)_resultSet:(id)arg1 isMatchForQuery:(id)arg2;
- (bool)_shouldCacheResultSetForQueryMatching:(id)arg1;
- (id)allCachedQueries;
- (id)bestResultSetForQuery:(id)arg1;
- (void)cacheResultSet:(id)arg1;
- (void)cacheResultSetsFromSearchResponse:(id)arg1;
- (id)initWithCachedQueriesLimit:(unsigned long long)arg1;
- (id)resultSetWithQuery:(id)arg1;

@end
