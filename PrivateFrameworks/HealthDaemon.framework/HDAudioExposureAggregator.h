
@interface HDAudioExposureAggregator : HDSeriesQuantityDataAggregator

- (void)addDatum:(id)arg1 toAccumulatedData:(id)arg2;
- (bool)shouldFreezeCurrentSeries:(id)arg1 lastDatum:(id)arg2 seriesLength:(long long)arg3 configuration:(id)arg4 aggregationInterval:(double)arg5;

@end
