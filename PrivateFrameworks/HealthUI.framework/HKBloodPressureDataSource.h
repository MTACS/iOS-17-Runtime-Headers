
@interface HKBloodPressureDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_chartPointsWithSystolicResults:(id)arg1 diastolicResults:(id)arg2 blockStart:(id)arg3 blockEnd:(id)arg4 sourceTimeZone:(id)arg5;
- (id)_earliestDateForSystolicResults:(id)arg1 diastolicResults:(id)arg2;
- (id)_latestDateForSystolicResults:(id)arg1 diastolicResults:(id)arg2;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (unsigned long long)queryStatisticsOption;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (bool)supportsChartQueryDataGeneration;
- (id /* block */)userInfoCreationBlock;

@end
