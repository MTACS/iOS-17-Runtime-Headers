
@protocol HMETopicRouterDelegate <NSObject>

@required

- (void)didChangeRegistrationsWithTopicFilterAdditions:(NSArray *)arg1 removals:(NSArray *)arg2;

@optional

- (NSSet *)upstreamTopicsForTopic:(NSString *)arg1;

@end
