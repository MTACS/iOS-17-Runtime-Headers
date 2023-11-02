
@protocol HDSPGoodMorningAlertStateMachineEventHandler <HKSPPersistentStateMachineEventHandler>

@required

- (void)sleepScheduleStateChangedToBedtime;
- (void)sleepScheduleStateChangedToWakeUp;

@end
