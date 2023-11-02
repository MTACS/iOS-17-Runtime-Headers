
@interface QSSMutableTextToSpeechRouterStreamingStreamingResponse : QSSTextToSpeechRouterStreamingStreamingResponse

@property (nonatomic, copy) QSSBeginTextToSpeechStreamingResponse *contentAsQSSBeginTextToSpeechStreamingResponse;
@property (nonatomic, copy) QSSFinalTextToSpeechStreamingResponse *contentAsQSSFinalTextToSpeechStreamingResponse;
@property (nonatomic, copy) QSSPartialTextToSpeechStreamingResponse *contentAsQSSPartialTextToSpeechStreamingResponse;
@property (nonatomic) long long content_type;

- (id)contentAsQSSBeginTextToSpeechStreamingResponse;
- (id)contentAsQSSFinalTextToSpeechStreamingResponse;
- (id)contentAsQSSPartialTextToSpeechStreamingResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSBeginTextToSpeechStreamingResponse:(id)arg1;
- (void)setContentAsQSSFinalTextToSpeechStreamingResponse:(id)arg1;
- (void)setContentAsQSSPartialTextToSpeechStreamingResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
