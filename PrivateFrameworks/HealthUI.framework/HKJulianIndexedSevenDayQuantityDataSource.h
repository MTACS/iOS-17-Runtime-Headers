
@interface HKJulianIndexedSevenDayQuantityDataSource : HKHealthQueryChartCacheDataSource {
    HKCalendarCache * _calendarCache;
    long long  _dataSourceType;
    id /* block */  _intervalUserInfoCreationBlock;
    HKQuantityType * _quantityType;
    id /* block */  _singlePointUserInfoCreationBlock;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, retain) HKCalendarCache *calendarCache;
@property (nonatomic) long long dataSourceType;
@property (nonatomic, readonly) id /* block */ intervalUserInfoCreationBlock;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) id /* block */ singlePointUserInfoCreationBlock;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)_createIntervalChartPointFromDateInterval:(id)arg1 timeZoneName:(id)arg2 yValue:(id)arg3 metadata:(id)arg4;
- (id)_createSinglePointChartPointFromDateInterval:(id)arg1 statisticsInterval:(id)arg2 timeZoneName:(id)arg3 yValue:(id)arg4 metadata:(id)arg5;
- (id)_intervalChartPointsWithSamples:(id)arg1;
- (id)_singlePointChartPointsWithSamples:(id)arg1 statisticsInterval:(id)arg2;
- (id)calendarCache;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (long long)dataSourceType;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 quantityType:(id)arg3 unitController:(id)arg4 intervalUserInfoCreationBlock:(id /* block */)arg5;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 quantityType:(id)arg3 unitController:(id)arg4 singlePointUserInfoCreationBlock:(id /* block */)arg5;
- (id /* block */)intervalUserInfoCreationBlock;
- (id)quantityType;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (void)setCalendarCache:(id)arg1;
- (void)setDataSourceType:(long long)arg1;
- (id /* block */)singlePointUserInfoCreationBlock;
- (bool)supportsChartQueryDataGeneration;
- (id)unitController;

@end
