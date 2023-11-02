
@interface _CDXPCEventPublisher : NSObject {
    <_CDXPCEventPublisherDelegate> * _delegate;
    NSObject<OS_os_log> * _log;
    const char * _os_variant_diagnostic_subsystem;
    NSMutableArray * _pendingSendEvents;
    NSObject<OS_xpc_event_publisher> * _publisher;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _streamName;
}

@property (nonatomic, retain) <_CDXPCEventPublisherDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) const char *os_variant_diagnostic_subsystem;
@property (nonatomic, retain) NSMutableArray *pendingSendEvents;
@property (nonatomic, retain) NSObject<OS_xpc_event_publisher> *publisher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *streamName;

+ (id)eventPublisherWithStreamName:(const char *)arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4;
+ (id)eventPublisherWithStreamName:(const char *)arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4 os_variant_diagnostic_subsystem:(const char *)arg5;

- (void).cxx_destruct;
- (void)activatePublisherWithStreamName:(const char *)arg1;
- (void)addToken:(unsigned long long)arg1 descriptor:(id)arg2 userID:(unsigned int)arg3;
- (id)delegate;
- (void)handleEventWithAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;
- (id)initWithStreamName:(id)arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4 os_variant_diagnostic_subsystem:(const char *)arg5;
- (id)log;
- (const char *)os_variant_diagnostic_subsystem;
- (id)pendingSendEvents;
- (id)publisher;
- (id)queue;
- (void)removeToken:(unsigned long long)arg1;
- (void)sendEvent:(id)arg1 toSubscriber:(id)arg2 handler:(id /* block */)arg3;
- (void)sendEvent:(id)arg1 toSubscriber:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setOs_variant_diagnostic_subsystem:(const char *)arg1;
- (void)setPendingSendEvents:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStreamName:(id)arg1;
- (id)streamName;

@end
