
@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource {
    NSPredicate * _queryPredicate;
    HKSampleType * _sampleType;
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, retain) NSPredicate *queryPredicate;
@property (nonatomic, retain) HKSampleType *sampleType;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_calculateTotalDurationFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 interval:(id)arg4 intervalOut:(id*)arg5 intervalCountsOut:(id*)arg6;
- (id)_chartPointsWithStatisticsInterval:(id)arg1 dateIntervalsToTotals:(id)arg2 intervalCounts:(id)arg3 sourceTimeZone:(id)arg4;
- (id)_codableDataWithSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4;
- (id)_codableTimePeriodDataWithDictionary:(id)arg1;
- (id /* block */)_startOfDayTransform;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (id)queryPredicate;
- (id)sampleType;
- (void)setQueryPredicate:(id)arg1;
- (void)setSampleType:(id)arg1;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (bool)supportsChartQueryDataGeneration;
- (id /* block */)userInfoCreationBlock;

@end
