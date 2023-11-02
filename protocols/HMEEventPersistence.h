
@protocol HMEEventPersistence <HMELastEventStore>

@required

- (NSDictionary *)eventsForTopicFilters:(NSArray *)arg1 sinceReferenceTimestamp:(double)arg2;
- (void)resetBeforeReferenceTimestamp:(double)arg1;

@end
