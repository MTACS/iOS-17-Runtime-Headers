
@interface HDSPTimeAsleepTrackerInternalEndState : HDSPTimeAsleepTrackerStateMachineState

- (double)expirationDuration;
- (void)sleepSessionFinished;
- (id)stateName;

@end
