
@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule <HKInteractiveChartQuantityDefaultAxisBoundsProvider> {
    HKValueRange * _defaultQuantityBounds;
    HKQuantity * _maximumQuantity;
    HKQuantity * _minimumQuantity;
    HKValueRange * _noDataAxisBounds;
    NSDictionary * _quantityBoundsOverrides;
    HKUnit * _unit;
}

@property (nonatomic, retain) HKValueRange *noDataAxisBounds;
@property (nonatomic, retain) HKUnit *unit;

+ (id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2;
+ (id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2 minimumValue:(id)arg3 maximumValue:(id)arg4;
+ (id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2 minimumValue:(id)arg3 maximumValue:(id)arg4 noDataAxisBounds:(id)arg5;
+ (id)ruleWithDefaultAxisBounds:(id)arg1 noDataAxisBounds:(id)arg2;

- (void).cxx_destruct;
- (void)_convertQuantityRanges;
- (id)_numberRangeFromQuantityRangeForUnit:(id)arg1 quantityRange:(id)arg2;
- (id)description;
- (bool)isCompatibleWithQuantityType:(id)arg1;
- (id)noDataAxisBounds;
- (id)noDataStartingRange;
- (void)setNoDataAxisBounds:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)unit;

@end
