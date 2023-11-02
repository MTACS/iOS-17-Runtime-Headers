
@interface FIUIActivityDataProvider : NSObject <FIFitnessAppsStateObserverDelegate> {
    bool  _areFitnessAppsRestricted;
    HKUnit * _countUnit;
    NSDate * _currentDate;
    FIFitnessAppsStateObserver * _fitnessAppsStateObserver;
    HKHealthStore * _healthStore;
    HKUnit * _kcalUnit;
    HKUnit * _minuteUnit;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _queue_currentActiveEnergyChartData;
    HKCurrentActivityCacheQuery * _queue_currentActivityCacheQuery;
    HKActivitySummary * _queue_currentActivitySummary;
    _HKCurrentActivitySummaryQuery * _queue_currentActivitySummaryQuery;
    NSArray * _queue_currentExerciseChartData;
    NSArray * _queue_currentMoveTimeChartData;
    NSArray * _queue_currentStandChartData;
    bool  _queue_ignoreLoadingSummary;
    NSObject<OS_dispatch_queue> * _subscriber_queue;
    NSHashTable * _subscribers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedModel;

- (void).cxx_destruct;
- (void)_broadcastCurrentModelUpdate:(id)arg1 toSubscriber:(id)arg2;
- (void)_broadcastCurrentModelUpdateToSubscribers:(id)arg1;
- (id)_currentActivitySummaryQueryCollectionIntervalsOverride;
- (void)_handleTimeChange;
- (bool)_loadingStateForActivitySummary:(id)arg1;
- (id)_queue_activityDataModelFromCurrentActivitySummary;
- (void)_queue_restartQueriesIfQueryInUse:(id)arg1;
- (void)_queue_restartQueriesPreservingExistingGoals:(bool)arg1;
- (void)_queue_startQueries;
- (void)_queue_stopQueriesPreservingExistingGoals:(bool)arg1;
- (void)_queue_updateChartStatisticsWithStatisticsQueryResult:(id)arg1;
- (void)_queue_updateCurrentActivitySummaryWithSummary:(id)arg1;
- (void)_setCurrentDate:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (void)dealloc;
- (void)fitnessAppsStateObserver:(id)arg1 restrictedStateDidChange:(long long)arg2;
- (void)getCurrentActivityDataModelWithHandler:(id /* block */)arg1;
- (id)init;
- (void)removeSubscriber:(id)arg1;
- (id)switcherActivityDataModel;

@end
