
@protocol HealthRecordsUI.MedicalRecordChartDataTransformer

@required

- (HKInteractiveChartDisplayType *)chartDisplayTypeWith:(HKGraphSeries *)arg1 displayName:(NSString *)arg2 unitName:(NSString *)arg3;
- (<HKChartPoint> *)chartPointFor:(HKChartableCodedQuantitySet *)arg1 in:(HKUnit *)arg2 with:(long long)arg3 dataSourceType:(long long)arg4;
- (HKGraphSeries *)graphSeriesWith:(HKUIMetricColors *)arg1;

@end
