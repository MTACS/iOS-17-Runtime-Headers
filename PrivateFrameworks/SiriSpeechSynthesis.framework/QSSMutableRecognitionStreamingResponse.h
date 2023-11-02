
@interface QSSMutableRecognitionStreamingResponse : QSSRecognitionStreamingResponse

@property (nonatomic, copy) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (nonatomic, copy) QSSCheckForSpeechResponse *contentAsQSSCheckForSpeechResponse;
@property (nonatomic, copy) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (nonatomic, copy) QSSEndPointCandidate *contentAsQSSEndPointCandidate;
@property (nonatomic, copy) QSSEndPointLikelihood *contentAsQSSEndPointLikelihood;
@property (nonatomic, copy) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (nonatomic, copy) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (nonatomic, copy) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (nonatomic, copy) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (nonatomic, copy) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (nonatomic, copy) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (nonatomic, copy) QSSUpdatedAcousticProfile *contentAsQSSUpdatedAcousticProfile;
@property (nonatomic) long long content_type;

- (id)contentAsQSSAudioLimitExceeded;
- (id)contentAsQSSCheckForSpeechResponse;
- (id)contentAsQSSClientSetupInfo;
- (id)contentAsQSSEndPointCandidate;
- (id)contentAsQSSEndPointLikelihood;
- (id)contentAsQSSFinalSpeechRecognitionResponse;
- (id)contentAsQSSPartialSpeechRecognitionResponse;
- (id)contentAsQSSRecognitionCandidate;
- (id)contentAsQSSRecognitionProgress;
- (id)contentAsQSSRequestStatsResponse;
- (id)contentAsQSSServerEndpointFeatures;
- (id)contentAsQSSUpdatedAcousticProfile;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSAudioLimitExceeded:(id)arg1;
- (void)setContentAsQSSCheckForSpeechResponse:(id)arg1;
- (void)setContentAsQSSClientSetupInfo:(id)arg1;
- (void)setContentAsQSSEndPointCandidate:(id)arg1;
- (void)setContentAsQSSEndPointLikelihood:(id)arg1;
- (void)setContentAsQSSFinalSpeechRecognitionResponse:(id)arg1;
- (void)setContentAsQSSPartialSpeechRecognitionResponse:(id)arg1;
- (void)setContentAsQSSRecognitionCandidate:(id)arg1;
- (void)setContentAsQSSRecognitionProgress:(id)arg1;
- (void)setContentAsQSSRequestStatsResponse:(id)arg1;
- (void)setContentAsQSSServerEndpointFeatures:(id)arg1;
- (void)setContentAsQSSUpdatedAcousticProfile:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
