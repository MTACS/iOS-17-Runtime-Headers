
@protocol HMELastEventStoreReadHandle <NSObject>

@required

- (NSDictionary *)eventsForTopicFilters:(NSArray *)arg1;
- (HMEEvent *)lastEventForTopic:(NSString *)arg1;

@end
