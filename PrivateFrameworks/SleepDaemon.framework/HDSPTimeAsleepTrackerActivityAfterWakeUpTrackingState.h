
@interface HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState : HDSPTimeAsleepTrackerActivityTrackingState

- (void)activityDetectedOnDate:(id)arg1;
- (void)appLaunchedOnDate:(id)arg1;
- (void)didEnter;
- (void)didExit;
- (double)expirationDuration;
- (bool)inExpectedAutoTrackingWindow;
- (void)stateDidExpire;
- (id)stateName;

@end
