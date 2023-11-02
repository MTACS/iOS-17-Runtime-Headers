
@interface FTMutableBlazarBatchTranslationMessage : FTBlazarBatchTranslationMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTBatchTranslationFeedbackRequest *session_messageAsFTBatchTranslationFeedbackRequest;
@property (nonatomic, copy) FTBatchTranslationLoggingRequest *session_messageAsFTBatchTranslationLoggingRequest;
@property (nonatomic, copy) FTBatchTranslationRequest *session_messageAsFTBatchTranslationRequest;
@property (nonatomic, copy) FTBatchTranslationResponse *session_messageAsFTBatchTranslationResponse;
@property (nonatomic, copy) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (nonatomic, copy) FTTranslationSupportedLanguagesRequest *session_messageAsFTTranslationSupportedLanguagesRequest;
@property (nonatomic, copy) FTTranslationSupportedLanguagesResponse *session_messageAsFTTranslationSupportedLanguagesResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTBatchTranslationFeedbackRequest;
- (id)session_messageAsFTBatchTranslationLoggingRequest;
- (id)session_messageAsFTBatchTranslationRequest;
- (id)session_messageAsFTBatchTranslationResponse;
- (id)session_messageAsFTFinalBlazarResponse;
- (id)session_messageAsFTTranslationSupportedLanguagesRequest;
- (id)session_messageAsFTTranslationSupportedLanguagesResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTBatchTranslationFeedbackRequest:(id)arg1;
- (void)setSession_messageAsFTBatchTranslationLoggingRequest:(id)arg1;
- (void)setSession_messageAsFTBatchTranslationRequest:(id)arg1;
- (void)setSession_messageAsFTBatchTranslationResponse:(id)arg1;
- (void)setSession_messageAsFTFinalBlazarResponse:(id)arg1;
- (void)setSession_messageAsFTTranslationSupportedLanguagesRequest:(id)arg1;
- (void)setSession_messageAsFTTranslationSupportedLanguagesResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
