
@interface HKNumericMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule <HKInteractiveChartNumericDefaultAxisBoundsProvider> {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    HKValueRange * _noDataAxisBounds;
}

@property (nonatomic, retain) HKValueRange *noDataAxisBounds;

+ (id)ruleWithDefaultYAxisRange:(double)arg1 axisRangeOverrides:(id)arg2;
+ (id)ruleWithDefaultYAxisRange:(double)arg1 minimumValue:(id)arg2 maximumValue:(id)arg3 axisRangeOverrides:(id)arg4;
+ (id)ruleWithDefaultYAxisRange:(double)arg1 minimumValue:(id)arg2 maximumValue:(id)arg3 axisRangeOverrides:(id)arg4 noDataAxisBounds:(id)arg5;

- (void).cxx_destruct;
- (id)description;
- (id)noDataAxisBounds;
- (id)noDataStartingRange;
- (void)setNoDataAxisBounds:(id)arg1;

@end
