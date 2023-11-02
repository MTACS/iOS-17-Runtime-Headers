
@interface HDMedicationSyncRequester : HDSyncRequester <HDMedicationScheduleObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithProfileExtension:(id)arg1;
- (void)scheduleManager:(id)arg1 didAddOrModifySchedules:(id)arg2;
- (void)scheduleManager:(id)arg1 didAddOrModifySchedulesBySyncIdentity:(id)arg2;
- (void)scheduleManager:(id)arg1 didPruneScheduleItems:(id)arg2;
- (void)scheduleManagerDidRescheduleMedications:(id)arg1;
- (void)unitTesting_triggerSyncForSchedulesBySyncIdentity:(id)arg1;

@end
