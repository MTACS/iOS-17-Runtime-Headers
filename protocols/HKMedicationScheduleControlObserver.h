
@protocol HKMedicationScheduleControlObserver <NSObject>

@required

- (void)scheduleControlDidRescheduleItems;

@optional

- (void)scheduleControl:(HKMedicationScheduleControl *)arg1 didAddOrModifySchedules:(NSArray *)arg2;
- (void)scheduleControl:(HKMedicationScheduleControl *)arg1 didDeleteScheduleItems:(NSArray *)arg2;

@end
