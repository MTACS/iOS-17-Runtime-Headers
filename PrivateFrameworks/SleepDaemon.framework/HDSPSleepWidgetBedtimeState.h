
@interface HDSPSleepWidgetBedtimeState : HDSPSleepWidgetStateMachineState

- (double)expirationDuration;
- (bool)schedulesExpiration;
- (void)stateDidExpire;
- (id)stateName;
- (long long)widgetState;

@end
