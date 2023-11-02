
@interface HDSPTimeAsleepTrackerManualTrackingState : HDSPTimeAsleepTrackerSleepTrackingState

+ (unsigned long long)defaultEndReason;
+ (unsigned long long)defaultStartReason;

- (void)bedtimeOccurred;
- (id)expirationDate;
- (bool)schedulesExpiration;
- (void)sleepModeExitedWithReason:(unsigned long long)arg1;
- (void)startWakeDetectionOccurred;
- (void)stateDidExpire;
- (id)stateName;

@end
