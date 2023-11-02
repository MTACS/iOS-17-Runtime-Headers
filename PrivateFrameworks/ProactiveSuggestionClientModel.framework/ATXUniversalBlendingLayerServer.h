
@interface ATXUniversalBlendingLayerServer : NSObject <ATXProactiveSuggestionClientModelXPCInterface, NSXPCListenerDelegate> {
    int  _blendingDarwinNotificationObserver;
    ATXUniversalBlendingLayer * _blendingLayer;
    <ATXClientModelCacheManagerProtocol> * _clientModelCacheManager;
    ATXClientModelNotificationManager * _clientModelNotificationManager;
    _PASSimpleCoalescingTimer * _coalescedBlendingLayerRefreshOperation;
    <ATXEngagementRecordManagerProtocol> * _engagementRecordsManager;
    ATXUniversalBlendingFeedbackWriter * _feedbackWriter;
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _hyperParameters;
    _PASLock * _pendingRefreshTrackerLock;
    NSObject<OS_dispatch_queue> * _queue;
    ATXUniversalRealTimeSuggestionRequestCoordinator * _realTimeSuggestionRequestCoordinator;
    <ATXBlendingLayerServerDelegateProtocol> * _serverDelegate;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) ATXUniversalBlendingLayer *blendingLayer;
@property (nonatomic, readonly) <ATXClientModelCacheManagerProtocol> *clientModelCacheManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blendingLayer;
- (id)clientModelCacheManager;
- (void)clientModelUpdatedNotificationId:(id)arg1 clientModelId:(id)arg2 completion:(id /* block */)arg3;
- (void)clientModelUpdatedSuggestions:(id)arg1 feedbackMetadata:(id)arg2 clientModelId:(id)arg3 completion:(id /* block */)arg4;
- (id)clientModelsThatUpdatedSuggestionsRecently;
- (void)coalescedBlendingLayerRefresh;
- (id)consumerSubTypesToRefreshGivenUpdatesFromClientModels:(id)arg1;
- (void)dealloc;
- (void)generateLayoutForRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)generateRankedSuggestionsForRequest:(id)arg1 limit:(id)arg2 reply:(id /* block */)arg3;
- (id)generatedRankedSuggestionsForSuggestionRequest:(id)arg1 limit:(id)arg2;
- (id)initWithBlendingLayer:(id)arg1 engagementRecordsManager:(id)arg2 hyperParameters:(id)arg3 clientModelCacheManager:(id)arg4 clientModelNotificationManager:(id)arg5 serverDelegate:(id)arg6 pendingRefreshTracker:(id)arg7;
- (id)initWithBlendingLayer:(id)arg1 engagementRecordsManager:(id)arg2 hyperParameters:(id)arg3 serverDelegate:(id)arg4;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)refreshBlendingLayer;
- (void)refreshBlendingLayerIfNeededForNewSuggestions:(id)arg1 previousCacheUpdate:(id)arg2 clientModelId:(id)arg3;
- (void)registerRealTimeSuggestionProviderDelegate:(id)arg1 clientModelId:(id)arg2;
- (void)retrieveSuggestionsForClientModelId:(id)arg1 reply:(id /* block */)arg2;
- (id)selectedLayoutForSuggestionRequest:(id)arg1;
- (void)setupXPCListener;
- (void)start;
- (void)updateClientModelCacheWithCacheUpdate:(id)arg1 previousCacheUpdate:(id)arg2 completion:(id /* block */)arg3;
- (bool)willForceRefreshOfAllUIs;

@end
