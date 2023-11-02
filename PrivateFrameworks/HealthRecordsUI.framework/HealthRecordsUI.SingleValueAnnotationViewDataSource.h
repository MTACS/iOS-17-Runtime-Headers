
@interface HealthRecordsUI.SingleValueAnnotationViewDataSource : HealthRecordsUI.MedicalRecordAnnotationViewDataSource {
    void constraints;
    void referenceRangeView;
    void valueLabel;
    void valueRangeGroup;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateUsing:(id)arg1;
- (void)updateUsing:(id)arg1 valueRange:(id)arg2 dateRange:(id)arg3 timeScope:(long long)arg4;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end
