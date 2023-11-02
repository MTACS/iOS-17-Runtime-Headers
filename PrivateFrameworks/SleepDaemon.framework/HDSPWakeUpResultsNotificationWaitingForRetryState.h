
@interface HDSPWakeUpResultsNotificationWaitingForRetryState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didEnter;
- (void)didExit;
- (id)expirationDate;
- (void)retryAttemptEventDue;
- (id)stateName;

@end
