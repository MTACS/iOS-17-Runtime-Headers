
@interface HKMCViewModelProvider : NSObject <HKMCAnalysisProviderObserver, HKMCViewModelProviderDataSourceDelegate> {
    struct { 
        long long start; 
        long long duration; 
    }  _activeDayRange;
    HKMCAnalysis * _analysis;
    HKMCAnalysisProvider * _analysisProvider;
    HKCalendarCache * _calendarCache;
    NSArray * _cycleFactors;
    <HKMCViewModelProviderDataSource> * _dataSource;
    NSMutableDictionary * _daySummariesByDayIndex;
    NSMutableIndexSet * _fetchCompletedDayIndexes;
    NSMutableIndexSet * _fetchStartedDayIndexes;
    struct { 
        long long start; 
        long long duration; 
    }  _managedDayRange;
    long long  _maximumActiveDuration;
    NSNumber * _minimumAnalysisAnchor;
    long long  _minimumBufferDuration;
    _HKDelayedOperation * _notifyObserversOperation;
    NSHashTable * _observers;
    long long  _prefetchDuration;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldFetchCycleFactors;
}

@property (nonatomic) struct { long long x1; long long x2; } activeDayRange;
@property (nonatomic, readonly) HKCalendarCache *calendarCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumActiveDuration;
@property (nonatomic, readonly) long long minimumBufferDuration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyWithDataSource:(id)arg1 minimumBufferDuration:(long long)arg2;
- (bool)_didFetchInitialAnalysis;
- (bool)_didFetchMinimumAnalysis;
- (unsigned long long)_fertileWindowLevelWithDayIndex:(long long)arg1;
- (long long)_fetchStateForDayIndex:(long long)arg1;
- (id)_initWithDataSource:(id)arg1 analysisProvider:(id)arg2 maximumActiveDuration:(long long)arg3 minimumBufferDuration:(long long)arg4 prefetchDuration:(long long)arg5 shouldFetchCycleFactors:(bool)arg6 calendarCache:(id)arg7 queue:(id)arg8;
- (unsigned long long)_menstruationLevelWithDayIndex:(long long)arg1 menstrualFlow:(long long)arg2 partiallyLoggedPeriod:(bool*)arg3;
- (bool)_ppt_didFetchAnalysis;
- (bool)_ppt_didFetchDaySummaries;
- (void)_queue_notifyObserversDidUpdate;
- (void)_queue_runNotifyObserversOperationNow;
- (void)_setFetchState:(long long)arg1 forDayIndexRange:(struct { long long x1; long long x2; })arg2;
- (struct { long long x1; long long x2; })_test_managedDayRange;
- (void)_updateManagedDayRangeIfNeeded;
- (id)_viewModelWithDayIndex:(long long)arg1 fetchedDaySummary:(id)arg2;
- (struct { long long x1; long long x2; })activeDayRange;
- (void)addObserver:(id)arg1;
- (void)analysisProvider:(id)arg1 didUpdateAnalysis:(id)arg2;
- (id)calendarCache;
- (id)copyWithMinimumBufferDuration:(long long)arg1;
- (id)dayViewModelAtIndex:(long long)arg1;
- (id)initWithHealthStore:(id)arg1 analysisProvider:(id)arg2 maximumActiveDuration:(long long)arg3 minimumBufferDuration:(long long)arg4 shouldFetchCycleFactors:(bool)arg5 calendarCache:(id)arg6;
- (id)initWithHealthStore:(id)arg1 analysisProvider:(id)arg2 maximumActiveDuration:(long long)arg3 minimumBufferDuration:(long long)arg4 shouldFetchCycleFactors:(bool)arg5 calendarCache:(id)arg6 queue:(id)arg7;
- (long long)maximumActiveDuration;
- (long long)minimumBufferDuration;
- (void)removeObserver:(id)arg1;
- (void)setActiveCycles:(id)arg1;
- (void)setActiveDayRange:(struct { long long x1; long long x2; })arg1;
- (void)setMaximumActiveDuration:(long long)arg1;
- (void)viewModelProviderDataSource:(id)arg1 didFetchCycleFactors:(id)arg2 forDayIndexRange:(struct { long long x1; long long x2; })arg3;
- (void)viewModelProviderDataSource:(id)arg1 didFetchDaySummaries:(id)arg2 forDayIndexRange:(struct { long long x1; long long x2; })arg3 daySummaryAnchor:(id)arg4;
- (void)viewModelProviderDataSourceDidUpdateCycleFactors:(id)arg1;
- (void)viewModelProviderDataSourceDidUpdateDaySummaries:(id)arg1;

@end
