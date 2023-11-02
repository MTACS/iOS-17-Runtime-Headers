
@interface SUCoreAnalyticsEventSubmitter : NSObject {
    SUCoreLog * _eventSubmitterLogger;
    NSMutableDictionary * _events;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, retain) SUCoreLog *eventSubmitterLogger;
@property (nonatomic, readonly, retain) NSDictionary *events;

- (void).cxx_destruct;
- (void)_queue_registerSendEvent:(id)arg1;
- (void)_queue_removeAllEvents;
- (void)_queue_removeEvent:(id)arg1;
- (void)_queue_removeEventsWithName:(id)arg1;
- (void)_queue_setEvent:(id)arg1;
- (void)_queue_submitAllEvents;
- (void)_queue_submitEvent:(id)arg1;
- (void)_queue_submitEventsWithName:(id)arg1;
- (id)eventSubmitterLogger;
- (id)events;
- (id)init;
- (void)removeAllEvents;
- (void)removeEvent:(id)arg1;
- (void)removeEventsWithName:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventSubmitterLogger:(id)arg1;
- (void)submitAllEvents;
- (void)submitEvent:(id)arg1;
- (void)submitEventsWithName:(id)arg1;

@end
