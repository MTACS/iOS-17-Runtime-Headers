
@interface FTBlazarBatchTranslationMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BlazarBatchTranslationMessage { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, readonly) FTBatchTranslationFeedbackRequest *session_messageAsFTBatchTranslationFeedbackRequest;
@property (nonatomic, readonly) FTBatchTranslationLoggingRequest *session_messageAsFTBatchTranslationLoggingRequest;
@property (nonatomic, readonly) FTBatchTranslationRequest *session_messageAsFTBatchTranslationRequest;
@property (nonatomic, readonly) FTBatchTranslationResponse *session_messageAsFTBatchTranslationResponse;
@property (nonatomic, readonly) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (nonatomic, readonly) FTTranslationSupportedLanguagesRequest *session_messageAsFTTranslationSupportedLanguagesRequest;
@property (nonatomic, readonly) FTTranslationSupportedLanguagesResponse *session_messageAsFTTranslationSupportedLanguagesResponse;
@property (nonatomic, readonly) long long session_message_type;

+ (Class)session_message_immutableClassForType:(long long)arg1;
+ (long long)session_message_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::BlazarBatchTranslationMessage> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarBatchTranslationMessage { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarBatchTranslationMessage { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_message;
- (id)session_messageAsFTBatchTranslationFeedbackRequest;
- (id)session_messageAsFTBatchTranslationLoggingRequest;
- (id)session_messageAsFTBatchTranslationRequest;
- (id)session_messageAsFTBatchTranslationResponse;
- (id)session_messageAsFTFinalBlazarResponse;
- (id)session_messageAsFTTranslationSupportedLanguagesRequest;
- (id)session_messageAsFTTranslationSupportedLanguagesResponse;
- (long long)session_message_type;

@end
