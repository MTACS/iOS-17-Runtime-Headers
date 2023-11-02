
@interface IPXPCEventSubscriptionBlackhole : NSObject {
    NSObject<OS_xpc_event_publisher> * _publisher;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _streamName;
}

- (void).cxx_destruct;
- (id)initWithStreamName:(id)arg1;
- (void)resume;

@end
