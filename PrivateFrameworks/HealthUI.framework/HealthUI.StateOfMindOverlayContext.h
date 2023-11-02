
@interface HealthUI.StateOfMindOverlayContext : NSObject <HKOverlayContext> {
    void accessibilityIdentifier_;
    void currentContextItem;
    void overlayChartController;
    void overlayDisplayType;
    void overlayPredicate;
}

- (void).cxx_destruct;
- (id)contextItemForLastUpdate;
- (id)init;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end
