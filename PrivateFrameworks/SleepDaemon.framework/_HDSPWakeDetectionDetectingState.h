
@interface _HDSPWakeDetectionDetectingState : HDSPWakeDetectionStateMachineState

@property (nonatomic, readonly) unsigned long long activeTypes;

- (bool)_isActivityDateInDetectionWindow:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)activeTypes;
- (void)didEnter;
- (void)didExit;
- (void)earlyWakeUpWasNotifiedRemotely;
- (bool)isDetectingState;
- (void)wakeupEventDetected:(unsigned long long)arg1 date:(id)arg2;

@end
