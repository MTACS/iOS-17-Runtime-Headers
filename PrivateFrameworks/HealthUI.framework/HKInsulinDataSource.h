
@interface HKInsulinDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_chartPointsWithBasalInsulinValues:(id)arg1 withTotalInsulinValues:(id)arg2 filterInterval:(id)arg3 sourceTimeZone:(id)arg4;
- (id)_dailyAverageInsulinValuesFromStatistics:(id)arg1 queryStartDate:(id)arg2 statisticsInterval:(id)arg3;
- (id)_insulinDataSourceQueryDataFromBasalStatisticsCollection:(id)arg1 totalStatisticsCollection:(id)arg2 queryStartDate:(id)arg3 statisticsInterval:(id)arg4;
- (id)_insulinValuesFromStatistics:(id)arg1;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (bool)supportsChartQueryDataGeneration;
- (id /* block */)userInfoCreationBlock;

@end
