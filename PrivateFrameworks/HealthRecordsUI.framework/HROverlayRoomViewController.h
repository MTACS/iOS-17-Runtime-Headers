
@interface HROverlayRoomViewController : HKOverlayRoomViewController {
    <_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_> * _configuration;
    NSArray * _displayTypes;
    bool  _hasChart;
    _TtC15HealthRecordsUI28MedicalRecordChartDataSource * _masterDataSource;
    _TtC15HealthRecordsUI28MedicalRecordChartDataSource * _noRangeDataSource;
    HKConcept * _ontologyConcept;
    _TtC15HealthRecordsUI28MedicalRecordChartDataSource * _outOfRangeDataSource;
    NSArray * _seriesDataSources;
    HKUserDomainConcept * _userConcept;
}

@property (nonatomic, retain) <_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_> *configuration;
@property (nonatomic, copy) NSArray *displayTypes;
@property (nonatomic, readonly) bool hasChart;
@property (nonatomic, retain) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *masterDataSource;
@property (nonatomic, retain) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *noRangeDataSource;
@property (nonatomic, retain) HKConcept *ontologyConcept;
@property (nonatomic, retain) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *outOfRangeDataSource;
@property (nonatomic, copy) NSArray *seriesDataSources;
@property (nonatomic, retain) HKUserDomainConcept *userConcept;

+ (id)_verticalAxis;
+ (void)determineChartabilityOfOntologyConcept:(id)arg1 withApplicationItems:(id)arg2 completion:(id /* block */)arg3;
+ (void)determineChartabilityOfUserConcept:(id)arg1 records:(id)arg2 withApplicationItems:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)configuration;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)displayTypes;
- (bool)hasChart;
- (id)initWithOntologyConcept:(id)arg1 configuration:(id)arg2 displayDate:(id)arg3 masterDataSource:(id)arg4 seriesDataSources:(id)arg5 outOfRangeDataSource:(id)arg6 noRangeDataSource:(id)arg7 overlayMode:(long long)arg8 applicationItems:(id)arg9;
- (id)initWithUserConcept:(id)arg1 configuration:(id)arg2 displayDate:(id)arg3 masterDataSource:(id)arg4 seriesDataSources:(id)arg5 outOfRangeDataSource:(id)arg6 noRangeDataSource:(id)arg7 overlayMode:(long long)arg8 applicationItems:(id)arg9;
- (id)initialSelectedContextForMode:(long long)arg1;
- (id)masterDataSource;
- (id)noRangeDataSource;
- (id)ontologyConcept;
- (id)outOfRangeDataSource;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)seriesDataSources;
- (void)setConfiguration:(id)arg1;
- (void)setDisplayTypes:(id)arg1;
- (void)setMasterDataSource:(id)arg1;
- (void)setNoRangeDataSource:(id)arg1;
- (void)setOntologyConcept:(id)arg1;
- (void)setOutOfRangeDataSource:(id)arg1;
- (void)setSeriesDataSources:(id)arg1;
- (void)setUserConcept:(id)arg1;
- (bool)supportsShowAllFilters;
- (id)userConcept;

@end
