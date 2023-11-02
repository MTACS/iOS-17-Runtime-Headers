
@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol> {
    _PASLock * _clientModelCacheHandlersLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCacheHandlersForExistingClientModelCaches;
- (void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)arg1 clientModelId:(id)arg2;
- (double)cacheAgeForClientModel:(id)arg1;
- (id)cacheDirectory;
- (id)cacheFileHandlerForClientModel:(id)arg1 guardedData:(id)arg2;
- (id)cachedSuggestionsForAllClientModels;
- (id)cachedSuggestionsForClientModel:(id)arg1;
- (id)init;
- (void)initGuardedData;
- (id)lastCacheUpdateDateForClientModel:(id)arg1;
- (void)updateCachedSuggestions:(id)arg1;

@end
