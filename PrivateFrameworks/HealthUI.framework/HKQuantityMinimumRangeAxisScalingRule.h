
@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule <HKInteractiveChartQuantityDefaultAxisBoundsProvider> {
    HKQuantity * _anchorQuantity;
    NSDictionary * _axisRangeQuantityOverrides;
    HKQuantity * _defaultYAxisRangeQuantity;
    HKQuantity * _maximumQuantity;
    HKQuantity * _minimumQuantity;
    HKValueRange * _noDataAxisBounds;
    HKUnit * _unit;
}

@property (nonatomic, retain) HKValueRange *noDataAxisBounds;
@property (nonatomic, retain) HKUnit *unit;

+ (id)ruleWithDefaultYAxisRange:(id)arg1 anchorValue:(id)arg2;
+ (id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2;
+ (id)ruleWithDefaultYAxisRange:(id)arg1 minimumValue:(id)arg2 maximumValue:(id)arg3 axisRangeOverrides:(id)arg4;
+ (id)ruleWithDefaultYAxisRange:(id)arg1 minimumValue:(id)arg2 maximumValue:(id)arg3 axisRangeOverrides:(id)arg4 noDataAxisBounds:(id)arg5;

- (void).cxx_destruct;
- (void)_convertQuantities;
- (id)description;
- (bool)isCompatibleWithQuantityType:(id)arg1;
- (id)noDataAxisBounds;
- (id)noDataStartingRange;
- (void)setNoDataAxisBounds:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)unit;

@end
