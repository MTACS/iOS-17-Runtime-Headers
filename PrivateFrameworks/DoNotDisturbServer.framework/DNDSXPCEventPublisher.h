
@interface DNDSXPCEventPublisher : NSObject {
    NSMutableArray * _pendingEvents;
    NSObject<OS_xpc_event_publisher> * _publisher;
    NSObject<OS_dispatch_queue> * _queue;
    const char * _requiredEntitlement;
    NSMutableDictionary * _subscribers;
}

- (void).cxx_destruct;
- (void)_handleEventAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;
- (void)_queue_addSubscriberForToken:(unsigned long long)arg1 descriptor:(id)arg2;
- (void)_queue_removeSubscriberForToken:(unsigned long long)arg1;
- (void)_queue_sendEventWithXPCObject:(id)arg1;
- (void)_queue_sendPendingEvents;
- (void)broadcastEvent:(id)arg1;
- (id)initWithStream:(const char *)arg1;

@end
