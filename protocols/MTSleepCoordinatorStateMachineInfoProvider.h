
@protocol MTSleepCoordinatorStateMachineInfoProvider <MTStateMachineInfoProvider>

@required

- (NSDate *)currentDate;
- (MTAlarm *)sleepAlarm;
- (unsigned long long)sleepTimeOutMinutes;

@end
