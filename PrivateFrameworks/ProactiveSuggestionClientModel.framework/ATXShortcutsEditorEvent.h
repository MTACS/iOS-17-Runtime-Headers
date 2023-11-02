
@interface ATXShortcutsEditorEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    double  _absoluteDate;
    NSUUID * _blendingCacheUUID;
    unsigned char  _consumerSubType;
    unsigned long long  _eventType;
    ATXShortcutsEditorEventMetadata * _metadata;
    NSArray * _suggestionUUIDs;
}

@property (nonatomic, retain) NSUUID *blendingCacheUUID;
@property (nonatomic, readonly) unsigned char consumerSubType;
@property (nonatomic, readonly) unsigned char consumerSubTypeForUIStream;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ATXShortcutsEditorEventMetadata *metadata;
@property (nonatomic, retain) NSArray *suggestionUUIDs;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingCacheUUID;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;
- (unsigned char)consumerSubType;
- (unsigned char)consumerSubTypeForUIStream;
- (unsigned int)dataVersion;
- (id)date;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAbsoluteDate:(double)arg1 eventType:(unsigned long long)arg2 blendingCacheUUID:(id)arg3 suggestionUUIDs:(id)arg4 metadata:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 eventType:(unsigned long long)arg2 blendingCacheUUID:(id)arg3 suggestionUUIDs:(id)arg4 metadata:(id)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXShortcutsEditorEvent:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)metadata;
- (id)proto;
- (id)serialize;
- (id)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;
- (id)sessionProcessingOptionsForSessionType:(long long)arg1;
- (void)setBlendingCacheUUID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSuggestionUUIDs:(id)arg1;
- (id)suggestionUUIDs;
- (void)updateUIFeedbackSession:(id)arg1 uiCacheConsumerSubType:(unsigned char)arg2;

@end
