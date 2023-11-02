
@interface SBIconFlockingMetric : SBAnalyticsStateMachineEventHandler {
    PETDistributionEventTracker * _flockingDistributionTracker;
    PETScalarEventTracker * _flockingUsageTracker;
}

- (void).cxx_destruct;
- (id)init;

@end
