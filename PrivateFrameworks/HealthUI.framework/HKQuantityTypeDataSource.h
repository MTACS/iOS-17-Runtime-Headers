
@interface HKQuantityTypeDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _mappingFunction;
    id /* block */  _preprocessingHandler;
    unsigned long long  _statisticsOptions;
    HKUnitPreferenceController * _unitController;
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, copy) id /* block */ preprocessingHandler;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) unsigned long long statisticsOptions;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_averageByInterval:(id)arg1 startDate:(id)arg2 statistics:(id)arg3;
- (id /* block */)_createMappingFunction;
- (id)_dailyAverageQueriesWithStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completion:(id /* block */)arg4;
- (id)_defaultQueriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_unshiftedDateIntervalIfNecessaryForStatisticsInterval:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 gregorianCalendar:(id)arg4;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithUnitController:(id)arg1 options:(unsigned long long)arg2 displayType:(id)arg3 healthStore:(id)arg4;
- (id /* block */)mappingFunctionForContext:(id)arg1;
- (id /* block */)preprocessingHandler;
- (id)quantityType;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (bool)requiresPointRealignmentToMidnightForStatisticsInterval:(id)arg1;
- (void)setPreprocessingHandler:(id /* block */)arg1;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (unsigned long long)statisticsOptions;
- (bool)supportsChartQueryDataGeneration;
- (id)unitController;
- (id /* block */)userInfoCreationBlock;

@end
