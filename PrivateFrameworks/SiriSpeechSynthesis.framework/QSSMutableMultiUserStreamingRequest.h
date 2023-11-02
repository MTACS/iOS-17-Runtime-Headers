
@interface QSSMutableMultiUserStreamingRequest : QSSMultiUserStreamingRequest

@property (nonatomic, copy) QSSAudioPacket *contentAsQSSAudioPacket;
@property (nonatomic, copy) QSSFinishAudio *contentAsQSSFinishAudio;
@property (nonatomic, copy) QSSMultiUserStartSpeechRequest *contentAsQSSMultiUserStartSpeechRequest;
@property (nonatomic, copy) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (nonatomic, copy) QSSSetAlternateRecognitionSausage *contentAsQSSSetAlternateRecognitionSausage;
@property (nonatomic, copy) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (nonatomic, copy) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (nonatomic, copy) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (nonatomic, copy) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (nonatomic, copy) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (nonatomic) long long content_type;

- (id)contentAsQSSAudioPacket;
- (id)contentAsQSSFinishAudio;
- (id)contentAsQSSMultiUserStartSpeechRequest;
- (id)contentAsQSSResetServerEndpointer;
- (id)contentAsQSSSetAlternateRecognitionSausage;
- (id)contentAsQSSSetEndpointerState;
- (id)contentAsQSSSetRequestOrigin;
- (id)contentAsQSSSetSpeechContext;
- (id)contentAsQSSSetSpeechProfile;
- (id)contentAsQSSUpdateAudioInfo;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSAudioPacket:(id)arg1;
- (void)setContentAsQSSFinishAudio:(id)arg1;
- (void)setContentAsQSSMultiUserStartSpeechRequest:(id)arg1;
- (void)setContentAsQSSResetServerEndpointer:(id)arg1;
- (void)setContentAsQSSSetAlternateRecognitionSausage:(id)arg1;
- (void)setContentAsQSSSetEndpointerState:(id)arg1;
- (void)setContentAsQSSSetRequestOrigin:(id)arg1;
- (void)setContentAsQSSSetSpeechContext:(id)arg1;
- (void)setContentAsQSSSetSpeechProfile:(id)arg1;
- (void)setContentAsQSSUpdateAudioInfo:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
