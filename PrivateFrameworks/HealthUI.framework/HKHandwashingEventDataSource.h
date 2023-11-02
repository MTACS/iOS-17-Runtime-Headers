
@interface HKHandwashingEventDataSource : HKHealthQueryChartCacheDataSource {
    long long  _timeScope;
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic) long long timeScope;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

+ (double)durationForCompleteSample;

- (void).cxx_destruct;
- (id)_averageDurationChartModelForObjects:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_dailyAverageChartModelForObjects:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)chartModelsForSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 statisticsInterval:(id)arg4;
- (id)chartPointsForSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 statisticsInterval:(id)arg4;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (bool)doesDurationMeetGoal:(double)arg1;
- (double)durationForObject:(id)arg1;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 timeScope:(long long)arg3;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (void)setTimeScope:(long long)arg1;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (bool)supportsChartQueryDataGeneration;
- (long long)timeScope;
- (id /* block */)userInfoCreationBlock;

@end
