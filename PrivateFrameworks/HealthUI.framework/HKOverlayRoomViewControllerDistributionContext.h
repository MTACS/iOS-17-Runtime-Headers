
@interface HKOverlayRoomViewControllerDistributionContext : HKOverlayRoomViewControllerIntegratedContext {
    long long  _distributionStyle;
    HKInteractiveChartOverlayPredicate * _namedPredicate;
    <HKOverlayRoomViewControllerIntegratedContextDelegate> * _optionalDelegate;
    long long  _options;
    NSDictionary * _styleToMetricColors;
}

@property (nonatomic) long long distributionStyle;
@property (nonatomic, retain) HKInteractiveChartOverlayPredicate *namedPredicate;
@property (nonatomic) <HKOverlayRoomViewControllerIntegratedContextDelegate> *optionalDelegate;
@property (nonatomic) long long options;
@property (nonatomic, retain) NSDictionary *styleToMetricColors;

- (void).cxx_destruct;
- (id)_computeTitleAndIdentifierFromStyleAndPredicate;
- (id)_representativeDisplayTypeForStyle:(long long)arg1;
- (id)_selectedMetricColorsForDistributionStyle:(long long)arg1;
- (id)buildContextItemWithValue:(id)arg1 unit:(id)arg2 valueContext:(id)arg3 forTimeScope:(long long)arg4 isUnitIncludedInValue:(bool)arg5;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)arg1;
- (long long)distributionStyle;
- (void)fetchCachedDataForTimeScope:(long long)arg1 resolution:(long long)arg2 dateInterval:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithStyle:(long long)arg1 namedPredicate:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 optionalDelegate:(id)arg5 options:(long long)arg6 mode:(long long)arg7;
- (bool)isEqual:(id)arg1;
- (id)namedPredicate;
- (id)optionalDelegate;
- (long long)options;
- (id)representativeDisplayType;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (void)setDistributionStyle:(long long)arg1;
- (void)setNamedPredicate:(id)arg1;
- (void)setOptionalDelegate:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setStyleToMetricColors:(id)arg1;
- (id)styleToMetricColors;
- (id)unitString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 isUnitIncludedInValue:(bool*)arg4;

@end
