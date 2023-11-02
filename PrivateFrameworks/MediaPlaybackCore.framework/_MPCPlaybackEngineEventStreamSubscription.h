
@interface _MPCPlaybackEngineEventStreamSubscription : NSObject <MPCPlaybackEngineEventStreamSubscription> {
    <MPCPlaybackEngineEventConsumer> * _consumer;
    NSMutableDictionary * _eventHandlers;
    MPCPlaybackEngineEventStream * _eventStream;
    unsigned long long  _lastEventSuccessTimestamp;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _maximumEventDeliveryTimestamp;
    NSMutableDictionary * _mutatingEventHandlers;
    NSString * _streamID;
}

@property (nonatomic, readonly) <MPCPlaybackEngineEventConsumer> *consumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *eventHandlers;
@property (nonatomic, readonly) MPCPlaybackEngineEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastEventSuccessTimestamp;
@property (nonatomic) unsigned long long maximumEventDeliveryTimestamp;
@property (nonatomic, readonly) NSMutableDictionary *mutatingEventHandlers;
@property (nonatomic, readonly, copy) NSString *streamID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_onQueue_flush;
- (void)cancelSubscription;
- (id)consumer;
- (id)debugDescription;
- (id)eventHandlers;
- (id)eventStream;
- (void)flushEventsWithCompletion:(id /* block */)arg1;
- (id)initWithConsumer:(id)arg1 eventStream:(id)arg2;
- (unsigned long long)lastEventSuccessTimestamp;
- (unsigned long long)maximumEventDeliveryTimestamp;
- (id)mutatingEventHandlers;
- (void)setLastEventSuccessTimestamp:(unsigned long long)arg1;
- (void)setMaximumEventDeliveryTimestamp:(unsigned long long)arg1;
- (id)streamID;
- (void)subscribeToEventType:(id)arg1 handler:(id /* block */)arg2;
- (void)subscribeToEventType:(id)arg1 options:(unsigned long long)arg2 handler:(id /* block */)arg3;

@end
