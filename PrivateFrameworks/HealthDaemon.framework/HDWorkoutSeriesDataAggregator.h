
@interface HDWorkoutSeriesDataAggregator : HDSeriesQuantityDataAggregator

- (void)setConfiguration:(id)arg1;
- (bool)shouldAggregateToSeriesForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 options:(unsigned long long)arg6;

@end
