
@interface SUAnalyticsEvent : NSObject <NSSecureCoding> {
    NSString * _eventName;
    NSString * _eventUUID;
    NSMutableDictionary * _mutableEventPayload;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly, retain) NSString *eventName;
@property (nonatomic, readonly, retain) NSDictionary *eventPayload;
@property (nonatomic, retain) NSString *eventUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_queue_removeEventPayloadEntry:(id)arg1;
- (void)_queue_setEventPayloadEntry:(id)arg1 boolValue:(bool)arg2;
- (void)_queue_setEventPayloadEntry:(id)arg1 numberValue:(id)arg2;
- (void)_queue_setEventPayloadEntry:(id)arg1 stringValue:(id)arg2;
- (void)_queue_setEventPayloadEntryToNull:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)eventPayload;
- (id)eventUUID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventName:(id)arg1;
- (void)removeEventPayloadEntry:(id)arg1;
- (void)setEventPayloadEntry:(id)arg1 boolValue:(bool)arg2;
- (void)setEventPayloadEntry:(id)arg1 numberValue:(id)arg2;
- (void)setEventPayloadEntry:(id)arg1 stringValue:(id)arg2;
- (void)setEventPayloadEntryToNull:(id)arg1;
- (void)setEventUUID:(id)arg1;

@end
