
@protocol HMEEventConsumer <NSObject>

@required

- (void)didReceiveEvent:(HMEEvent *)arg1 topic:(NSString *)arg2;

@optional

- (void)didReceiveCachedEvent:(HMEEvent *)arg1 topic:(NSString *)arg2 source:(id <HMECachedEventSource>)arg3;

@end
