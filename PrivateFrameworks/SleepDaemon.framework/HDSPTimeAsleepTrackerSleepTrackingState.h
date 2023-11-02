
@interface HDSPTimeAsleepTrackerSleepTrackingState : HDSPTimeAsleepTrackerStateMachineState

+ (unsigned long long)defaultEndReason;
+ (unsigned long long)defaultStartReason;

- (void)didEnter;
- (void)didExit;
- (bool)isSleepTrackingState;
- (void)sleepSessionEndRequestedInternally;

@end
