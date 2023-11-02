
@interface HDSPSleepScheduleStateCoordinatorWindDownState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)bedtimeReached;
- (id)expirationDate;
- (unsigned long long)scheduleState;
- (id)stateName;

@end
