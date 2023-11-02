
@protocol HKSPPersistentStateMachineDelegate <HKSPStateMachineDelegate>

@required

- (void)scheduleStateExpiration;
- (void)unscheduleStateExpiration;

@end
