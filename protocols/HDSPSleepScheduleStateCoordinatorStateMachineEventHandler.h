
@protocol HDSPSleepScheduleStateCoordinatorStateMachineEventHandler <HKSPStateMachineEventHandler>

@required

- (void)bedtimeReached;
- (void)scheduleModelChanged:(HDSPSleepScheduleModelChangeEvaluation *)arg1;
- (void)significantTimeChange;
- (void)timeZoneChange;
- (void)wakeTimeReached;
- (void)wakeUpConfirmed;
- (void)windDownReached;

@end
