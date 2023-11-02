
@interface HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries

@property (nonatomic, readonly) struct { struct { struct HKGraphSeriesDataBlockPath { long long x_1_2_1; long long x_1_2_2; long long x_1_2_3; } x_1_1_1; long long x_1_1_2; } x1; struct { struct HKGraphSeriesDataBlockPath { long long x_1_2_1; long long x_1_2_2; long long x_1_2_3; } x_2_1_1; long long x_2_1_2; } x2; } selectedPathRange;

- (id)init;
- (struct { struct { struct HKGraphSeriesDataBlockPath { long long x_1_2_1; long long x_1_2_2; long long x_1_2_3; } x_1_1_1; long long x_1_1_2; } x1; struct { struct HKGraphSeriesDataBlockPath { long long x_1_2_1; long long x_1_2_2; long long x_1_2_3; } x_2_1_1; long long x_2_1_2; } x2; })selectedPathRange;

@end
