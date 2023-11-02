
@interface FTMutableBlazarSpeechTranslationMessage : FTBlazarSpeechTranslationMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (nonatomic, copy) FTAudioPacket *session_messageAsFTAudioPacket;
@property (nonatomic, copy) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (nonatomic, copy) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (nonatomic, copy) FTFinishAudio *session_messageAsFTFinishAudio;
@property (nonatomic, copy) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property (nonatomic, copy) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (nonatomic, copy) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (nonatomic, copy) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (nonatomic, copy) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (nonatomic, copy) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (nonatomic, copy) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (nonatomic, copy) FTSpeechTranslationAudioPacket *session_messageAsFTSpeechTranslationAudioPacket;
@property (nonatomic, copy) FTSpeechTranslationFinalRecognitionResponse *session_messageAsFTSpeechTranslationFinalRecognitionResponse;
@property (nonatomic, copy) FTSpeechTranslationMtResponse *session_messageAsFTSpeechTranslationMtResponse;
@property (nonatomic, copy) FTSpeechTranslationPartialRecognitionResponse *session_messageAsFTSpeechTranslationPartialRecognitionResponse;
@property (nonatomic, copy) FTSpeechTranslationServerEndpointFeatures *session_messageAsFTSpeechTranslationServerEndpointFeatures;
@property (nonatomic, copy) FTSpeechTranslationTextToSpeechResponse *session_messageAsFTSpeechTranslationTextToSpeechResponse;
@property (nonatomic, copy) FTStartSpeechTranslationLoggingRequest *session_messageAsFTStartSpeechTranslationLoggingRequest;
@property (nonatomic, copy) FTStartSpeechTranslationRequest *session_messageAsFTStartSpeechTranslationRequest;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTAudioLimitExceeded;
- (id)session_messageAsFTAudioPacket;
- (id)session_messageAsFTClientSetupInfo;
- (id)session_messageAsFTFinalBlazarResponse;
- (id)session_messageAsFTFinishAudio;
- (id)session_messageAsFTLanguageDetected;
- (id)session_messageAsFTRecognitionCandidate;
- (id)session_messageAsFTRecognitionProgress;
- (id)session_messageAsFTRequestStatsResponse;
- (id)session_messageAsFTResetServerEndpointer;
- (id)session_messageAsFTServerEndpointFeatures;
- (id)session_messageAsFTSetEndpointerState;
- (id)session_messageAsFTSpeechTranslationAudioPacket;
- (id)session_messageAsFTSpeechTranslationFinalRecognitionResponse;
- (id)session_messageAsFTSpeechTranslationMtResponse;
- (id)session_messageAsFTSpeechTranslationPartialRecognitionResponse;
- (id)session_messageAsFTSpeechTranslationServerEndpointFeatures;
- (id)session_messageAsFTSpeechTranslationTextToSpeechResponse;
- (id)session_messageAsFTStartSpeechTranslationLoggingRequest;
- (id)session_messageAsFTStartSpeechTranslationRequest;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTAudioLimitExceeded:(id)arg1;
- (void)setSession_messageAsFTAudioPacket:(id)arg1;
- (void)setSession_messageAsFTClientSetupInfo:(id)arg1;
- (void)setSession_messageAsFTFinalBlazarResponse:(id)arg1;
- (void)setSession_messageAsFTFinishAudio:(id)arg1;
- (void)setSession_messageAsFTLanguageDetected:(id)arg1;
- (void)setSession_messageAsFTRecognitionCandidate:(id)arg1;
- (void)setSession_messageAsFTRecognitionProgress:(id)arg1;
- (void)setSession_messageAsFTRequestStatsResponse:(id)arg1;
- (void)setSession_messageAsFTResetServerEndpointer:(id)arg1;
- (void)setSession_messageAsFTServerEndpointFeatures:(id)arg1;
- (void)setSession_messageAsFTSetEndpointerState:(id)arg1;
- (void)setSession_messageAsFTSpeechTranslationAudioPacket:(id)arg1;
- (void)setSession_messageAsFTSpeechTranslationFinalRecognitionResponse:(id)arg1;
- (void)setSession_messageAsFTSpeechTranslationMtResponse:(id)arg1;
- (void)setSession_messageAsFTSpeechTranslationPartialRecognitionResponse:(id)arg1;
- (void)setSession_messageAsFTSpeechTranslationServerEndpointFeatures:(id)arg1;
- (void)setSession_messageAsFTSpeechTranslationTextToSpeechResponse:(id)arg1;
- (void)setSession_messageAsFTStartSpeechTranslationLoggingRequest:(id)arg1;
- (void)setSession_messageAsFTStartSpeechTranslationRequest:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
