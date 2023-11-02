
@protocol _CDXPCEventPublisherDelegate

@required

- (void)addSubscriber:(_CDXPCEventSubscriber *)arg1;
- (void)removeSubscriberWithToken:(unsigned long long)arg1 streamName:(NSString *)arg2;

@end
