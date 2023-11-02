
@interface HKActivitySummaryDataProvider : NSObject <HKDateCacheObserver> {
    long long  _activityMoveMode;
    NSCache * _activitySummaryForTimeScopeCache;
    NSCalendar * _cachedCalendar;
    HKThrottleCallback * _databaseChangesThrottle;
    HKDateCache * _dateCache;
    HKDisplayTypeController * _displayTypeController;
    HKHealthStore * _healthStore;
    NSCache * _hourlyActivitySummaryCache;
    HKQuery * _observerQuery;
    HKSynchronousObserverSet * _observers;
    HKFetchOperation * _outstandingFetchOperation;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, readonly) long long activityMoveMode;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKActivitySummary *latestActivitySummary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (void)_alertObserversDidUpdateValues;
- (void)_averageActivitySummariesForCachedData:(id)arg1 averagePeriod:(long long)arg2 handler:(id /* block */)arg3;
- (id)_averageActivitySummariesForDateRange:(id)arg1 averagePeriod:(long long)arg2;
- (id)_buildActivitySummaryFromAverages:(struct _WDActivitySummaryAverages { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1 averagePeriod:(long long)arg2 startDate:(id)arg3 calendar:(id)arg4 energyUnit:(id)arg5 standHourUnit:(id)arg6;
- (id)_buildHourlyActivitySummaryFromDate:(id)arg1 calendar:(id)arg2 moveQuantity:(id)arg3 exerciseQuantity:(id)arg4 standQuantity:(id)arg5 moveGoal:(id)arg6 exerciseGoal:(id)arg7 standGoal:(id)arg8;
- (void)_clearCaches;
- (id)_dayActivitySummariesForDateRange:(id)arg1;
- (id)_fetchOperationForTimeScope:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)_fetchValueWithRetryCount:(long long)arg1;
- (id)_hourActivitySummariesForDateRange:(id)arg1;
- (void)_hourActivitySummariesForDateRange:(id)arg1 pageHandler:(id /* block */)arg2;
- (void)_hourlyActivityDataForStartDate:(id)arg1 endDate:(id)arg2 healthStore:(id)arg3 calendar:(id)arg4 handler:(id /* block */)arg5;
- (void)_hourlyActivityPageDataArrived:(id)arg1 pageNumber:(id)arg2 error:(id)arg3;
- (void)_hourlyPageInProgress:(id)arg1;
- (id)_hourlySummariesFromStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 activeEnergyData:(id)arg4 appleMoveTimeData:(id)arg5 exerciseData:(id)arg6 standData:(id)arg7 dayGoalData:(id)arg8;
- (void)_mainQueueFetchValueWithRetryCount:(long long)arg1;
- (void)_partitionAndProcessActivitySummariesForAllTimeScopes:(id)arg1;
- (id)_predicateForStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3;
- (id)_predicateForStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 activityMoveMode:(long long)arg4;
- (id)_queriesForTimeScope:(long long)arg1 withCompletion:(id /* block */)arg2;
- (bool)_sampleDate:(id)arg1 withinHourBeforeDate:(id)arg2;
- (void)_setupActivitySummaryChangeObserver;
- (void)_stopActivitySummaryChangeObserver;
- (void)_submitHourlyQueryForPageNumber:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_transitionToFetchFailureForTimeScope:(long long)arg1;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (long long)_weekOfYearForDateComponents:(id)arg1 calendar:(id)arg2;
- (long long)activityMoveMode;
- (bool)activitySummariesAreLoading;
- (id)activitySummariesForDateRange:(id)arg1 timeScope:(long long)arg2;
- (id)activitySummariesForTimeScope:(long long)arg1;
- (void)addObserver:(id)arg1;
- (id)cachedCalendar;
- (id)dateCache;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)dealloc;
- (id)displayTypeController;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 activityMoveMode:(long long)arg5;
- (id)latestActivitySummary;
- (void)removeObserver:(id)arg1;
- (id)unitController;

@end
