
@interface HDSPSleepScheduleStateCoordinatorInitialState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (unsigned long long)scheduleState;
- (id)stateName;
- (void)updateStateForcibly:(bool)arg1;

@end
