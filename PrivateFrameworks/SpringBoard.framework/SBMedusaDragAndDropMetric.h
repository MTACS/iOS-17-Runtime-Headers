
@interface SBMedusaDragAndDropMetric : SBAnalyticsStateMachineEventHandler {
    unsigned long long  _activateLocation;
    PETGoalConversionEventTracker * _medusaDropTracker;
}

- (void).cxx_destruct;
- (id)init;

@end
