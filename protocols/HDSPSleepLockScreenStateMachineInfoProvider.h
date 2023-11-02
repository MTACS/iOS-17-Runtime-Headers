
@protocol HDSPSleepLockScreenStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@required

- (NSDate *)currentDate;
- (bool)inUnscheduledSleepMode;
- (bool)isLockScreenActive;
- (long long)sleepMode;
- (HKSPSleepScheduleModel *)sleepScheduleModel;

@end
