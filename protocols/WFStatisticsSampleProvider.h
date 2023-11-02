
@protocol WFStatisticsSampleProvider <NSObject>

@required

- (bool)canProvideDataSamples;
- (NSArray *)dataSamples;
- (void)updateValue:(NSNumber *)arg1 fromStatisticsOperation:(long long)arg2;

@end
