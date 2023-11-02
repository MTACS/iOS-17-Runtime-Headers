
@interface FTMutableMtStreamingTranslationMessage : FTMtStreamingTranslationMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTStreamingTranslationRequest *session_messageAsFTStreamingTranslationRequest;
@property (nonatomic, copy) FTTranslationResponse *session_messageAsFTTranslationResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTStreamingTranslationRequest;
- (id)session_messageAsFTTranslationResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTStreamingTranslationRequest:(id)arg1;
- (void)setSession_messageAsFTTranslationResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
