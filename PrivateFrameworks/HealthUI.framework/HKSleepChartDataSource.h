
@interface HKSleepChartDataSource : HKHealthQueryChartCacheDataSource {
    NSString * _cacheIdentifier;
    NSCalendar * _calendar;
    NSString * _queryIdentifier;
    unsigned long long  _queryOptions;
}

@property (nonatomic, readonly) NSString *cacheIdentifier;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSString *queryIdentifier;
@property (nonatomic, readonly) unsigned long long queryOptions;

- (void).cxx_destruct;
- (id /* block */)_mappingFunctionForComparisonChartWithContext:(id)arg1;
- (id /* block */)_mappingFunctionForConsistencyChartWithContext:(id)arg1;
- (id /* block */)_mappingFunctionForDurationChartWithContext:(id)arg1;
- (id /* block */)_mappingFunctionForStagesChartWithContext:(id)arg1;
- (id /* block */)_mappingFunctionForStagesDurationChartWithContext:(id)arg1;
- (id)cacheIdentifier;
- (id)calendar;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithHealthStore:(id)arg1 representativeDisplayType:(id)arg2 queryOptions:(unsigned long long)arg3 cacheIdentifier:(id)arg4 queryIdentifier:(id)arg5 calendar:(id)arg6;
- (id /* block */)mappingFunctionForContext:(id)arg1;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (id)queryIdentifier;
- (unsigned long long)queryOptions;
- (bool)supportsChartQueryDataGeneration;

@end
