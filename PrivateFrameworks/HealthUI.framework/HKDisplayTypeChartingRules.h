
@interface HKDisplayTypeChartingRules : NSObject {
    <HKDecimalPrecisionRule> * _allowedDecimalPrecisionRule;
    <HKInteractiveChartsAxisScalingRule> * _axisScalingRule;
    <HKInteractiveChartsAxisScalingRule> * _compactChartAxisScalingRule;
    long long  _defaultChartStyle;
    long long  _defaultStyle;
    NSNumber * _maximumYAxisLabelCount;
    NSNumber * _maximumYAxisLabelWidth;
    NSDictionary * _perUnitDecimalPrecision;
    long long  _preferredTimeScope;
    HKRemoteChartConfiguration * _remoteChartConfiguration;
    NSMutableDictionary * _rulesByTimeScope;
    bool  _shouldConnectSamplesWithLines;
    bool  _shouldDisplayUnitForAxisLabels;
    bool  _shouldInvertYAxis;
    bool  _shouldRoundYAxisDuringExpansion;
    bool  _shouldShowInitialLollipop;
}

@property (nonatomic, retain) <HKInteractiveChartsAxisScalingRule> *axisScalingRule;
@property (nonatomic, retain) <HKInteractiveChartsAxisScalingRule> *compactChartAxisScalingRule;
@property (nonatomic, readonly) long long defaultChartStyle;
@property (nonatomic, retain) NSNumber *maximumYAxisLabelCount;
@property (nonatomic, retain) NSNumber *maximumYAxisLabelWidth;
@property (nonatomic) long long preferredTimeScope;
@property (nonatomic, retain) HKRemoteChartConfiguration *remoteChartConfiguration;
@property (nonatomic, readonly) bool shouldConnectSamplesWithLines;
@property (nonatomic, readonly) bool shouldDisplayUnitForAxisLabels;
@property (nonatomic, readonly) bool shouldInvertYAxis;
@property (nonatomic, readonly) bool shouldRoundYAxisDuringExpansion;
@property (nonatomic, readonly) bool shouldShowInitialLollipop;

+ (bool)chartStyleContainsHorizontalGridlines:(long long)arg1;
+ (id)chartingRulesWithDefaultChartStyle:(long long)arg1 axisScalingRule:(id)arg2;
+ (id)chartingRulesWithDefaultChartStyle:(long long)arg1 chartStyleForTimeScopes:(id)arg2 axisScalingRule:(id)arg3 compactAxisScalingRule:(id)arg4 preferredTimeScope:(long long)arg5 chartingOptions:(unsigned long long)arg6;
+ (id)chartingRulesWithDefaultChartStyle:(long long)arg1 chartStyleForTimeScopes:(id)arg2 axisScalingRule:(id)arg3 preferredTimeScope:(long long)arg4 chartingOptions:(unsigned long long)arg5;

- (void).cxx_destruct;
- (id)_ruleForKey:(id)arg1 timeScope:(long long)arg2;
- (void)_setRule:(id)arg1 forKey:(id)arg2 timeScope:(long long)arg3;
- (id)allowedDecimalPrecisionRuleForUnit:(id)arg1;
- (id)axisScalingRule;
- (double)chartPointLineWidthForTimeScope:(long long)arg1;
- (double)chartPointRadiusForTimeScope:(long long)arg1;
- (long long)chartStyleForTimeScope:(long long)arg1;
- (id)compactChartAxisScalingRule;
- (long long)defaultChartStyle;
- (id)initWithDefaultChartStyle:(long long)arg1;
- (id)initWithDefaultChartStyle:(long long)arg1 chartingOptions:(unsigned long long)arg2;
- (id)initWithDefaultChartStyle:(long long)arg1 chartingOptions:(unsigned long long)arg2 preferredTimeScope:(long long)arg3;
- (id)intervalComponentsForTimeScope:(long long)arg1;
- (bool)lineChartExtendFirstValueForTimeScope:(long long)arg1;
- (bool)lineChartExtendLastValueForTimeScope:(long long)arg1;
- (bool)lineChartFlatLastValueForTimeScope:(long long)arg1;
- (bool)lineChartUsesPointMarkerImageForTimeScope:(long long)arg1;
- (bool)lineChartUsesValueAxisAnnotationForTimeScope:(long long)arg1;
- (id)maximumYAxisLabelCount;
- (id)maximumYAxisLabelWidth;
- (long long)preferredTimeScope;
- (id)remoteChartConfiguration;
- (void)setAllowedDecimalPrecisionRule:(id)arg1 perUnitPrecisionRules:(id)arg2;
- (void)setAxisScalingRule:(id)arg1;
- (void)setChartPointLineWidth:(double)arg1 forTimeScope:(long long)arg2;
- (void)setChartPointRadius:(double)arg1 forTimeScope:(long long)arg2;
- (void)setChartStyle:(long long)arg1 forTimeScope:(long long)arg2;
- (void)setCompactChartAxisScalingRule:(id)arg1;
- (void)setIntervalComponents:(id)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartExtendFirstValue:(bool)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartExtendLastValue:(bool)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartFlatLastValue:(bool)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartUsesPointMarkerImage:(bool)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartUsesValueAxisAnnotation:(bool)arg1 forTimeScope:(long long)arg2;
- (void)setMaximumYAxisLabelCount:(id)arg1;
- (void)setMaximumYAxisLabelWidth:(id)arg1;
- (void)setPreferredTimeScope:(long long)arg1;
- (void)setRemoteChartConfiguration:(id)arg1;
- (bool)shouldConnectSamplesWithLines;
- (bool)shouldDisplayUnitForAxisLabels;
- (bool)shouldInvertYAxis;
- (bool)shouldRoundYAxisDuringExpansion;
- (bool)shouldShowInitialLollipop;

@end
