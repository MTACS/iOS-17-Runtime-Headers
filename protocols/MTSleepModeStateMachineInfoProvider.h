
@protocol MTSleepModeStateMachineInfoProvider <MTStateMachineInfoProvider>

@required

- (NSDate *)currentDate;
- (bool)isSleepModeEnabled:(bool*)arg1;
- (bool)isUserAsleep;
- (NSDate *)keepOffUntilDate;
- (MTAlarm *)sleepAlarm;

@end
