
@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource> {
    NSCalendar * _calendarOverride;
    HKDisplayType * _displayType;
    HKHealthStore * _healthStore;
    long long  _queryAlignment;
}

@property (nonatomic, retain) NSCalendar *calendarOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long queryAlignment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildDescriptionFromStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3;
- (id)_calendar;
- (id)_shiftedQueryIntervalIfNecessaryForStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3;
- (id)calendarOverride;
- (unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id)codableQueryDataWithType:(int)arg1 startDate:(id)arg2 endDate:(id)arg3 statisticsInterval:(id)arg4 queryDataObject:(id)arg5;
- (id)displayType;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2;
- (id /* block */)mappingFunctionForContext:(id)arg1;
- (id)operationForIdentifier:(id)arg1 priorityDelegate:(id)arg2 completion:(id /* block */)arg3;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)queryAlignment;
- (id)queryDescription;
- (void)setCalendarOverride:(id)arg1;
- (void)setQueryAlignment:(long long)arg1;
- (id)statisticsIntervalForTimeScope:(long long)arg1 resolution:(long long)arg2 displayType:(id)arg3;
- (bool)supportsChartQueryDataGeneration;

@end
