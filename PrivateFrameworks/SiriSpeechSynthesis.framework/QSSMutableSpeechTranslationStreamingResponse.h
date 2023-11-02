
@interface QSSMutableSpeechTranslationStreamingResponse : QSSSpeechTranslationStreamingResponse

@property (nonatomic, copy) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (nonatomic, copy) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (nonatomic, copy) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (nonatomic, copy) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (nonatomic, copy) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (nonatomic, copy) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (nonatomic, copy) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (nonatomic, copy) QSSSpeechTranslationFinalRecognitionResponse *contentAsQSSSpeechTranslationFinalRecognitionResponse;
@property (nonatomic, copy) QSSSpeechTranslationMtResponse *contentAsQSSSpeechTranslationMtResponse;
@property (nonatomic, copy) QSSSpeechTranslationPartialRecognitionResponse *contentAsQSSSpeechTranslationPartialRecognitionResponse;
@property (nonatomic, copy) QSSSpeechTranslationServerEndpointFeatures *contentAsQSSSpeechTranslationServerEndpointFeatures;
@property (nonatomic, copy) QSSSpeechTranslationTextToSpeechResponse *contentAsQSSSpeechTranslationTextToSpeechResponse;
@property (nonatomic) long long content_type;

- (id)contentAsQSSAudioLimitExceeded;
- (id)contentAsQSSClientSetupInfo;
- (id)contentAsQSSFinalBlazarResponse;
- (id)contentAsQSSRecognitionCandidate;
- (id)contentAsQSSRecognitionProgress;
- (id)contentAsQSSRequestStatsResponse;
- (id)contentAsQSSServerEndpointFeatures;
- (id)contentAsQSSSpeechTranslationFinalRecognitionResponse;
- (id)contentAsQSSSpeechTranslationMtResponse;
- (id)contentAsQSSSpeechTranslationPartialRecognitionResponse;
- (id)contentAsQSSSpeechTranslationServerEndpointFeatures;
- (id)contentAsQSSSpeechTranslationTextToSpeechResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSAudioLimitExceeded:(id)arg1;
- (void)setContentAsQSSClientSetupInfo:(id)arg1;
- (void)setContentAsQSSFinalBlazarResponse:(id)arg1;
- (void)setContentAsQSSRecognitionCandidate:(id)arg1;
- (void)setContentAsQSSRecognitionProgress:(id)arg1;
- (void)setContentAsQSSRequestStatsResponse:(id)arg1;
- (void)setContentAsQSSServerEndpointFeatures:(id)arg1;
- (void)setContentAsQSSSpeechTranslationFinalRecognitionResponse:(id)arg1;
- (void)setContentAsQSSSpeechTranslationMtResponse:(id)arg1;
- (void)setContentAsQSSSpeechTranslationPartialRecognitionResponse:(id)arg1;
- (void)setContentAsQSSSpeechTranslationServerEndpointFeatures:(id)arg1;
- (void)setContentAsQSSSpeechTranslationTextToSpeechResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
