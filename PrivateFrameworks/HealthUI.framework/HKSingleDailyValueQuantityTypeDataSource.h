
@interface HKSingleDailyValueQuantityTypeDataSource : HKQuantityTypeDataSource

- (id)_componentsForDailyValues;
- (bool)_matchesDailyValues:(id)arg1;
- (id)_quantityValueFromStatistics:(id)arg1 statisticsInterval:(id)arg2 date:(id)arg3;
- (bool)_shouldEmitOnlySinglePointForStatistics:(id)arg1;
- (unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (bool)requiresPointRealignmentToMidnightForStatisticsInterval:(id)arg1;
- (id)statisticsIntervalForTimeScope:(long long)arg1 resolution:(long long)arg2 displayType:(id)arg3;

@end
