
@interface HealthRecordsUI.BloodPressureChartConfiguration : NSObject <HealthRecordsUI.MedicalRecordChartConfiguration>

@property (nonatomic, readonly) Class chartControllerClass;
@property (nonatomic, readonly) <_TtP15HealthRecordsUI33MedicalRecordChartDataTransformer_> *dataTransformer;
@property (nonatomic, readonly) bool shouldShowOutOfRangeOverlay;

- (Class)chartControllerClass;
- (id)dataTransformer;
- (id)init;
- (bool)shouldShowOutOfRangeOverlay;

@end
