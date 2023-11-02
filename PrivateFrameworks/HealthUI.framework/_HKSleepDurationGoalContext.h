
@interface _HKSleepDurationGoalContext : NSObject <HKOverlayContext> {
    HKDisplayType * _baseDisplayType;
    <HKOverlaySleepRoomContextChangeDelegate> * _contextChangeDelegate;
    bool  _isPrimaryContext;
    HKDisplayTypeContextItem * _lastUpdatedItem;
    HKSampleType * _monitoringSampleType;
    HKInteractiveChartOverlayViewController * _overlayChartController;
    HKDisplayType * _overlayDisplayType;
    long long  _overlayMode;
}

@property (nonatomic, readonly) HKDisplayType *baseDisplayType;
@property (nonatomic, readonly) <HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPrimaryContext;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedItem;
@property (nonatomic, retain) HKSampleType *monitoringSampleType;
@property (nonatomic, readonly) HKInteractiveChartOverlayViewController *overlayChartController;
@property (nonatomic, readonly) HKDisplayType *overlayDisplayType;
@property (nonatomic, readonly) long long overlayMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_durationContextItemWithGoal:(id)arg1;
- (id)_goalGivenChartPoints:(id)arg1;
- (id)baseDisplayType;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (id)contextChangeDelegate;
- (id)contextItemForLastUpdate;
- (id)initWithBaseDisplayType:(id)arg1 overlayDisplayType:(id)arg2 overlayChartController:(id)arg3 overlayMode:(long long)arg4 isPrimaryContext:(bool)arg5 contextChangeDelegate:(id)arg6;
- (bool)isPrimaryContext;
- (id)lastUpdatedItem;
- (id)monitoringSampleType;
- (id)overlayChartController;
- (id)overlayDisplayType;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (long long)overlayMode;
- (void)overlayStateWillChange:(bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (void)setLastUpdatedItem:(id)arg1;
- (void)setMonitoringSampleType:(id)arg1;
- (bool)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end
