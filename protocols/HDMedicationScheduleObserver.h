
@protocol HDMedicationScheduleObserver <NSObject>

@required

- (void)scheduleManager:(HDMedicationScheduleManager *)arg1 didAddOrModifySchedules:(NSArray *)arg2;
- (void)scheduleManager:(HDMedicationScheduleManager *)arg1 didPruneScheduleItems:(NSArray *)arg2;
- (void)scheduleManagerDidRescheduleMedications:(HDMedicationScheduleManager *)arg1;

@optional

- (void)scheduleManager:(HDMedicationScheduleManager *)arg1 didAddOrModifySchedulesBySyncIdentity:(NSDictionary *)arg2;

@end
