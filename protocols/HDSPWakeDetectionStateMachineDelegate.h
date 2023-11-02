
@protocol HDSPWakeDetectionStateMachineDelegate <HKSPPersistentStateMachineDelegate>

@required

- (void)postWakeDetectionNotification:(unsigned long long)arg1;
- (void)startWakeDetection:(unsigned long long)arg1;
- (void)stopWakeDetection;

@end
