
@protocol ATXShadowMetricsDataSource <NSObject>

@required

- (unsigned long long)cacheHitIndexForShadowEvent:(id <ATXShadowEventProtocol>)arg1 predictionCache:(id <ATXPredictionCacheProtocol>)arg2;
- (void)enumeratePredictionsInCache:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: <ATXPredictionCacheProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, unsigned long long, bool*, void*
- (bool)isPrediction:(id)arg1 equalToPrediction:(id)arg2;
- (unsigned long long)numberOfPredictionsInCache:(id <ATXPredictionCacheProtocol>)arg1;
- (void)replayHistoryBetweenStartDate:(void *)arg1 endDate:(void *)arg2 shadowEventHandler:(void *)arg3 predictionCacheHandler:(void *)arg4; // needs 4 arg types, found 14: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ATXShadowEventProtocol> *, void*, id /* block */, void*, void, id /* block */, <ATXPredictionCacheProtocol> *, void*

@end
