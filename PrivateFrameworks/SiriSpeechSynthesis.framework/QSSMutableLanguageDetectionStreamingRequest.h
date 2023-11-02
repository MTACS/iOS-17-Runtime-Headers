
@interface QSSMutableLanguageDetectionStreamingRequest : QSSLanguageDetectionStreamingRequest

@property (nonatomic, copy) QSSAudioPacket *contentAsQSSAudioPacket;
@property (nonatomic, copy) QSSFinishAudio *contentAsQSSFinishAudio;
@property (nonatomic, copy) QSSStartLanguageDetectionRequest *contentAsQSSStartLanguageDetectionRequest;
@property (nonatomic) long long content_type;

- (id)contentAsQSSAudioPacket;
- (id)contentAsQSSFinishAudio;
- (id)contentAsQSSStartLanguageDetectionRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSAudioPacket:(id)arg1;
- (void)setContentAsQSSFinishAudio:(id)arg1;
- (void)setContentAsQSSStartLanguageDetectionRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
