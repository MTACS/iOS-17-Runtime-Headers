
@interface HKMCViewModelProviderDataSource : NSObject <HKMCViewModelProviderDataSource> {
    HKCalendarCache * _calendarCache;
    NSMutableIndexSet * _canceledDayIndexes;
    <HKMCViewModelProviderDataSourceDelegate> * _delegate;
    _HKDatabaseChangesQuery * _factorObserverQuery;
    HKSampleIteratorQuery * _factorQuery;
    HKHealthStore * _healthStore;
    NSObject<OS_dispatch_queue> * _queue;
    HKMCDaySummaryObserverQuery * _summaryObserverQuery;
    NSMutableSet * _summaryQueries;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKMCViewModelProviderDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCycleFactorsSampleTypeChanges:(id)arg1 error:(id)arg2;
- (void)_handleDaySummaryObserverUpdateWithError:(id)arg1;
- (void)_startObservingCycleFactorsUpdates;
- (void)_startObservingDaySummaryUpdates;
- (void)cancelFetchForDaySummariesInDayIndexRange:(struct { long long x1; long long x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)fetchCycleFactorsInDayIndexRange:(struct { long long x1; long long x2; })arg1;
- (void)fetchDaySummariesInDayIndexRange:(struct { long long x1; long long x2; })arg1;
- (id)initWithHealthStore:(id)arg1 shouldFetchCycleFactors:(bool)arg2 calendarCache:(id)arg3 queue:(id)arg4;
- (void)setDelegate:(id)arg1;

@end
