
@interface HDSPSleepScheduleStateCoordinatorWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)bedtimeReached;
- (id)expirationDate;
- (unsigned long long)scheduleState;
- (id)stateName;
- (void)windDownReached;

@end
