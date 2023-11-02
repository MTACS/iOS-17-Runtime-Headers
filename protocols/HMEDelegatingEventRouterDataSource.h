
@protocol HMEDelegatingEventRouterDataSource <NSObject>

@required

- (NSArray *)delegatingRouter:(HMEDelegatingEventRouter *)arg1 filteredTopics:(NSArray *)arg2 forRouter:(id <HMESynchronousSubscriptionProviding>)arg3;
- (NSSet *)delegatingRouter:(HMEDelegatingEventRouter *)arg1 upstreamTopicsFor:(NSString *)arg2;

@end
