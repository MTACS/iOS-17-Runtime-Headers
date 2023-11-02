
@interface HDSPSleepWidgetGreetingState : HDSPSleepWidgetStateMachineState

- (double)expirationDuration;
- (bool)reloadsWidgetOnModelChange;
- (bool)reloadsWidgetOnTimeChange;
- (bool)schedulesExpiration;
- (void)stateDidExpire;
- (id)stateName;
- (long long)widgetState;

@end
