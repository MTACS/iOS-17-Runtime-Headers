
@interface ATXExecutableReferenceManager : NSObject {
    NSMapTable * __cachedExecutableToReferenceMapForBatchUpdates;
    bool  __cachedExecutableToReferenceMapNeedsWrite;
    double  _minDurationForTrackedReferencesToStayAround;
    NSString * _path;
}

- (void).cxx_destruct;
- (void)_addExecutablePairs:(id)arg1 toMap:(id)arg2;
- (id)_executablePairsForSuggestions:(id)arg1 clientModelId:(id)arg2;
- (id)_loadReferences;
- (id)_pairsForClientModelId:(id)arg1 map:(id)arg2;
- (void)_purgeReferencesIfPossibleInMap:(id)arg1 forceWrite:(bool)arg2;
- (id)_readData;
- (bool)_writeData:(id)arg1;
- (void)_writeReferences:(id)arg1;
- (void)addReferencesForSuggestions:(id)arg1 clientModelId:(id)arg2;
- (bool)canExecutableClearOnEngagement:(id)arg1;
- (id)clientModelIdsForExecutable:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithCacheDirectory:(id)arg1 minDurationForTrackedReferencesToStayAround:(double)arg2;
- (bool)isExecutableHidden:(id)arg1;
- (id)jsonDict;
- (void)markReferenceAsHiddenForExecutable:(id)arg1 clientModelId:(id)arg2 untilDate:(id)arg3;
- (void)markReferencesAsPurgableFromClientModelIdIfPossible:(id)arg1;
- (void)performBatchUpdateOfReferencesWithBlock:(id /* block */)arg1;
- (void)purgeReferencesForSuggestions:(id)arg1 clientModelId:(id)arg2;
- (void)purgeReferencesIfPossible;
- (void)recordExecutable:(id)arg1 clientModelId:(id)arg2 shouldClearEngagement:(bool)arg3;
- (unsigned long long)referenceCountForExecutable:(id)arg1;
- (id)referencesForClientModelId:(id)arg1;
- (void)updateDateOfReferenceForExecutable:(id)arg1 clientModelId:(id)arg2;
- (void)updateReferencesForProactiveSuggestions:(id)arg1 clientModelId:(id)arg2;

@end
