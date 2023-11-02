
@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)bedtimeReached;
- (void)didExit;
- (id)expirationDate;
- (unsigned long long)scheduleState;
- (void)significantScheduleChangeOccurred:(unsigned long long)arg1;
- (id)stateName;
- (void)updateStateForcibly:(bool)arg1;
- (void)wakeUpConfirmed;
- (void)windDownReached;

@end
