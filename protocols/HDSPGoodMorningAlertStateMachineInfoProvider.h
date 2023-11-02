
@protocol HDSPGoodMorningAlertStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@required

- (NSDate *)currentDate;
- (bool)goodMorningAlertEnabled;
- (bool)isAppleWatch;
- (bool)isOnCharger;
- (HKSPSleepScheduleModel *)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;

@end
