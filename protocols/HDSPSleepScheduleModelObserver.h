
@protocol HDSPSleepScheduleModelObserver <NSObject>

@optional

- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 didUpdateSleepEventRecord:(HKSPSleepEventRecord *)arg2;
- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 didUpdateSleepSchedule:(HKSPSleepSchedule *)arg2;
- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 didUpdateSleepScheduleModel:(HKSPSleepScheduleModel *)arg2;
- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 didUpdateSleepSettings:(HKSPSleepSettings *)arg2;

@end
