
@protocol HDSPWakeUpResultsNotificationStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@required

- (NSDate *)currentDate;
- (bool)isWakeUpResultsNotificationEnabled;
- (NSDateInterval *)notificationAttemptWindowForWakeUpBeforeDate:(NSDate *)arg1;

@end
