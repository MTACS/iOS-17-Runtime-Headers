
@interface FTMutableSlsLanguageDetectionMessage : FTSlsLanguageDetectionMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTAudioPacket *session_messageAsFTAudioPacket;
@property (nonatomic, copy) FTFinishAudio *session_messageAsFTFinishAudio;
@property (nonatomic, copy) FTLanguageDetectionResponse *session_messageAsFTLanguageDetectionResponse;
@property (nonatomic, copy) FTStartLanguageDetectionRequest *session_messageAsFTStartLanguageDetectionRequest;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTAudioPacket;
- (id)session_messageAsFTFinishAudio;
- (id)session_messageAsFTLanguageDetectionResponse;
- (id)session_messageAsFTStartLanguageDetectionRequest;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTAudioPacket:(id)arg1;
- (void)setSession_messageAsFTFinishAudio:(id)arg1;
- (void)setSession_messageAsFTLanguageDetectionResponse:(id)arg1;
- (void)setSession_messageAsFTStartLanguageDetectionRequest:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
