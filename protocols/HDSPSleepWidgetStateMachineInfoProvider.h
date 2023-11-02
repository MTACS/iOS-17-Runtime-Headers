
@protocol HDSPSleepWidgetStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@required

- (NSDate *)currentDate;
- (bool)inUnscheduledSleepMode;
- (bool)isOnboarded;
- (HKSPSleepScheduleModel *)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;

@end
