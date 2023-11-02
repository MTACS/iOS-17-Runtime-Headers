
@interface FTMutableMultiUserStreamingRequest : FTMultiUserStreamingRequest

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTAudioPacket *contentAsFTAudioPacket;
@property (nonatomic, copy) FTFinishAudio *contentAsFTFinishAudio;
@property (nonatomic, copy) FTMultiUserStartSpeechRequest *contentAsFTMultiUserStartSpeechRequest;
@property (nonatomic, copy) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (nonatomic, copy) FTSetAlternateRecognitionSausage *contentAsFTSetAlternateRecognitionSausage;
@property (nonatomic, copy) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (nonatomic, copy) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (nonatomic, copy) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (nonatomic, copy) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (nonatomic, copy) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTAudioPacket;
- (id)contentAsFTFinishAudio;
- (id)contentAsFTMultiUserStartSpeechRequest;
- (id)contentAsFTResetServerEndpointer;
- (id)contentAsFTSetAlternateRecognitionSausage;
- (id)contentAsFTSetEndpointerState;
- (id)contentAsFTSetRequestOrigin;
- (id)contentAsFTSetSpeechContext;
- (id)contentAsFTSetSpeechProfile;
- (id)contentAsFTUpdateAudioInfo;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTAudioPacket:(id)arg1;
- (void)setContentAsFTFinishAudio:(id)arg1;
- (void)setContentAsFTMultiUserStartSpeechRequest:(id)arg1;
- (void)setContentAsFTResetServerEndpointer:(id)arg1;
- (void)setContentAsFTSetAlternateRecognitionSausage:(id)arg1;
- (void)setContentAsFTSetEndpointerState:(id)arg1;
- (void)setContentAsFTSetRequestOrigin:(id)arg1;
- (void)setContentAsFTSetSpeechContext:(id)arg1;
- (void)setContentAsFTSetSpeechProfile:(id)arg1;
- (void)setContentAsFTUpdateAudioInfo:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
