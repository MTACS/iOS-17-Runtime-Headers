
@interface _HKSleepDurationAverageContext : NSObject <HKOverlayContext> {
    _HKSleepDurationAverageFormatter * _averageChartFormatter;
    HKDisplayType * _baseDisplayType;
    <HKOverlaySleepRoomContextChangeDelegate> * _contextChangeDelegate;
    HKDisplayTypeContextItem * _lastUpdatedItem;
    _HKSleepDurationAverageSeries * _overlayAverageSeries;
    HKInteractiveChartOverlayViewController * _overlayChartController;
    HKDisplayType * _overlayDisplayType;
    bool  _useInBedAverage;
}

@property (nonatomic, readonly) _HKSleepDurationAverageFormatter *averageChartFormatter;
@property (nonatomic, readonly) HKDisplayType *baseDisplayType;
@property (nonatomic, readonly) <HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedItem;
@property (nonatomic, readonly) _HKSleepDurationAverageSeries *overlayAverageSeries;
@property (nonatomic, readonly) HKInteractiveChartOverlayViewController *overlayChartController;
@property (nonatomic, readonly) HKDisplayType *overlayDisplayType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useInBedAverage;

- (void).cxx_destruct;
- (id)_averagePhraseFromAverageValue:(double)arg1 shortForm:(bool)arg2 timeScope:(long long)arg3;
- (double)_averageValueFromChartPoints:(id)arg1 useInBedAverage:(bool)arg2;
- (id)_contextItemWithAverageString:(id)arg1 timeScope:(long long)arg2;
- (id)_findSleepDurationSeriesForTimeScope:(long long)arg1;
- (void)_updateRangeDataWithChartPoints:(id)arg1 useInBedAverage:(bool)arg2 isHighlighted:(bool)arg3 timeScope:(long long)arg4;
- (id)averageChartFormatter;
- (id)baseDisplayType;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (id)contextChangeDelegate;
- (id)contextItemForLastUpdate;
- (id)initWithBaseDisplayType:(id)arg1 overlayDisplayType:(id)arg2 overlayChartController:(id)arg3 useInBedAverage:(bool)arg4 contextChangeDelegate:(id)arg5 overlayAverageSeries:(id)arg6 averageChartFormatter:(id)arg7;
- (id)lastUpdatedItem;
- (id)overlayAverageSeries;
- (id)overlayChartController;
- (id)overlayDisplayType;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (void)overlayStateWillChange:(bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (void)setLastUpdatedItem:(id)arg1;
- (bool)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;
- (bool)useInBedAverage;

@end
