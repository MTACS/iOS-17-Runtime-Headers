
@protocol HMEMessageDatagramServerDelegate

@required

- (void)server:(HMEMessageDatagramServer *)arg1 connectionDidConnect:(id <HMEMessageDatagramConnection>)arg2;
- (void)server:(HMEMessageDatagramServer *)arg1 connectionDidExpire:(id <HMEMessageDatagramConnection>)arg2;
- (void)server:(HMEMessageDatagramServer *)arg1 connectionDidFail:(id <HMEMessageDatagramConnection>)arg2;
- (void)server:(HMEMessageDatagramServer *)arg1 logMetricsForEventTopic:(NSString *)arg2 eventSize:(unsigned long long)arg3 isCached:(bool)arg4;
- (void)server:(HMEMessageDatagramServer *)arg1 logMetricsForMessageDatagramFragmentation:(bool)arg2 isFragmented:(bool)arg3;
- (void)server:(void *)arg1 sendEvents:(void *)arg2 cachedEvents:(void *)arg3 connection:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: HMEMessageDatagramServer *, NSArray *, NSArray *, <HMEMessageDatagramConnection> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)shouldAllowEvent:(HMEEvent *)arg1 topic:(NSString *)arg2 connection:(id <HMEMessageDatagramConnection>)arg3;

@end
