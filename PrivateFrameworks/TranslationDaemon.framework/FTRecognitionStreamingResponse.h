
@interface FTRecognitionStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RecognitionStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, readonly) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (nonatomic, readonly) FTCheckForSpeechResponse *contentAsFTCheckForSpeechResponse;
@property (nonatomic, readonly) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (nonatomic, readonly) FTEndPointCandidate *contentAsFTEndPointCandidate;
@property (nonatomic, readonly) FTEndPointLikelihood *contentAsFTEndPointLikelihood;
@property (nonatomic, readonly) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (nonatomic, readonly) FTMultiUserFinalSpeechRecognitionResponse *contentAsFTMultiUserFinalSpeechRecognitionResponse;
@property (nonatomic, readonly) FTMultiUserRecognitionCandidate *contentAsFTMultiUserRecognitionCandidate;
@property (nonatomic, readonly) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (nonatomic, readonly) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (nonatomic, readonly) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (nonatomic, readonly) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (nonatomic, readonly) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (nonatomic, readonly) FTUpdatedAcousticProfile *contentAsFTUpdatedAcousticProfile;
@property (nonatomic, readonly) long long content_type;

+ (Class)content_immutableClassForType:(long long)arg1;
+ (long long)content_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::RecognitionStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)content;
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
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
