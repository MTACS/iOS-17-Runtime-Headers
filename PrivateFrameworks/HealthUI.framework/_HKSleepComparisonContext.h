
@interface _HKSleepComparisonContext : HKOverlayRoomStackedContext {
    <HKOverlaySleepRoomContextChangeDelegate> * _contextChangeDelegate;
}

@property (nonatomic, readonly) <HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate;

- (void).cxx_destruct;
- (id)_defaultStackedInteractiveChartDisplayTypeForSampleType:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 formatterTimeScope:(long long)arg4;
- (id)_generateSleepDistributionDisplayTypeForStackedSampleType:(id)arg1 currentCalendarOverride:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4;
- (bool)_sampleTypeShouldUseSleepQuantityDistribution:(id)arg1;
- (id)contextChangeDelegate;
- (id)initWithStackedSampleType:(id)arg1 currentCalendarOverride:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 contextChangeDelegate:(id)arg5 primarySleepDisplayType:(id)arg6;
- (void)overlayStateWillChange:(bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (void)stackedOverlayStateWillChange:(bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (bool)unselectedContextShouldUseContextBaseType;

@end
