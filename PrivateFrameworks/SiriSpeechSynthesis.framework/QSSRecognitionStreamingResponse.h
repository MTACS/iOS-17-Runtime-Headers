
@interface QSSRecognitionStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RecognitionStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (nonatomic, readonly) QSSCheckForSpeechResponse *contentAsQSSCheckForSpeechResponse;
@property (nonatomic, readonly) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (nonatomic, readonly) QSSEndPointCandidate *contentAsQSSEndPointCandidate;
@property (nonatomic, readonly) QSSEndPointLikelihood *contentAsQSSEndPointLikelihood;
@property (nonatomic, readonly) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (nonatomic, readonly) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (nonatomic, readonly) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (nonatomic, readonly) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (nonatomic, readonly) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (nonatomic, readonly) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (nonatomic, readonly) QSSUpdatedAcousticProfile *contentAsQSSUpdatedAcousticProfile;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::RecognitionStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
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
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
