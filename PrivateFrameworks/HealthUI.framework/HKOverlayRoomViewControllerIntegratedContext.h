
@interface HKOverlayRoomViewControllerIntegratedContext : NSObject <HKOverlayContext> {
    HKOverlayRoomApplicationItems * _applicationItems;
    NSMutableDictionary * _displayTypesForTimeScopes;
    HKDisplayTypeContextItem * _lastUpdatedContextItem;
    HKSampleType * _monitoringSampleType;
    HKInteractiveChartOverlayViewController * _overlayChartController;
    long long  _overlayMode;
}

@property (nonatomic, retain) HKOverlayRoomApplicationItems *applicationItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *displayTypesForTimeScopes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedContextItem;
@property (nonatomic, retain) HKSampleType *monitoringSampleType;
@property (nonatomic, retain) HKInteractiveChartOverlayViewController *overlayChartController;
@property (nonatomic) long long overlayMode;
@property (readonly) Class superclass;

+ (id)distributionContextWithStyle:(long long)arg1 namedPredicate:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 optionalDelegate:(id)arg5 options:(long long)arg6 mode:(long long)arg7;
+ (id)quantityContextWithIdentifier:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 seriesOptions:(long long)arg5 mode:(long long)arg6;
+ (id)quantityContextWithIdentifier:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 seriesOptions:(long long)arg5 mode:(long long)arg6 optionalBaseDisplayType:(id)arg7;

- (void).cxx_destruct;
- (id)_buildMonitoringSampleType;
- (id)_minMaxValueFromChartPoints:(id)arg1 displayType:(id)arg2 unitPreferenceController:(id)arg3 isUnitIncludedInValue:(bool*)arg4;
- (bool)_obsoleteDateRange:(id)arg1;
- (id)applicationItems;
- (id)buildContextItemWithValue:(id)arg1 unit:(id)arg2 valueContext:(id)arg3 forTimeScope:(long long)arg4 isUnitIncludedInValue:(bool)arg5;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)arg1;
- (id)contextItemForLastUpdate;
- (id)displayTypesForTimeScopes;
- (void)fetchCachedDataForTimeScope:(long long)arg1 resolution:(long long)arg2 dateInterval:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithOverlayChartController:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (id)lastUpdatedContextItem;
- (id)monitoringSampleType;
- (id)overlayChartController;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (long long)overlayMode;
- (id)representativeDisplayType;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (void)setApplicationItems:(id)arg1;
- (void)setDisplayTypesForTimeScopes:(id)arg1;
- (void)setLastUpdatedContextItem:(id)arg1;
- (void)setMonitoringSampleType:(id)arg1;
- (void)setOverlayChartController:(id)arg1;
- (void)setOverlayMode:(long long)arg1;
- (id)unitString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 isUnitIncludedInValue:(bool*)arg4;

@end
