
@interface _HKSleepDurationAmountContext : NSObject <HKOverlayContext> {
    HKDisplayType * _baseDisplayType;
    <HKOverlaySleepRoomContextChangeDelegate> * _contextChangeDelegate;
    HKDisplayTypeContextItem * _lastUpdatedItem;
    HKInteractiveChartOverlayViewController * _overlayChartController;
}

@property (nonatomic, readonly) HKDisplayType *baseDisplayType;
@property (nonatomic, readonly) <HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedItem;
@property (nonatomic, readonly) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_amountStringFromCounts:(id)arg1 timeScope:(long long)arg2;
- (id)_contextItemWithAmountString:(id)arg1;
- (id)_daysWithSleepDataFromChartPoints:(id)arg1;
- (id)baseDisplayType;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (id)contextChangeDelegate;
- (id)contextItemForLastUpdate;
- (id)initWithBaseDisplayType:(id)arg1 overlayChartController:(id)arg2 contextChangeDelegate:(id)arg3;
- (id)lastUpdatedItem;
- (id)overlayChartController;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (void)setLastUpdatedItem:(id)arg1;
- (bool)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end
