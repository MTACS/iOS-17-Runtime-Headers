
@interface HKInteractiveChartDisplayType : HKDisplayType {
    HKDisplayType * _baseDisplayType;
    UIColor * _color;
    HKGraphSeries * _mainGraphSeries;
    NSDictionary * _seriesForTimeScopeMapping;
    NSString * _specifiedDisplayName;
    NSString * _specifiedUnitName;
    HKInteractiveChartDataFormatter * _specifiedValueFormatter;
}

@property (nonatomic, readonly) HKDisplayType *baseDisplayType;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) HKGraphSeries *mainGraphSeries;
@property (nonatomic, retain) NSDictionary *seriesForTimeScopeMapping;
@property (nonatomic, readonly) NSString *specifiedDisplayName;
@property (nonatomic, readonly) NSString *specifiedUnitName;
@property (nonatomic, readonly) HKInteractiveChartDataFormatter *specifiedValueFormatter;

- (void).cxx_destruct;
- (id)_initWithDisplayName:(id)arg1 unitDisplayNameOverrides:(id)arg2 localizationTableOverride:(id)arg3 chartingRules:(id)arg4 unitName:(id)arg5 valueFormatter:(id)arg6 dataTypeCode:(long long)arg7 baseDisplayType:(id)arg8 mainGraphSeries:(id)arg9 seriesForTimeScopeMapping:(id)arg10;
- (long long)_internalDisplayTypeIdentifier;
- (id)baseDisplayType;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)graphSeriesForTimeScope:(long long)arg1;
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)arg1;
- (id)initWithBaseDisplayType:(id)arg1 valueFormatter:(id)arg2 dataTypeCode:(long long)arg3 seriesForTimeScopeMapping:(id)arg4;
- (id)initWithGraphSeries:(id)arg1 baseDisplayType:(id)arg2 dataTypeCode:(long long)arg3;
- (id)initWithGraphSeries:(id)arg1 baseDisplayType:(id)arg2 valueFormatter:(id)arg3 dataTypeCode:(long long)arg4;
- (id)initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitName:(id)arg3 valueFormatter:(id)arg4 dataTypeCode:(long long)arg5;
- (id)mainGraphSeries;
- (id)seriesForTimeScopeMapping;
- (void)setColor:(id)arg1;
- (void)setSeriesForTimeScopeMapping:(id)arg1;
- (id)specifiedDisplayName;
- (id)specifiedUnitName;
- (id)specifiedValueFormatter;
- (id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2;

@end
