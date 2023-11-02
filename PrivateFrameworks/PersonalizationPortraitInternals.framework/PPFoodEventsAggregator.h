
@interface PPFoodEventsAggregator : PPEventsAggregator

- (bool)isEvent:(id)arg1 dupeOfEvent:(id)arg2;
- (id)tripCandidatesFromEventsPool;

@end
