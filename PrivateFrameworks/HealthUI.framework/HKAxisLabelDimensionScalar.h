
@interface HKAxisLabelDimensionScalar : NSObject <HKAxisLabelDimension>

+ (long long)_fractionDigitsForStep:(double)arg1;

- (id)endingLabelsFactorOverride;
- (id)formatterForLabelStepSize:(double)arg1;
- (double)niceStepSizeLargerThan:(double)arg1;
- (id)stringForLocation:(id)arg1 formatterForStepSize:(id)arg2;
- (double)ticksPerStepSize:(double)arg1;

@end
