
@interface ATXUIEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    unsigned char  _consumerSubType;
    NSObject<ATXProactiveSuggestionUIInteractionProtocol> * _event;
}

@property (nonatomic, readonly) unsigned char consumerSubType;
@property (nonatomic, readonly) unsigned char consumerSubTypeForUIStream;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<ATXProactiveSuggestionUIInteractionProtocol> *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;
+ (id)uiEventWithAppDirectoryEvent:(id)arg1;
+ (id)uiEventWithHomeScreenEvent:(id)arg1;
+ (id)uiEventWithLockscreenEvent:(id)arg1;
+ (id)uiEventWithShortcutsEditorEvent:(id)arg1;
+ (id)uiEventWithSpotlightEvent:(id)arg1;

- (void).cxx_destruct;
- (id)appDirectoryEvent;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (unsigned char)consumerSubType;
- (unsigned char)consumerSubTypeForUIStream;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (id)homeScreenEvent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConsumerSubType:(unsigned char)arg1 event:(id)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUIEvent:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)lockscreenEvent;
- (id)proto;
- (id)serialize;
- (id)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;
- (id)sessionProcessingOptionsForSessionType:(long long)arg1;
- (id)shortcutsEditorEvent;
- (id)spotlightEvent;
- (void)updateUIFeedbackSession:(id)arg1 uiCacheConsumerSubType:(unsigned char)arg2;

@end
