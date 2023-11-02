
@interface _ATXClientModelShadowMetricsDataSourceBase : NSObject {
    long long  _clientModelType;
}

- (id)_eventBodyDateForEvent:(id)arg1;
- (void)enumeratePredictionsInCache:(id)arg1 ofType:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithClientModelType:(long long)arg1;
- (bool)isPrediction:(id)arg1 equalToPrediction:(id)arg2;
- (unsigned long long)numberOfPredictionsInCache:(id)arg1 ofType:(long long)arg2;
- (id)predictionCachePublisherFromStartDate:(id)arg1;
- (void)replayHistoryWithShadowEventPublisher:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shadowEventHandler:(id /* block */)arg4 predictionCacheHandler:(id /* block */)arg5;

@end
