
@interface IPXPCEventStateUpdateStreamSink : NSObject <IPStateUpdateStreamSink, IPXPCEventStateUpdateStreamSubscriberDelegate> {
    bool  _foundInitialBarrier;
    NSObject<OS_xpc_event_publisher> * _publisher;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _resumed;
    NSString * _streamName;
    NSMutableDictionary * _subscribers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_processPublisherEventAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;
- (id)initWithQueue:(id)arg1 streamName:(id)arg2;
- (void)resume;
- (void)sendUpdateMessage:(id)arg1;
- (void)subscriber:(id)arg1 firePayload:(id)arg2;
- (void)subscriber:(id)arg1 firePayload:(id)arg2 withReply:(id /* block */)arg3;
- (void)subscriberFailedHandshake:(id)arg1;

@end
