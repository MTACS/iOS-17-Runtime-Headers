
@interface FIUIWorkoutDataProvider : NSObject {
    NSCalendar * _currentCalendar;
    HKAnchoredObjectQuery * _currentWorkoutAnchoredObjectQuery;
    NSCalendar * _gregorianCalendar;
    HKHealthStore * _healthStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _retryDate;
    bool  _shouldSortAscending;
    NSMutableArray * _updateHandlers;
    NSMutableDictionary * _workoutsByDay;
}

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_fetchAllWorkoutsFromDate:(id)arg1;
- (void)_handleAddedSamples:(id)arg1;
- (void)_handleRemovedObjects:(id)arg1;
- (void)_retryQuery:(id)arg1;
- (void)_retryQueryOnDidBecomeActiveWithDate:(id)arg1;
- (void)_runUpdateHandlers;
- (void)_timeZoneDidChange:(id)arg1;
- (void)addUpdateHandler:(id /* block */)arg1;
- (id)allWorkouts;
- (void)dealloc;
- (bool)hasWorkouts;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 shouldSortAscending:(bool)arg2;
- (void)startFetchingFromDate:(id)arg1;
- (void)stopFetching;
- (id)workoutsForDay:(id)arg1;

@end
