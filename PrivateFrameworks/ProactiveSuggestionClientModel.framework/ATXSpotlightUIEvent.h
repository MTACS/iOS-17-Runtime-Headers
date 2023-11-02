
@interface ATXSpotlightUIEvent : NSObject <BMStoreData> {
    long long  _eventType;
    NSString * _suggestionContext;
    NSString * _suggestionSubtype;
    NSString * _suggestionType;
    NSString * _suggestionUniqueId;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *suggestionContext;
@property (nonatomic, copy) NSString *suggestionSubtype;
@property (nonatomic, copy) NSString *suggestionType;
@property (nonatomic, copy) NSString *suggestionUniqueId;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)stringForATXSpotlightUIEventType:(long long)arg1;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (long long)eventType;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithType:(long long)arg1 suggestionUniqueId:(id)arg2 suggestionType:(id)arg3 suggestionSubtype:(id)arg4 suggestionContext:(id)arg5;
- (id)json;
- (id)jsonDictionary;
- (id)proto;
- (id)serialize;
- (void)setEventType:(long long)arg1;
- (void)setSuggestionContext:(id)arg1;
- (void)setSuggestionSubtype:(id)arg1;
- (void)setSuggestionType:(id)arg1;
- (void)setSuggestionUniqueId:(id)arg1;
- (id)suggestionContext;
- (id)suggestionSubtype;
- (id)suggestionType;
- (id)suggestionUniqueId;

@end
