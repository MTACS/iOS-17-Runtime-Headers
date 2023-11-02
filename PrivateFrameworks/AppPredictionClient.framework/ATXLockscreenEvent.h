
@interface ATXLockscreenEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    double  _absoluteDate;
    NSUUID * _blendingCacheId;
    int  _eventType;
    NSArray * _suggestionIds;
}

@property (nonatomic, retain) NSUUID *blendingCacheId;
@property (nonatomic, readonly) unsigned char consumerSubTypeForUIStream;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *suggestionIds;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingCacheId;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;
- (unsigned char)consumerSubTypeForUIStream;
- (unsigned int)dataVersion;
- (id)date;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (int)eventType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAbsoluteDate:(double)arg1 eventType:(int)arg2 blendingCacheId:(id)arg3 suggestionIds:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 eventType:(int)arg2 blendingCacheId:(id)arg3 suggestionIds:(id)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXLockscreenEvent:(id)arg1;
- (id)jsonDict;
- (id)proto;
- (id)serialize;
- (id)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;
- (id)sessionProcessingOptionsForSessionType:(long long)arg1;
- (void)setBlendingCacheId:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setSuggestionIds:(id)arg1;
- (id)suggestionIds;
- (void)updateUIFeedbackSession:(id)arg1 uiCacheConsumerSubType:(unsigned char)arg2;

@end
