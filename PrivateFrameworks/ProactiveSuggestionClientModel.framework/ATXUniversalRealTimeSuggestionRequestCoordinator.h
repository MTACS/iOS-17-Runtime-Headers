
@interface ATXUniversalRealTimeSuggestionRequestCoordinator : NSObject {
    ATXUniversalBlendingLayer * _blendingLayer;
    ATXUniversalBlendingFeedbackWriter * _feedbackWriter;
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _hyperParameters;
    _PASLock * _pendingRefreshTrackerLock;
    ATXUniversalBlendingLayerServer * _server;
}

- (void).cxx_destruct;
- (id)cacheUpdateDictionaryFromCacheUpdatesArray:(id)arg1;
- (id)clientModelUpdatesForSuggestionRequest:(id)arg1;
- (void)delegateUpdatedSuggestionsForClientModelId:(id)arg1 suggestionRequest:(id)arg2 response:(id)arg3 clientModelsPendingUpdate:(id)arg4;
- (id)generatedRankedSuggestionsForSuggestionRequest:(id)arg1 limit:(id)arg2;
- (id)initWithBlendingLayer:(id)arg1 hyperParameters:(id)arg2 pendingRefreshTracker:(id)arg3 server:(id)arg4;
- (void)realTimeProviderDelegateForClientModelId:(id)arg1 completion:(id /* block */)arg2;
- (void)registerRealTimeSuggestionProviderDelegate:(id)arg1 clientModelId:(id)arg2;
- (void)remoteAsyncDelegateForClientModel:(id)arg1 completion:(id /* block */)arg2;
- (void)respondToRequestWithPreviouslyCachedPredictionsForClientModelId:(id)arg1 suggestionRequest:(id)arg2;
- (id)selectedLayoutForSuggestionRequest:(id)arg1;
- (void)updateSuggestionsFromDelegate:(id)arg1 clientModelId:(id)arg2 clientModelsPendingUpdate:(id)arg3 dispatchGroup:(id)arg4 suggestionRequest:(id)arg5;

@end
