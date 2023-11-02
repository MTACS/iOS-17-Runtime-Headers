
@protocol HDSPWakeDetectionStateMachineEventHandler <HKSPPersistentStateMachineEventHandler>

@required

- (void)earlyWakeUpWasNotifiedRemotely;
- (void)wakeupEventDetected:(unsigned long long)arg1 date:(NSDate *)arg2;

@end
