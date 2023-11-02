
@interface HKOverlayRoomViewControllerQuantityContext : HKOverlayRoomViewControllerIntegratedContext {
    HKDisplayType * _optionalBaseDisplayType;
    <HKOverlayRoomViewControllerIntegratedContextDelegate> * _optionalDelegate;
    long long  _options;
    NSString * _quantityTypeIdentifier;
}

@property (nonatomic, retain) HKDisplayType *optionalBaseDisplayType;
@property (nonatomic) <HKOverlayRoomViewControllerIntegratedContextDelegate> *optionalDelegate;
@property (nonatomic) long long options;
@property (nonatomic, retain) NSString *quantityTypeIdentifier;

- (void).cxx_destruct;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (id)buildContextItemWithValue:(id)arg1 unit:(id)arg2 valueContext:(id)arg3 forTimeScope:(long long)arg4 isUnitIncludedInValue:(bool)arg5;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)arg1;
- (void)fetchCachedDataForTimeScope:(long long)arg1 resolution:(long long)arg2 dateInterval:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithQuantityIdentifier:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 seriesOptions:(long long)arg5 mode:(long long)arg6 optionalBaseDisplayType:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)optionalBaseDisplayType;
- (id)optionalDelegate;
- (long long)options;
- (void)prepareContextForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4;
- (id)quantityTypeIdentifier;
- (id)representativeDisplayType;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (void)setOptionalBaseDisplayType:(id)arg1;
- (void)setOptionalDelegate:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setQuantityTypeIdentifier:(id)arg1;
- (id)unitString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 isUnitIncludedInValue:(bool*)arg4;

@end
