
@protocol HDMedicationCountProvider

@required

- (void)addMedicationCountObserver:(id <HDMedicationCountObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (HDDaemon *)daemon;
- (void)monitorMedicationCountsInProfile:(HDProfile *)arg1;
- (long long)ontologyBackedMedicationCountInProfile:(HDProfile *)arg1;
- (void)removeMedicationCountObserver:(id <HDMedicationCountObserver>)arg1;

@end
