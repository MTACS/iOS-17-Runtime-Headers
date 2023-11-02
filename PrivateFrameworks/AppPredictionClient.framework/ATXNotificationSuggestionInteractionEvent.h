
@interface ATXNotificationSuggestionInteractionEvent : NSObject <ATXProtoBufWrapper, BMStoreData> {
    NSDate * _eventDate;
    long long  _eventType;
    long long  _suggestionType;
    NSUUID * _suggestionUUID;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long suggestionType;
@property (nonatomic, readonly) NSUUID *suggestionUUID;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (bool)eventCausesSuggestionInactivity;
- (id)eventDate;
- (long long)eventType;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSuggestionType:(long long)arg1 eventType:(long long)arg2 suggestionUUID:(id)arg3 eventDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXNotificationSuggestionInteractionEvent:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)proto;
- (id)serialize;
- (long long)suggestionType;
- (id)suggestionUUID;

@end
