
@interface FTMutableBlazarMultilingualMessage : FTBlazarMultilingualMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (nonatomic, copy) FTAudioPacket *session_messageAsFTAudioPacket;
@property (nonatomic, copy) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (nonatomic, copy) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (nonatomic, copy) FTFinishAudio *session_messageAsFTFinishAudio;
@property (nonatomic, copy) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property (nonatomic, copy) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (nonatomic, copy) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (nonatomic, copy) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (nonatomic, copy) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (nonatomic, copy) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (nonatomic, copy) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (nonatomic, copy) FTStartMultilingualSpeechRequest *session_messageAsFTStartMultilingualSpeechRequest;
@property (nonatomic, copy) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTAudioLimitExceeded;
- (id)session_messageAsFTAudioPacket;
- (id)session_messageAsFTFinalBlazarResponse;
- (id)session_messageAsFTFinalSpeechRecognitionResponse;
- (id)session_messageAsFTFinishAudio;
- (id)session_messageAsFTLanguageDetected;
- (id)session_messageAsFTPartialSpeechRecognitionResponse;
- (id)session_messageAsFTRecognitionCandidate;
- (id)session_messageAsFTRequestStatsResponse;
- (id)session_messageAsFTSetRequestOrigin;
- (id)session_messageAsFTSetSpeechContext;
- (id)session_messageAsFTSetSpeechProfile;
- (id)session_messageAsFTStartMultilingualSpeechRequest;
- (id)session_messageAsFTUpdateAudioInfo;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTAudioLimitExceeded:(id)arg1;
- (void)setSession_messageAsFTAudioPacket:(id)arg1;
- (void)setSession_messageAsFTFinalBlazarResponse:(id)arg1;
- (void)setSession_messageAsFTFinalSpeechRecognitionResponse:(id)arg1;
- (void)setSession_messageAsFTFinishAudio:(id)arg1;
- (void)setSession_messageAsFTLanguageDetected:(id)arg1;
- (void)setSession_messageAsFTPartialSpeechRecognitionResponse:(id)arg1;
- (void)setSession_messageAsFTRecognitionCandidate:(id)arg1;
- (void)setSession_messageAsFTRequestStatsResponse:(id)arg1;
- (void)setSession_messageAsFTSetRequestOrigin:(id)arg1;
- (void)setSession_messageAsFTSetSpeechContext:(id)arg1;
- (void)setSession_messageAsFTSetSpeechProfile:(id)arg1;
- (void)setSession_messageAsFTStartMultilingualSpeechRequest:(id)arg1;
- (void)setSession_messageAsFTUpdateAudioInfo:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
