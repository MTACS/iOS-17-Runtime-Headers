
@interface FTMutableSpeechTranslationStreamingResponse : FTSpeechTranslationStreamingResponse

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (nonatomic, copy) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (nonatomic, copy) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (nonatomic, copy) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (nonatomic, copy) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (nonatomic, copy) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (nonatomic, copy) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (nonatomic, copy) FTSpeechTranslationFinalRecognitionResponse *contentAsFTSpeechTranslationFinalRecognitionResponse;
@property (nonatomic, copy) FTSpeechTranslationMtResponse *contentAsFTSpeechTranslationMtResponse;
@property (nonatomic, copy) FTSpeechTranslationPartialRecognitionResponse *contentAsFTSpeechTranslationPartialRecognitionResponse;
@property (nonatomic, copy) FTSpeechTranslationServerEndpointFeatures *contentAsFTSpeechTranslationServerEndpointFeatures;
@property (nonatomic, copy) FTSpeechTranslationTextToSpeechResponse *contentAsFTSpeechTranslationTextToSpeechResponse;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTAudioLimitExceeded;
- (id)contentAsFTClientSetupInfo;
- (id)contentAsFTFinalBlazarResponse;
- (id)contentAsFTRecognitionCandidate;
- (id)contentAsFTRecognitionProgress;
- (id)contentAsFTRequestStatsResponse;
- (id)contentAsFTServerEndpointFeatures;
- (id)contentAsFTSpeechTranslationFinalRecognitionResponse;
- (id)contentAsFTSpeechTranslationMtResponse;
- (id)contentAsFTSpeechTranslationPartialRecognitionResponse;
- (id)contentAsFTSpeechTranslationServerEndpointFeatures;
- (id)contentAsFTSpeechTranslationTextToSpeechResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTAudioLimitExceeded:(id)arg1;
- (void)setContentAsFTClientSetupInfo:(id)arg1;
- (void)setContentAsFTFinalBlazarResponse:(id)arg1;
- (void)setContentAsFTRecognitionCandidate:(id)arg1;
- (void)setContentAsFTRecognitionProgress:(id)arg1;
- (void)setContentAsFTRequestStatsResponse:(id)arg1;
- (void)setContentAsFTServerEndpointFeatures:(id)arg1;
- (void)setContentAsFTSpeechTranslationFinalRecognitionResponse:(id)arg1;
- (void)setContentAsFTSpeechTranslationMtResponse:(id)arg1;
- (void)setContentAsFTSpeechTranslationPartialRecognitionResponse:(id)arg1;
- (void)setContentAsFTSpeechTranslationServerEndpointFeatures:(id)arg1;
- (void)setContentAsFTSpeechTranslationTextToSpeechResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
