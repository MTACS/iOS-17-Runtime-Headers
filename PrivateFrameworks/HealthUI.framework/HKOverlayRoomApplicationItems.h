
@interface HKOverlayRoomApplicationItems : NSObject {
    HKChartDataCacheController * _chartDataCacheController;
    HKDateCache * _dateCache;
    HKDisplayTypeController * _displayTypeController;
    HKHealthStore * _healthStore;
    HKSampleTypeDateRangeController * _sampleDateRangeController;
    HKSampleTypeUpdateController * _sampleTypeUpdateController;
    HKSelectedTimeScopeController * _timeScopeController;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, retain) HKChartDataCacheController *chartDataCacheController;
@property (nonatomic, retain) HKDateCache *dateCache;
@property (nonatomic, retain) HKDisplayTypeController *displayTypeController;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKSampleTypeDateRangeController *sampleDateRangeController;
@property (nonatomic, retain) HKSampleTypeUpdateController *sampleTypeUpdateController;
@property (nonatomic, retain) HKSelectedTimeScopeController *timeScopeController;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;

+ (id)applicationItemsWithItems:(id)arg1;

- (void).cxx_destruct;
- (id)chartDataCacheController;
- (id)dateCache;
- (id)displayTypeController;
- (id)healthStore;
- (id)sampleDateRangeController;
- (id)sampleTypeUpdateController;
- (void)setChartDataCacheController:(id)arg1;
- (void)setDateCache:(id)arg1;
- (void)setDisplayTypeController:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setSampleDateRangeController:(id)arg1;
- (void)setSampleTypeUpdateController:(id)arg1;
- (void)setTimeScopeController:(id)arg1;
- (void)setUnitController:(id)arg1;
- (id)timeScopeController;
- (id)unitController;

@end
