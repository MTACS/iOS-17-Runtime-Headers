
@protocol HMEMessageDatagramClientDataSource

@required

- (NSSet *)client:(HMEMessageDatagramClient *)arg1 forwardingTopicsForTopics:(NSSet *)arg2;
- (bool)client:(HMEMessageDatagramClient *)arg1 isConnectionTerminatingError:(NSError *)arg2;
- (NSSet *)client:(HMEMessageDatagramClient *)arg1 upstreamTopicsForTopic:(NSString *)arg2;
- (bool)clientIsEnabled:(HMEMessageDatagramClient *)arg1;

@end
