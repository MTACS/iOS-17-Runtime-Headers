
@interface HKSleepStagePercentageContext : NSObject <HKOverlayContext> {
    HKDisplayType * _baseDisplayType;
    <HKOverlaySleepRoomContextChangeDelegate> * _contextChangeDelegate;
    HKDisplayTypeContextItem * _lastUpdatedItem;
    HKInteractiveChartOverlayViewController * _overlayChartController;
    HKDisplayType * _overlayDisplayType;
    NSNumberFormatter * _percentageFormatter;
    long long  _sleepStage;
}

@property (nonatomic, readonly) HKDisplayType *baseDisplayType;
@property (nonatomic, readonly) <HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedItem;
@property (nonatomic, readonly) HKInteractiveChartOverlayViewController *overlayChartController;
@property (nonatomic, readonly) HKDisplayType *overlayDisplayType;
@property (nonatomic, readonly) NSNumberFormatter *percentageFormatter;
@property (nonatomic, readonly) long long sleepStage;
@property (readonly) Class superclass;

+ (double)roundedSleepStageDurationPercentageFromDurations:(id)arg1 withCategoryValue:(long long)arg2;

- (void).cxx_destruct;
- (double)_computePercentageValueFromChartPoints:(id)arg1;
- (id)_contextItemWithPercentageString:(id)arg1 timeScope:(long long)arg2;
- (id)_percentageStringFromValue:(double)arg1;
- (id)baseDisplayType;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (id)contextChangeDelegate;
- (id)contextItemForLastUpdate;
- (id)initWithSleepStage:(long long)arg1 baseDisplayType:(id)arg2 overlayDisplayType:(id)arg3 overlayChartController:(id)arg4 contextChangeDelegate:(id)arg5;
- (id)lastUpdatedItem;
- (id)overlayChartController;
- (id)overlayDisplayType;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (void)overlayStateDidChange:(bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (void)overlayStateWillChange:(bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (id)percentageFormatter;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (void)setLastUpdatedItem:(id)arg1;
- (long long)sleepStage;
- (bool)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end
