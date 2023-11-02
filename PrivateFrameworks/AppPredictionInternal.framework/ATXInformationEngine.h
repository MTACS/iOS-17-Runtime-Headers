
@interface ATXInformationEngine : NSObject <ATXTimelineRelevanceDelegate> {
    ATXTimelineAbuseControlConfig * _abuseControlConfig;
    _PASSimpleCoalescingTimer * _coalescedPredictionUpdateOperation;
    ATXInfoToBlendingConfidenceMapper * _confidenceMapper;
    ATXInformationFeatureWeights * _featureWeights;
    <ATXInformationFeaturizerProtocol> * _featurizer;
    ATXInformationFilter * _filter;
    _PASQueueLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
    <ATXInformationRankerProtocol> * _ranker;
    ATXInformationStore * _store;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) ATXTimelineAbuseControlConfig *abuseControlConfig;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clearSuggestionsForInfoSourceIdentifier:(id)arg1;
- (long long)_clientModelTypeForInfoSuggestion:(id)arg1;
- (bool)_currentActivePredictionsContainSuggestionFromSourceId:(id)arg1 guardedData:(id)arg2;
- (id)_insertSuggestions:(id)arg1 forInfoSourceIdentifier:(id)arg2;
- (id)_proactiveSuggestionFromScoredInfoSuggestion:(id)arg1 clientModelId:(id)arg2 clientModelVersion:(id)arg3;
- (void)_pushPredictionsToBlendingLayer:(id)arg1 forClientModel:(id)arg2 withClientModelVersion:(id)arg3;
- (void)_pushPredictionsToBlendingLayerIfDifferentFromTheLastCacheUpdate:(id)arg1 forClientModel:(id)arg2 withClientModelVersion:(id)arg3 cachedSuggestions:(id)arg4;
- (void)_pushSuggestionsToBlendingLayerIfDifferentFromTheLastCacheUpdate:(id)arg1 cachedSuggestions:(id)arg2;
- (void)_schedulePredictionUpdateNoLaterThanDate:(id)arg1 guardedData:(id)arg2;
- (bool)_shouldSkipRefreshForOldSuggestions:(id)arg1 newSuggestions:(id)arg2;
- (void)_storeCachedSuggestionsWithoutIntents:(id)arg1 withGuardedData:(id)arg2;
- (void)_updateClientModelWithClientModelId:(id)arg1 withSuggestions:(id)arg2;
- (void)_updatePredictionRefreshDateIfNecessaryForSuggestions:(id)arg1;
- (void)_updatePredictionsWithGuardedData:(id)arg1;
- (id)_widgetIdentitiesFromInfoSuggestions:(id)arg1;
- (id)abuseControlConfig;
- (id)allInfoSuggestions;
- (id)allInfoSuggestionsForSourceId:(id)arg1;
- (id)allRelevantInfoSuggestions;
- (void)clearSuggestionsForInfoSourceIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)countOfInfoSuggestionsForBundleId:(id)arg1;
- (unsigned long long)countOfInfoSuggestionsForSourceId:(id)arg1;
- (id)currentPredictions;
- (bool)deleteAllSuggestionsForSourceId:(id)arg1 excludingSuggestionId:(id)arg2;
- (id)forceUpdateAndReturnPredictions;
- (void)getSuggestionsForInfoSourceIdentifier:(id)arg1 withReply:(id /* block */)arg2;
- (void)handleProactiveStackRotationForInfoSuggestion:(id)arg1 isStalenessRotation:(bool)arg2;
- (void)handleSuggestionDismissal:(id)arg1 isDismissalLongTerm:(bool)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithFilter:(id)arg1 featurizer:(id)arg2 ranker:(id)arg3 infoStore:(id)arg4 confidenceMapper:(id)arg5 abuseControlConfig:(id)arg6 featureWeights:(id)arg7;
- (void)insertSuggestions:(id)arg1 forInfoSourceIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)latestInfoSuggestionRelevantNowForSourceId:(id)arg1;
- (id)latestUpdateDateForSourceId:(id)arg1;
- (void)recordRecentTimelineEntries:(id)arg1 forWidget:(id)arg2;
- (void)resetSuggestionsTo:(id)arg1 forInfoSourceIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)scheduledPredictionRefreshDate;
- (bool)shouldSkipUpdatingPredictionRefreshDateForPreviouslyScheduledDate:(id)arg1 newDate:(id)arg2;

@end
