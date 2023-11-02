
@interface HDMedicationScheduleControlServer : HDStandardTaskServer <HDMedicationScheduleObserver> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _shouldObserveChanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (bool)insertMedicationScheduleItems:(id)arg1 error:(id*)arg2;
- (id)medicationSchedulesForMedicationIdentifiers:(id)arg1 error:(id*)arg2;
- (id)remoteInterface;
- (void)remote_deleteSchedule:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchAllSchedulesWithCompletion:(id /* block */)arg1;
- (void)remote_fetchScheduleWithMedicationIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchSchedulesWithMedicationIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_observeMedicationScheduleChanges:(bool)arg1 completion:(id /* block */)arg2;
- (void)remote_rescheduleMedicationsWithCompletion:(id /* block */)arg1;
- (void)remote_saveSchedule:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_saveScheduleItems:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_updateNotificationSent:(bool)arg1 scheduleItemIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(bool)arg1 completion:(id /* block */)arg2;
- (void)scheduleManager:(id)arg1 didAddOrModifySchedules:(id)arg2;
- (void)scheduleManager:(id)arg1 didPruneScheduleItems:(id)arg2;
- (void)scheduleManagerDidRescheduleMedications:(id)arg1;

@end
