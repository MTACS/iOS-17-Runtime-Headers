
@interface HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSourceProtocol> {
    void dateGroup;
    void dividerLabel;
    void monthYearLabel;
    void timeLabel;
}

- (void).cxx_destruct;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)init;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (bool)showSeparators;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end
