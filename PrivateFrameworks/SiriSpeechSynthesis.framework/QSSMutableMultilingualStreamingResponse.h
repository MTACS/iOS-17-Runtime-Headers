
@interface QSSMutableMultilingualStreamingResponse : QSSMultilingualStreamingResponse

@property (nonatomic, copy) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (nonatomic, copy) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (nonatomic, copy) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (nonatomic, copy) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (nonatomic, copy) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (nonatomic, copy) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (nonatomic) long long content_type;

- (id)contentAsQSSAudioLimitExceeded;
- (id)contentAsQSSFinalBlazarResponse;
- (id)contentAsQSSFinalSpeechRecognitionResponse;
- (id)contentAsQSSPartialSpeechRecognitionResponse;
- (id)contentAsQSSRecognitionCandidate;
- (id)contentAsQSSRequestStatsResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSAudioLimitExceeded:(id)arg1;
- (void)setContentAsQSSFinalBlazarResponse:(id)arg1;
- (void)setContentAsQSSFinalSpeechRecognitionResponse:(id)arg1;
- (void)setContentAsQSSPartialSpeechRecognitionResponse:(id)arg1;
- (void)setContentAsQSSRecognitionCandidate:(id)arg1;
- (void)setContentAsQSSRequestStatsResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
