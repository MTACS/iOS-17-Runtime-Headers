
@protocol HDSPWakeUpResultsNotificationStateMachineEventHandler <HKSPPersistentStateMachineEventHandler>

@required

- (void)didPostResultsNotification;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)queryDidComplete;
- (void)queryDidFailWithError:(NSError *)arg1;
- (void)retryAttemptEventDue;
- (void)wakeUpDidOccur;

@end
