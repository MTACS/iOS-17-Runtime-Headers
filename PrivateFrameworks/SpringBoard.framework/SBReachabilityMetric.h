
@interface SBReachabilityMetric : SBAnalyticsStateMachineEventHandler {
    unsigned long long  _activateLocation;
    double  _activateTimestamp;
    unsigned long long  _deactivationReason;
    PETDistributionEventTracker * _tracker;
}

- (void).cxx_destruct;
- (id)init;

@end
