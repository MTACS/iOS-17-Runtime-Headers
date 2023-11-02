
@interface HDMHTypicalDayProvider : NSObject <FITypicalDayActivityModelDelegate, HDMHTypicalDayProviding, HDProtectedDataOperationDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _lock_cachedTypicalEndOfDay;
    NSDate * _lock_cachedTypicalStartOfDay;
    <HDMHActivityModelProviding> * _lock_typicalDayModel;
    HKObserverSet * _observers;
    HDProtectedDataOperation * _operation;
    HDPrimaryProfile * _profile;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultEndOfDayDateComponents;
- (id)_defaultStartOfDayDateComponents;
- (id)_typicalDayIntervalFromToday;
- (void)_updateObservers;
- (void)_updateTypicalDayMarkers;
- (id)clientProvidedDefaultEndOfDay;
- (id)currentCalendar;
- (id)currentDate;
- (bool)enumerateActivitySummariesFromDateComponents:(id)arg1 toDateComponents:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (id)firstOnWristDateToday;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 userDefaults:(id)arg2 fitnessActivityModel:(id)arg3;
- (void)performWorkForOperation:(id)arg1 profile:(id)arg2 databaseAccessibilityAssertion:(id)arg3 completion:(id /* block */)arg4;
- (void)rebuildTypicalDayProviderForCurrentDate;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)setupCachedTypicalDayMarkers;
- (void)typicalDayActivityModelDidUpdate;
- (id)userEndOfDay;
- (id)userStartOfDay;

@end
