
@protocol HDMedicationScheduleSynchronousObserver <NSObject>

@required

- (void)scheduleManager:(HDMedicationScheduleManager *)arg1 transaction:(HDDatabaseTransaction *)arg2 didReschedule:(NSArray *)arg3;
- (void)scheduleManager:(HDMedicationScheduleManager *)arg1 transaction:(HDDatabaseTransaction *)arg2 willReschedule:(NSArray *)arg3;

@end
