
@interface HDXPCEventPublisher : NSObject {
    NSMutableArray * _pendingEvents;
    NSMutableArray * _pendingSubscribers;
    NSObject<OS_xpc_event_publisher> * _publisher;
    NSObject<OS_dispatch_queue> * _queue;
    const char * _requiredEntitlement;
    NSMutableDictionary * _subscribers;
}

- (void).cxx_destruct;
- (void)broadcastEvent:(id)arg1;
- (id)initWithStream:(const char *)arg1 entitlement:(const char *)arg2;

@end
