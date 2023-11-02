
@interface HDSPSleepWidgetWaitingState : HDSPSleepWidgetStateMachineState

- (id)expirationDate;
- (bool)schedulesExpiration;
- (void)stateDidExpire;
- (id)stateName;
- (long long)widgetState;

@end
