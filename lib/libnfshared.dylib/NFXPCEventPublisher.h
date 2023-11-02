
@interface NFXPCEventPublisher : NSObject {
    NSMutableArray * _pendingSendEvents;
    NSObject<OS_xpc_event_publisher> * _publisher;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _receivedInitialBarrier;
    NSString * _streamName;
    NSMutableSet * _tokens;
}

@property (nonatomic, retain) NSMutableArray *pendingSendEvents;
@property (nonatomic, retain) NSObject<OS_xpc_event_publisher> *publisher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool receivedInitialBarrier;
@property (nonatomic, retain) NSString *streamName;
@property (nonatomic, retain) NSMutableSet *tokens;

- (void).cxx_destruct;
- (void)handleEventWithAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;
- (id)initWithStreamName:(id)arg1 queue:(id)arg2;
- (id)pendingSendEvents;
- (id)publisher;
- (id)queue;
- (bool)receivedInitialBarrier;
- (void)sendXpcNotificationEvent:(id)arg1;
- (void)sendXpcNotificationEventWithDictionary:(id)arg1;
- (void)sendXpcNotificationEventWithString:(id)arg1;
- (void)setPendingSendEvents:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReceivedInitialBarrier:(bool)arg1;
- (void)setStreamName:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)streamName;
- (id)tokens;

@end
