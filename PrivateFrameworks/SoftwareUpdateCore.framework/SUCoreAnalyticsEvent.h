
@interface SUCoreAnalyticsEvent : NSObject {
    NSString * _eventName;
    NSString * _eventUUID;
    NSMutableDictionary * _mutableEventPayload;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly, retain) NSString *eventName;
@property (nonatomic, readonly, retain) NSDictionary *eventPayload;
@property (nonatomic, retain) NSString *eventUUID;

- (void).cxx_destruct;
- (void)_queue_removeEventPayloadEntry:(id)arg1;
- (void)_queue_setEventPayloadEntry:(id)arg1 value:(id)arg2;
- (void)_queue_setEventPayloadEntryToNull:(id)arg1;
- (id)description;
- (id)eventName;
- (id)eventPayload;
- (id)eventUUID;
- (id)init;
- (id)initWithEventName:(id)arg1;
- (void)removeEventPayloadEntry:(id)arg1;
- (void)setEventPayloadEntry:(id)arg1 value:(id)arg2;
- (void)setEventPayloadEntryToNull:(id)arg1;
- (void)setEventUUID:(id)arg1;

@end
