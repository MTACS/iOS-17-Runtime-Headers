
@interface HealthRecordsUI.MedicalRecordChartabilityResult : NSObject {
    void configuration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  latestChartableDate;
    void masterDataSource;
    void noRangeDataSource;
    void outOfRangeDataSource;
    void seriesDataSources;
}

@property (nonatomic, readonly) <_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_> *configuration;
@property (nonatomic, readonly) NSDate *latestChartableDate;
@property (nonatomic, readonly) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *masterDataSource;
@property (nonatomic, readonly) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *noRangeDataSource;
@property (nonatomic, readonly) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *outOfRangeDataSource;
@property (nonatomic, readonly) NSArray *seriesDataSources;
@property (nonatomic, readonly) bool shouldProduceAtLeastOneOverlay;

- (void).cxx_destruct;
- (id)configuration;
- (id)init;
- (id)latestChartableDate;
- (id)masterDataSource;
- (id)noRangeDataSource;
- (id)outOfRangeDataSource;
- (id)seriesDataSources;
- (bool)shouldProduceAtLeastOneOverlay;

@end
