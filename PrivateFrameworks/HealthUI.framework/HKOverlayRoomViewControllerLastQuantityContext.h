
@interface HKOverlayRoomViewControllerLastQuantityContext : NSObject <HKOverlayContext> {
    HKOverlayRoomApplicationItems * _applicationItems;
    bool  _attenuated;
    HKInteractiveChartOverlayNamedDataSource * _cacheDataSource;
    HKDisplayTypeContextItem * _lastUpdatedContextItem;
    HKInteractiveChartOverlayViewController * _overlayChartController;
    HKDisplayType * _overlayDisplayType;
    long long  _overlayMode;
}

@property (nonatomic, retain) HKOverlayRoomApplicationItems *applicationItems;
@property (nonatomic) bool attenuated;
@property (nonatomic, retain) HKInteractiveChartOverlayNamedDataSource *cacheDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedContextItem;
@property (nonatomic, retain) HKInteractiveChartOverlayViewController *overlayChartController;
@property (nonatomic, retain) HKDisplayType *overlayDisplayType;
@property (nonatomic) long long overlayMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildContextWithTime:(id)arg1 value:(id)arg2 isUnitIncludedInValue:(bool)arg3;
- (id)_buildFullTitle:(id)arg1;
- (id)_buildLastQuantityDisplayType;
- (id)_buildLastValueDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id)_colorForDisplayType:(id)arg1;
- (id)_stringValueFromQuantity:(id)arg1 unit:(id)arg2 isUnitIncludedInValue:(bool*)arg3;
- (id)applicationItems;
- (bool)attenuated;
- (id)cacheDataSource;
- (id)contextItemForLastUpdate;
- (id)initWithOverlayChartController:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (id)initWithOverlayChartController:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 attenuated:(bool)arg4;
- (void)invalidateContextItem;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedContextItem;
- (id)overlayChartController;
- (id)overlayDisplayType;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (long long)overlayMode;
- (void)overlayWasExplicitlySelected:(id)arg1 chartController:(id)arg2;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (void)setApplicationItems:(id)arg1;
- (void)setAttenuated:(bool)arg1;
- (void)setCacheDataSource:(id)arg1;
- (void)setLastUpdatedContextItem:(id)arg1;
- (void)setOverlayChartController:(id)arg1;
- (void)setOverlayDisplayType:(id)arg1;
- (void)setOverlayMode:(long long)arg1;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end
