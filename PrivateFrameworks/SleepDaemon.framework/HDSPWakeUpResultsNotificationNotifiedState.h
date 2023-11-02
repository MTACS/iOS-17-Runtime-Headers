
@interface HDSPWakeUpResultsNotificationNotifiedState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didEnter;
- (void)didPostResultsNotification;
- (id)expirationDate;
- (id)stateName;

@end
