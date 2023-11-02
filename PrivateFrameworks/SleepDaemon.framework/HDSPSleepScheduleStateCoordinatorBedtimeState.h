
@interface HDSPSleepScheduleStateCoordinatorBedtimeState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)expirationDate;
- (unsigned long long)scheduleState;
- (id)stateName;
- (void)wakeTimeReached;
- (void)wakeUpConfirmed;

@end
