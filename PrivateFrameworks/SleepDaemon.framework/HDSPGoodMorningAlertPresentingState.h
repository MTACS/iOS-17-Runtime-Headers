
@interface HDSPGoodMorningAlertPresentingState : HDSPGoodMorningAlertStateMachineState

- (void)didEnter;
- (void)didExit;
- (double)expirationDuration;
- (bool)schedulesExpiration;
- (void)sleepScheduleStateChangedToBedtime;
- (void)stateDidExpire;
- (id)stateName;
- (void)updateState;

@end
