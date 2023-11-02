
@interface ATXActivitySuggestionFeedbackEvent : NSObject <ATXProtoBufWrapper, BMStoreData> {
    NSArray * _acceptedTriggers;
    ATXActivity * _activity;
    NSDate * _eventDate;
    unsigned long long  _eventType;
    unsigned long long  _location;
    unsigned long long  _suggestionType;
}

@property (nonatomic, readonly) NSArray *acceptedTriggers;
@property (nonatomic, readonly) ATXActivity *activity;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long location;
@property (nonatomic, readonly) unsigned long long suggestionType;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)acceptedTriggers;
- (id)activity;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)eventDate;
- (unsigned long long)eventType;
- (id)init;
- (id)initWithEventDate:(id)arg1 activity:(id)arg2 acceptedTriggers:(id)arg3 eventType:(unsigned long long)arg4 suggestionType:(unsigned long long)arg5 location:(unsigned long long)arg6;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXActivitySuggestionFeedbackEvent:(id)arg1;
- (id)json;
- (id)jsonDict;
- (unsigned long long)location;
- (id)proto;
- (id)serialize;
- (unsigned long long)suggestionType;

@end
