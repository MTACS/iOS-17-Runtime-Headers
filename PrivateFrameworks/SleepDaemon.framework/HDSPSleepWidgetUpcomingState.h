
@interface HDSPSleepWidgetUpcomingState : HDSPSleepWidgetStateMachineState

- (bool)schedulesExpiration;
- (id)stateName;
- (long long)widgetState;

@end
