
@interface HDSPAnalyticsManager : NSObject <HDSPEnvironmentAware, HDSPTimeChangeObserver> {
    HKSPAnalyticsManager * _analyticsManager;
    <HDSPActivityScheduler> * _dataCollectionScheduler;
    HDSPEnvironment * _environment;
    bool  _isDataCollectionInProgress;
    <HKSPMutexProvider> * _mutexProvider;
}

@property (nonatomic, readonly) HKSPAnalyticsManager *analyticsManager;
@property (nonatomic, readonly) <HDSPActivityScheduler> *dataCollectionScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDataCollectionInProgress;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (readonly) Class superclass;

+ (id)dailyCollectionActivity;
+ (id)dailyCollectionCriteria;

- (void).cxx_destruct;
- (void)_lock_executeQuery:(id)arg1;
- (id)_makeReportQueryWithMorningIndexRange:(struct { long long x1; long long x2; })arg1 resultsHandler:(id /* block */)arg2;
- (void)_processQueryResultsWithSummaries:(id)arg1 queryRange:(struct { long long x1; long long x2; })arg2 error:(id)arg3;
- (void)_pruneExpiredWindDownActionDataBeforeQueryRange:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; })_queryMorningIndexRangeForDate:(id)arg1;
- (void)_submitAnalyticsReportsUsingBuilder:(id)arg1;
- (void)_unit_testing_pruneExpiredWindDownActionData;
- (void)_withLock:(id /* block */)arg1;
- (id)analyticsManager;
- (void)cancelDailyCollectionActivity;
- (id)currentDate;
- (id)dataCollectionScheduler;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 analyticsManager:(id)arg2 dataCollectionScheduler:(id)arg3;
- (bool)isDataCollectionEnabled;
- (bool)isDataCollectionInProgress;
- (id)mutexProvider;
- (void)scheduleDailyCollectionActivity;
- (void)significantTimeChangeDetected:(id)arg1;
- (void)updateScheduledActivity;

@end
