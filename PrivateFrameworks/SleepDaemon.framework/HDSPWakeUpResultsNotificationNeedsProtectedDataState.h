
@interface HDSPWakeUpResultsNotificationNeedsProtectedDataState : HDSPWakeUpResultsNotificationStateMachineState

- (void)_transitionToQueryingState;
- (void)didEnter;
- (void)didExit;
- (id)expirationDate;
- (void)protectedHealthDataDidBecomeAvailable;
- (id)stateName;

@end
