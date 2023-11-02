
@interface _HKAxisLabelDimensionBloodGlucosePercentInRange : NSObject <HKAxisLabelDimension> {
    NSNumberFormatter * _formatter;
}

@property (nonatomic, readonly) NSNumberFormatter *formatter;

- (void).cxx_destruct;
- (id)endingLabelsFactorOverride;
- (id)formatter;
- (id)formatterForLabelStepSize:(double)arg1;
- (id)init;
- (double)niceStepSizeLargerThan:(double)arg1;
- (id)stringForLocation:(id)arg1 formatterForStepSize:(id)arg2;
- (double)ticksPerStepSize:(double)arg1;

@end
