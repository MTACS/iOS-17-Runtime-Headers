
@interface QSSMutablePronGuessStreamingRequest : QSSPronGuessStreamingRequest

@property (nonatomic, copy) QSSAudioPacket *contentAsQSSAudioPacket;
@property (nonatomic, copy) QSSCancelRequest *contentAsQSSCancelRequest;
@property (nonatomic, copy) QSSFinishAudio *contentAsQSSFinishAudio;
@property (nonatomic, copy) QSSStartPronGuessRequest *contentAsQSSStartPronGuessRequest;
@property (nonatomic) long long content_type;

- (id)contentAsQSSAudioPacket;
- (id)contentAsQSSCancelRequest;
- (id)contentAsQSSFinishAudio;
- (id)contentAsQSSStartPronGuessRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSAudioPacket:(id)arg1;
- (void)setContentAsQSSCancelRequest:(id)arg1;
- (void)setContentAsQSSFinishAudio:(id)arg1;
- (void)setContentAsQSSStartPronGuessRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
