
@interface SBSystemGestureMetric : SBAnalyticsStateMachineEventHandler {
    unsigned long long  _beganLocation;
    PETGoalConversionEventTracker * _goalTracker;
}

- (void).cxx_destruct;
- (id)initForType:(unsigned long long)arg1 parentMetric:(id)arg2;

@end
