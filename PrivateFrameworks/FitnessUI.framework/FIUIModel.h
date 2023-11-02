
@interface FIUIModel : NSObject {
    NSObject<OS_dispatch_queue> * _activityQueryClientQueue;
    NSMutableDictionary * _currentActivityCacheQueryClients;
    NSMutableDictionary * _currentActivitySummaryQueryClients;
    NSDictionary * _currentActivitySummaryQueryCollectionIntervalOverrides;
    HKHealthStore * _healthStore;
    NSHashTable * _observers;
    long long  _queue_activityCacheQueryRetries;
    long long  _queue_activitySummaryQueryRetries;
    HKActivityCache * _queue_currentActivityCacheForClients;
    HKCurrentActivityCacheQuery * _queue_currentActivityCacheQuery;
    HKActivitySummary * _queue_currentActivitySummaryForClients;
    _HKCurrentActivitySummaryQuery * _queue_currentActivitySummaryQuery;
    FIUIWeeklyGoalModel * _weeklyGoalModel;
}

@property (nonatomic, retain) NSDictionary *currentActivitySummaryQueryCollectionIntervalOverrides;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) FIUIWeeklyGoalModel *weeklyGoalModel;

+ (id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(bool)arg5 handler:(id /* block */)arg6;
+ (id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(bool)arg4 handler:(id /* block */)arg5;
+ (bool)isWheelchairUser;

- (void).cxx_destruct;
- (id)_createCurrentActivitySummaryQuery;
- (void)_printStatisticsCollection:(id)arg1;
- (void)_printUpdatedStatistics:(id)arg1;
- (void)_queue_restartCurrentActivitySummaryQueryAfterError;
- (void)addObserver:(id)arg1;
- (id)currentActivitySummaryQueryCollectionIntervalOverrides;
- (void)executeQuery:(id)arg1;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCurrentActivitySummaryQueryCollectionIntervalOverrides:(id)arg1;
- (id)startCurrentActivitySummaryQueryWithHandler:(id /* block */)arg1;
- (void)stopCurrentActivitySummaryQueryForClientToken:(id)arg1;
- (void)stopQuery:(id)arg1;
- (id)weeklyGoalModel;

@end
