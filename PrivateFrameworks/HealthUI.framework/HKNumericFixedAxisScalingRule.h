
@interface HKNumericFixedAxisScalingRule : HKAbstractFixedAxisScalingRule <HKInteractiveChartNumericDefaultAxisBoundsProvider> {
    HKValueRange * _noDataAxisBounds;
}

@property (nonatomic, retain) HKValueRange *noDataAxisBounds;

+ (id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2;
+ (id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2 noDataAxisBounds:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)noDataAxisBounds;
- (id)noDataStartingRange;
- (void)setNoDataAxisBounds:(id)arg1;

@end
