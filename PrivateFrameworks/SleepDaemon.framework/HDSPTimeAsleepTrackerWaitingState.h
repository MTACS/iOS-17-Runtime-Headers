
@interface HDSPTimeAsleepTrackerWaitingState : HDSPTimeAsleepTrackerStateMachineState

- (void)bedtimeOccurred;
- (id)expirationDate;
- (bool)schedulesExpiration;
- (void)startWakeDetectionOccurred;
- (void)stateDidExpire;
- (id)stateName;
- (void)userEngagedSleepMode;

@end
