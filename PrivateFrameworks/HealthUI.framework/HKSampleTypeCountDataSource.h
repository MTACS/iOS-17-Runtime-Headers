
@interface HKSampleTypeCountDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_chartPointsWithCounts:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 sourceTimeZone:(id)arg4;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (bool)supportsChartQueryDataGeneration;
- (id /* block */)userInfoCreationBlock;

@end
