
@protocol HKAxisLabelDimension

@required

- (NSNumber *)endingLabelsFactorOverride;
- (NSNumberFormatter *)formatterForLabelStepSize:(double)arg1;
- (double)niceStepSizeLargerThan:(double)arg1;
- (NSString *)stringForLocation:(NSNumber *)arg1 formatterForStepSize:(NSNumberFormatter *)arg2;
- (double)ticksPerStepSize:(double)arg1;

@end
