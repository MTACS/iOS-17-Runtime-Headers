
@interface QSSMutableRecognitionStreamingRequest : QSSRecognitionStreamingRequest

@property (nonatomic, copy) QSSAudioPacket *contentAsQSSAudioPacket;
@property (nonatomic, copy) QSSCheckForSpeechRequest *contentAsQSSCheckForSpeechRequest;
@property (nonatomic, copy) QSSFinishAudio *contentAsQSSFinishAudio;
@property (nonatomic, copy) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (nonatomic, copy) QSSSetAlternateRecognitionSausage *contentAsQSSSetAlternateRecognitionSausage;
@property (nonatomic, copy) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (nonatomic, copy) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (nonatomic, copy) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (nonatomic, copy) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (nonatomic, copy) QSSStartSpeechRequest *contentAsQSSStartSpeechRequest;
@property (nonatomic, copy) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (nonatomic) long long content_type;

- (id)contentAsQSSAudioPacket;
- (id)contentAsQSSCheckForSpeechRequest;
- (id)contentAsQSSFinishAudio;
- (id)contentAsQSSResetServerEndpointer;
- (id)contentAsQSSSetAlternateRecognitionSausage;
- (id)contentAsQSSSetEndpointerState;
- (id)contentAsQSSSetRequestOrigin;
- (id)contentAsQSSSetSpeechContext;
- (id)contentAsQSSSetSpeechProfile;
- (id)contentAsQSSStartSpeechRequest;
- (id)contentAsQSSUpdateAudioInfo;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSAudioPacket:(id)arg1;
- (void)setContentAsQSSCheckForSpeechRequest:(id)arg1;
- (void)setContentAsQSSFinishAudio:(id)arg1;
- (void)setContentAsQSSResetServerEndpointer:(id)arg1;
- (void)setContentAsQSSSetAlternateRecognitionSausage:(id)arg1;
- (void)setContentAsQSSSetEndpointerState:(id)arg1;
- (void)setContentAsQSSSetRequestOrigin:(id)arg1;
- (void)setContentAsQSSSetSpeechContext:(id)arg1;
- (void)setContentAsQSSSetSpeechProfile:(id)arg1;
- (void)setContentAsQSSStartSpeechRequest:(id)arg1;
- (void)setContentAsQSSUpdateAudioInfo:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
