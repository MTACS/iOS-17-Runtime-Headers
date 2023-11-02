
@interface _HKBloodGlucosePercentInRangeContext : NSObject <HKOverlayContext> {
    HKInteractiveChartDisplayType * _baseDisplayType;
    long long  _classification;
    HKDisplayTypeController * _displayTypeController;
    HKDisplayTypeContextItem * _lastUpdatedItem;
    HKInteractiveChartOverlayViewController * _overlayChartController;
    NSNumberFormatter * _percentageFormatter;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, readonly) HKInteractiveChartDisplayType *baseDisplayType;
@property (nonatomic, readonly) long long classification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedItem;
@property (nonatomic, readonly) HKInteractiveChartOverlayViewController *overlayChartController;
@property (nonatomic, readonly, copy) NSNumberFormatter *percentageFormatter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)_buildAccessibilityIdentifier;
- (id)_buildTitleString;
- (double)_fractionForClassificationFromUserInfo:(id)arg1;
- (id)_fractionRangeFromChartPoints:(id)arg1;
- (id)_stringFromFractionRange:(id)arg1;
- (id)_stringFromFractionRangeBound:(id)arg1;
- (void)_updateContextItemFromChartPoints:(id)arg1;
- (id)baseDisplayType;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (long long)classification;
- (id)contextItemForLastUpdate;
- (id)displayTypeController;
- (id)initWithBaseDisplayType:(id)arg1 classification:(long long)arg2 overlayChartController:(id)arg3 unitController:(id)arg4 displayTypeController:(id)arg5;
- (id)lastUpdatedItem;
- (id)overlayChartController;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (id)percentageFormatter;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (void)setLastUpdatedItem:(id)arg1;
- (id)unitController;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end
