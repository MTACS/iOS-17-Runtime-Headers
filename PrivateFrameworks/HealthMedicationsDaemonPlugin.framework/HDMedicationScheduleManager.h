
@interface HDMedicationScheduleManager : NSObject <HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    HDAssertion * _accessibilityAssertion;
    long long  _isOperationRequiredOnNextUnlock;
    HDMedicationNotificationManager * _notificationManager;
    HKObserverSet<HDMedicationScheduleObserver> * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSMutableDictionary * _observersLock_pendingSchedulesBySyncIdentity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _operationLock;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    _HKDelayedOperation * _rescheduleOperation;
    HKSynchronousObserverSet<HDMedicationScheduleSynchronousObserver> * _synchronousObservers;
    HDMedicationTimeZoneManager * _timeZoneManager;
    id /* block */  _unitTesting_didRunRescheduleOperationWithDelay;
    id /* block */  _unitTesting_willRunRescheduleOperationWithDelay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDMedicationNotificationManager *notificationManager;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_didRunRescheduleOperationWithDelay;
@property (nonatomic, copy) id /* block */ unitTesting_willRunRescheduleOperationWithDelay;

- (void).cxx_destruct;
- (bool)_updateSchedulesToTimeZone:(id)arg1 maintainCalendarDatesAndTimes:(bool)arg2 error:(id*)arg3;
- (void)batchNotifyObserversOnCommitOfTransaction:(id)arg1 didAddOrModifySchedule:(id)arg2 syncIdentity:(long long)arg3;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (bool)deleteMedicationSchedule:(id)arg1 error:(id*)arg2;
- (bool)enumerateMedicationSchedulesWithPredicate:(id)arg1 limit:(long long)arg2 orderingTerms:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
- (id)initWithProfile:(id)arg1;
- (bool)insertMedicationSchedule:(id)arg1 error:(id*)arg2;
- (bool)insertMedicationSchedules:(id)arg1 error:(id*)arg2;
- (bool)insertMedicationSchedules:(id)arg1 syncProvenance:(long long)arg2 syncIdentity:(long long)arg3 error:(id*)arg4;
- (bool)medicationSchedule:(id*)arg1 identifier:(id)arg2 error:(id*)arg3;
- (bool)medicationSchedule:(id*)arg1 medicationIdentifier:(id)arg2 error:(id*)arg3;
- (id)medicationSchedulesWithError:(id*)arg1;
- (id)medicationSchedulesWithPredicate:(id)arg1 error:(id*)arg2;
- (id)medicationSchedulesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)notificationManager;
- (id)orderingTermsForSortDescriptors:(id)arg1 error:(id*)arg2;
- (void)profileDidBecomeReady:(id)arg1;
- (bool)pruneAllScheduleItemsBeforeDate:(id)arg1 createDoseEvents:(bool)arg2 error:(id*)arg3;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)registerSynchronousObserver:(id)arg1;
- (void)rescheduleMedicationsSynchronously:(bool)arg1;
- (bool)rescheduleMedicationsWithError:(id*)arg1;
- (void)setUnitTesting_didRunRescheduleOperationWithDelay:(id /* block */)arg1;
- (void)setUnitTesting_willRunRescheduleOperationWithDelay:(id /* block */)arg1;
- (id /* block */)unitTesting_didRunRescheduleOperationWithDelay;
- (id /* block */)unitTesting_willRunRescheduleOperationWithDelay;
- (void)unregisterObserver:(id)arg1;
- (void)unregisterSynchronousObserver:(id)arg1;
- (bool)updateNotificationSent:(bool)arg1 scheduleItemIdentifier:(id)arg2 error:(id*)arg3;
- (bool)updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(bool)arg1 error:(id*)arg2;

@end
