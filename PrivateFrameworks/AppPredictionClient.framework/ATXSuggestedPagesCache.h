
@interface ATXSuggestedPagesCache : NSObject {
    NSString * _basePath;
}

- (void).cxx_destruct;
- (id)_cacheForPageType:(long long)arg1;
- (void)cacheSuggestedPages:(id)arg1 forPageType:(long long)arg2;
- (id)cachedSuggestedPagesForPageType:(long long)arg1;
- (void)evictCachedSuggestedPages;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)printCachedSuggestedPagesStats;

@end
