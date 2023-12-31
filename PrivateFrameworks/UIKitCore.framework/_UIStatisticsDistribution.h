
@interface _UIStatisticsDistribution : _UIStatistics

- (void)cancelTimingForObject:(id)arg1;
- (bool)isTimingForObject:(id)arg1;
- (void)recordDistributionValue:(double)arg1;
- (void)recordTimingForObject:(id)arg1;
- (void)resetDistribution;
- (void)resetDistributionToValue:(double)arg1;
- (void)startTimingForObject:(id)arg1;

@end
