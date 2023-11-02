
@interface HealthRecordsUI.MedicalRecordChartOverlayContext : NSObject <HKOverlayContext> {
    void cachedDataSource;
    void cachedItem;
    void cachedOverlayDisplayType;
    void dataSource;
    void defaultColors;
    void selectedColors;
    void title;
    void verticalAxis;
}

- (void).cxx_destruct;
- (id)contextItemForLastUpdate;
- (id)init;
- (id)initWithTitle:(id)arg1 dataSource:(id)arg2 defaultColors:(id)arg3 selectedColors:(id)arg4 verticalAxis:(id)arg5;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end
