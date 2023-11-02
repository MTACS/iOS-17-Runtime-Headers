
@interface _HKCardioFitnessLevelContext : _HKCardioFitnessOverlayContext {
    HKDisplayType * _baseDisplayType;
    long long  _cardioFitnessLevel;
    HKGraphSeries * _cardioFitnessLevelSeries;
    <HKDateRangeDataSourceDelegate> * _dataSourceDelegate;
    HKHealthStore * _healthStore;
    HKInteractiveChartDisplayType * _overlayDisplayType;
    HKUnit * _unit;
}

@property (nonatomic, retain) HKDisplayType *baseDisplayType;
@property (nonatomic) long long cardioFitnessLevel;
@property (nonatomic, retain) HKGraphSeries *cardioFitnessLevelSeries;
@property (nonatomic, retain) <HKDateRangeDataSourceDelegate> *dataSourceDelegate;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKInteractiveChartDisplayType *overlayDisplayType;
@property (nonatomic, retain) HKUnit *unit;

- (void).cxx_destruct;
- (id)_makeGraphSeriesWithDataSource:(id)arg1 baseDisplayType:(id)arg2;
- (void)_updateContextItemWithChartPointCountForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(id /* block */)arg3;
- (void)_updateContextItemWithSampleCountForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(id /* block */)arg3;
- (id)baseDisplayType;
- (long long)cardioFitnessLevel;
- (id)cardioFitnessLevelSeries;
- (id)dataSourceDelegate;
- (id)healthStore;
- (id)initWithMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 baseDisplayType:(id)arg4 cardioFitnessLevel:(long long)arg5;
- (id)overlayDisplayType;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (void)setBaseDisplayType:(id)arg1;
- (void)setCardioFitnessLevel:(long long)arg1;
- (void)setCardioFitnessLevelSeries:(id)arg1;
- (void)setDataSourceDelegate:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setOverlayDisplayType:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)unit;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end
