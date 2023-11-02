
@interface FTMutableRecognitionStreamingResponse : FTRecognitionStreamingResponse

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (nonatomic, copy) FTCheckForSpeechResponse *contentAsFTCheckForSpeechResponse;
@property (nonatomic, copy) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (nonatomic, copy) FTEndPointCandidate *contentAsFTEndPointCandidate;
@property (nonatomic, copy) FTEndPointLikelihood *contentAsFTEndPointLikelihood;
@property (nonatomic, copy) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (nonatomic, copy) FTMultiUserFinalSpeechRecognitionResponse *contentAsFTMultiUserFinalSpeechRecognitionResponse;
@property (nonatomic, copy) FTMultiUserRecognitionCandidate *contentAsFTMultiUserRecognitionCandidate;
@property (nonatomic, copy) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (nonatomic, copy) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (nonatomic, copy) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (nonatomic, copy) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (nonatomic, copy) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (nonatomic, copy) FTUpdatedAcousticProfile *contentAsFTUpdatedAcousticProfile;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTAudioLimitExceeded;
- (id)contentAsFTCheckForSpeechResponse;
- (id)contentAsFTClientSetupInfo;
- (id)contentAsFTEndPointCandidate;
- (id)contentAsFTEndPointLikelihood;
- (id)contentAsFTFinalSpeechRecognitionResponse;
- (id)contentAsFTMultiUserFinalSpeechRecognitionResponse;
- (id)contentAsFTMultiUserRecognitionCandidate;
- (id)contentAsFTPartialSpeechRecognitionResponse;
- (id)contentAsFTRecognitionCandidate;
- (id)contentAsFTRecognitionProgress;
- (id)contentAsFTRequestStatsResponse;
- (id)contentAsFTServerEndpointFeatures;
- (id)contentAsFTUpdatedAcousticProfile;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTAudioLimitExceeded:(id)arg1;
- (void)setContentAsFTCheckForSpeechResponse:(id)arg1;
- (void)setContentAsFTClientSetupInfo:(id)arg1;
- (void)setContentAsFTEndPointCandidate:(id)arg1;
- (void)setContentAsFTEndPointLikelihood:(id)arg1;
- (void)setContentAsFTFinalSpeechRecognitionResponse:(id)arg1;
- (void)setContentAsFTMultiUserFinalSpeechRecognitionResponse:(id)arg1;
- (void)setContentAsFTMultiUserRecognitionCandidate:(id)arg1;
- (void)setContentAsFTPartialSpeechRecognitionResponse:(id)arg1;
- (void)setContentAsFTRecognitionCandidate:(id)arg1;
- (void)setContentAsFTRecognitionProgress:(id)arg1;
- (void)setContentAsFTRequestStatsResponse:(id)arg1;
- (void)setContentAsFTServerEndpointFeatures:(id)arg1;
- (void)setContentAsFTUpdatedAcousticProfile:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
