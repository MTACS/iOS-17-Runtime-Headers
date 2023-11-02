
@interface SBIconDeleteMetric : SBAnalyticsStateMachineEventHandler {
    NSString * _location;
    unsigned long long  _presentedOptions;
    PETDistributionEventTracker * _tracker;
}

- (void).cxx_destruct;
- (id)_propertyValuesForTracker;
- (id)init;

@end
