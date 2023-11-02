
@interface QSSSpeechTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechTranslationStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (nonatomic, readonly) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (nonatomic, readonly) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (nonatomic, readonly) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (nonatomic, readonly) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (nonatomic, readonly) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (nonatomic, readonly) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (nonatomic, readonly) QSSSpeechTranslationFinalRecognitionResponse *contentAsQSSSpeechTranslationFinalRecognitionResponse;
@property (nonatomic, readonly) QSSSpeechTranslationMtResponse *contentAsQSSSpeechTranslationMtResponse;
@property (nonatomic, readonly) QSSSpeechTranslationPartialRecognitionResponse *contentAsQSSSpeechTranslationPartialRecognitionResponse;
@property (nonatomic, readonly) QSSSpeechTranslationServerEndpointFeatures *contentAsQSSSpeechTranslationServerEndpointFeatures;
@property (nonatomic, readonly) QSSSpeechTranslationTextToSpeechResponse *contentAsQSSSpeechTranslationTextToSpeechResponse;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
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
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
