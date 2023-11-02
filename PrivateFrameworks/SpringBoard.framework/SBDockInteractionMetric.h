
@interface SBDockInteractionMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker * _dismissTracker;
    unsigned long long  _locationAtSwipeIn;
    PETGoalConversionEventTracker * _swipeInTracker;
}

- (void).cxx_destruct;
- (id)init;

@end
