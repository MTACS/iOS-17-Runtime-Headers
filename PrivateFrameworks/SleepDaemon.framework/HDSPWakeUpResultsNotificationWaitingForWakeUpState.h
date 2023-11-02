
@interface HDSPWakeUpResultsNotificationWaitingForWakeUpState : HDSPWakeUpResultsNotificationStateMachineState

- (void)_transitionToDelayingForTrackingState;
- (id)stateName;
- (void)wakeUpDidOccur;

@end
