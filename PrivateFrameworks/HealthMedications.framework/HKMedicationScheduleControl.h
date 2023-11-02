
@interface HKMedicationScheduleControl : NSObject <HKMedicationScheduleControlClient, _HKXPCExportable> {
    HKObserverSet<HKMedicationScheduleControlObserver> * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
    id /* block */  _unitTesting_didChangeObserverRegistration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_didChangeObserverRegistration;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_callUnitTestHookObserving:(bool)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_handleAutomaticProxyReconnection;
- (void)_notifyObserversAboutReconnect;
- (void)_observeMedicationScheduleChanges:(bool)arg1 completion:(id /* block */)arg2;
- (void)_registerFirstObserver;
- (bool)_synchronouslyRegisterToObserveMedicationScheduleChangesWithError:(id*)arg1;
- (void)_unregisterLastObserver;
- (void)client_notifyForAddOrModifySchedules:(id)arg1;
- (void)client_notifyForDidPruneSchduleItems:(id)arg1;
- (void)client_notifyForDidRescheduleMedications;
- (void)connectionInvalidated;
- (void)deleteSchedule:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (void)fetchAllSchedulesWithCompletion:(id /* block */)arg1;
- (void)fetchScheduleWithMedicationIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSchedulesWithMedicationIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (id)remoteInterface;
- (void)rescheduleMedicationsWithCompletion:(id /* block */)arg1;
- (void)saveSchedule:(id)arg1 completion:(id /* block */)arg2;
- (void)saveScheduleItems:(id)arg1 completion:(id /* block */)arg2;
- (void)setUnitTesting_didChangeObserverRegistration:(id /* block */)arg1;
- (void)unitTest_noOpWithCompletion:(id /* block */)arg1;
- (id /* block */)unitTesting_didChangeObserverRegistration;
- (void)unregisterObserver:(id)arg1;
- (void)updateNotificationSent:(bool)arg1 scheduleItemIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(bool)arg1 completion:(id /* block */)arg2;

@end
