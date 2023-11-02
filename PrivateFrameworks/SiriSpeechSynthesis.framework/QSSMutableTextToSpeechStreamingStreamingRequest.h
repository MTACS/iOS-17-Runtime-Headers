
@interface QSSMutableTextToSpeechStreamingStreamingRequest : QSSTextToSpeechStreamingStreamingRequest

@property (nonatomic, copy) QSSStartTextToSpeechStreamingRequest *contentAsQSSStartTextToSpeechStreamingRequest;
@property (nonatomic) long long content_type;

- (id)contentAsQSSStartTextToSpeechStreamingRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSStartTextToSpeechStreamingRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
