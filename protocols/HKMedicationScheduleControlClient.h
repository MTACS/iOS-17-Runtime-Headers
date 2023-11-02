
@protocol HKMedicationScheduleControlClient <NSObject>

@required

- (void)client_notifyForAddOrModifySchedules:(NSArray *)arg1;
- (void)client_notifyForDidPruneSchduleItems:(NSArray *)arg1;
- (void)client_notifyForDidRescheduleMedications;

@end
