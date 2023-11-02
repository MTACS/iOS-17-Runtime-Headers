
@interface HDSPTimeAsleepTrackerActivityTrackingState : HDSPTimeAsleepTrackerAutoTrackingState

- (void)activityDetectedOnDate:(id)arg1;
- (void)didEnter;
- (void)didExit;
- (bool)inExpectedAutoTrackingWindow;
- (bool)isActivityTrackingState;
- (id)stateName;

@end
