
@interface CDMDataDispatcher : NSObject

+ (void)dispatchCdmPreprocessingWrapperData:(id)arg1 requestId:(id)arg2;
+ (void)dispatchCdmRequestData:(id)arg1 requestId:(id)arg2 withCurrentServiceGraph:(id)arg3 dataDispatcherContext:(id)arg4;
+ (void)dispatchCdmResponseData:(id)arg1 requestId:(id)arg2 dataDispatcherContext:(id)arg3;
+ (void)dispatchContextUpdateData:(id)arg1 requestId:(id)arg2 dataDispatcherContext:(id)arg3;
+ (void)dispatchCorrectedUtteranceTokenizationData:(id)arg1 requestId:(id)arg2 dataDispatcherContext:(id)arg3;
+ (void)dispatchCurrentTurnTokenizationData:(id)arg1 requestId:(id)arg2 dataDispatcherContext:(id)arg3;
+ (void)dispatchLVCData:(id)arg1 withResponse:(id)arg2 requestId:(id)arg3;
+ (void)dispatchMDData:(id)arg1 withResponse:(id)arg2 requestId:(id)arg3;
+ (void)dispatchMRData:(id)arg1 withResponse:(id)arg2 requestId:(id)arg3;
+ (void)dispatchNLv4Data:(id)arg1 withResponse:(id)arg2 requestId:(id)arg3;
+ (void)dispatchPSCData:(id)arg1 withResponse:(id)arg2 requestId:(id)arg3;
+ (void)dispatchPreviousTurnTokenizationData:(id)arg1 requestId:(id)arg2 dataDispatcherContext:(id)arg3;
+ (void)dispatchSELFRequestLink:(id)arg1 dataDispatcherContext:(id)arg2;
+ (void)dispatchSNLCData:(id)arg1 withResponse:(id)arg2 requestId:(id)arg3;
+ (void)dispatchServiceSetupMetrics:(id)arg1 selfMetadata:(id)arg2 dataDispatcherContext:(id)arg3;
+ (void)dispatchSpanizationData:(id)arg1 requestId:(id)arg2 dataDispatcherContext:(id)arg3;
+ (void)dispatchUaaPData:(id)arg1 withResponse:(id)arg2 requestId:(id)arg3;
+ (void)insertFeatureStore:(id /* block */)arg1 requester:(id)arg2 debugLog:(id)arg3;
+ (void)waitForQueueCompletion;

@end
