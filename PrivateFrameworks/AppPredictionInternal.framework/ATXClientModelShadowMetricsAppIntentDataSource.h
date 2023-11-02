
@interface ATXClientModelShadowMetricsAppIntentDataSource : _ATXClientModelShadowMetricsDataSourceBase <ATXShadowMetricsDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)cacheHitIndexForShadowEvent:(id)arg1 predictionCache:(id)arg2;
- (void)enumeratePredictionsInCache:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)isPrediction:(id)arg1 equalToPrediction:(id)arg2;
- (unsigned long long)numberOfPredictionsInCache:(id)arg1;
- (void)replayHistoryBetweenStartDate:(id)arg1 endDate:(id)arg2 shadowEventHandler:(id /* block */)arg3 predictionCacheHandler:(id /* block */)arg4;

@end
