
@interface QSSMutableSpeechTranslationStreamingRequest : QSSSpeechTranslationStreamingRequest

@property (nonatomic, copy) QSSAudioPacket *contentAsQSSAudioPacket;
@property (nonatomic, copy) QSSFinishAudio *contentAsQSSFinishAudio;
@property (nonatomic, copy) QSSLanguageDetected *contentAsQSSLanguageDetected;
@property (nonatomic, copy) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (nonatomic, copy) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (nonatomic, copy) QSSSpeechTranslationAudioPacket *contentAsQSSSpeechTranslationAudioPacket;
@property (nonatomic, copy) QSSStartSpeechTranslationLoggingRequest *contentAsQSSStartSpeechTranslationLoggingRequest;
@property (nonatomic, copy) QSSStartSpeechTranslationRequest *contentAsQSSStartSpeechTranslationRequest;
@property (nonatomic) long long content_type;

- (id)contentAsQSSAudioPacket;
- (id)contentAsQSSFinishAudio;
- (id)contentAsQSSLanguageDetected;
- (id)contentAsQSSResetServerEndpointer;
- (id)contentAsQSSSetEndpointerState;
- (id)contentAsQSSSpeechTranslationAudioPacket;
- (id)contentAsQSSStartSpeechTranslationLoggingRequest;
- (id)contentAsQSSStartSpeechTranslationRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSAudioPacket:(id)arg1;
- (void)setContentAsQSSFinishAudio:(id)arg1;
- (void)setContentAsQSSLanguageDetected:(id)arg1;
- (void)setContentAsQSSResetServerEndpointer:(id)arg1;
- (void)setContentAsQSSSetEndpointerState:(id)arg1;
- (void)setContentAsQSSSpeechTranslationAudioPacket:(id)arg1;
- (void)setContentAsQSSStartSpeechTranslationLoggingRequest:(id)arg1;
- (void)setContentAsQSSStartSpeechTranslationRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
