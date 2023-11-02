
@protocol HMEMessageDatagramServerDataSource <NSObject>

@required

- (NSArray *)server:(HMEMessageDatagramServer *)arg1 expandedTopicsForTopics:(NSArray *)arg2;
- (NSArray *)server:(HMEMessageDatagramServer *)arg1 forwardingTopicsForTopics:(NSArray *)arg2;
- (bool)server:(HMEMessageDatagramServer *)arg1 isConnectionTerminatingError:(NSError *)arg2;
- (bool)server:(HMEMessageDatagramServer *)arg1 shouldProcessEventsForConnection:(id <HMEMessageDatagramConnection>)arg2 shouldLogState:(bool)arg3;
- (double)server:(HMEMessageDatagramServer *)arg1 timeoutIntervalForConnection:(id <HMEMessageDatagramConnection>)arg2;
- (NSSet *)server:(HMEMessageDatagramServer *)arg1 upstreamTopicsForTopic:(NSString *)arg2;
- (double)serverDebounceTimeInterval:(HMEMessageDatagramServer *)arg1;
- (unsigned long long)serverFragmentEventsDataSize:(HMEMessageDatagramServer *)arg1;
- (bool)serverSupportFragmentCachedEvents:(HMEMessageDatagramServer *)arg1;
- (<HMETimerProvider> *)serverTimerProvider:(HMEMessageDatagramServer *)arg1;

@end
