
@interface FTMutableBlazarMultiUserMessage : FTBlazarMultiUserMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (nonatomic, copy) FTAudioPacket *session_messageAsFTAudioPacket;
@property (nonatomic, copy) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (nonatomic, copy) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (nonatomic, copy) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (nonatomic, copy) FTFinishAudio *session_messageAsFTFinishAudio;
@property (nonatomic, copy) FTMultiUserStartSpeechRequest *session_messageAsFTMultiUserStartSpeechRequest;
@property (nonatomic, copy) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (nonatomic, copy) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (nonatomic, copy) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (nonatomic, copy) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (nonatomic, copy) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (nonatomic, copy) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (nonatomic, copy) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property (nonatomic, copy) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (nonatomic, copy) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (nonatomic, copy) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (nonatomic, copy) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (nonatomic, copy) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
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
- (id)session_messageAsFTFinalSpeechRecognitionResponse;
- (id)session_messageAsFTFinishAudio;
- (id)session_messageAsFTMultiUserStartSpeechRequest;
- (id)session_messageAsFTPartialSpeechRecognitionResponse;
- (id)session_messageAsFTRecognitionCandidate;
- (id)session_messageAsFTRecognitionProgress;
- (id)session_messageAsFTRequestStatsResponse;
- (id)session_messageAsFTResetServerEndpointer;
- (id)session_messageAsFTServerEndpointFeatures;
- (id)session_messageAsFTSetAlternateRecognitionSausage;
- (id)session_messageAsFTSetEndpointerState;
- (id)session_messageAsFTSetRequestOrigin;
- (id)session_messageAsFTSetSpeechContext;
- (id)session_messageAsFTSetSpeechProfile;
- (id)session_messageAsFTUpdateAudioInfo;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTAudioLimitExceeded:(id)arg1;
- (void)setSession_messageAsFTAudioPacket:(id)arg1;
- (void)setSession_messageAsFTClientSetupInfo:(id)arg1;
- (void)setSession_messageAsFTFinalBlazarResponse:(id)arg1;
- (void)setSession_messageAsFTFinalSpeechRecognitionResponse:(id)arg1;
- (void)setSession_messageAsFTFinishAudio:(id)arg1;
- (void)setSession_messageAsFTMultiUserStartSpeechRequest:(id)arg1;
- (void)setSession_messageAsFTPartialSpeechRecognitionResponse:(id)arg1;
- (void)setSession_messageAsFTRecognitionCandidate:(id)arg1;
- (void)setSession_messageAsFTRecognitionProgress:(id)arg1;
- (void)setSession_messageAsFTRequestStatsResponse:(id)arg1;
- (void)setSession_messageAsFTResetServerEndpointer:(id)arg1;
- (void)setSession_messageAsFTServerEndpointFeatures:(id)arg1;
- (void)setSession_messageAsFTSetAlternateRecognitionSausage:(id)arg1;
- (void)setSession_messageAsFTSetEndpointerState:(id)arg1;
- (void)setSession_messageAsFTSetRequestOrigin:(id)arg1;
- (void)setSession_messageAsFTSetSpeechContext:(id)arg1;
- (void)setSession_messageAsFTSetSpeechProfile:(id)arg1;
- (void)setSession_messageAsFTUpdateAudioInfo:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
