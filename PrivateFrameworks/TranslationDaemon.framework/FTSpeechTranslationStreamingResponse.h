
@interface FTSpeechTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechTranslationStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, readonly) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (nonatomic, readonly) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (nonatomic, readonly) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (nonatomic, readonly) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (nonatomic, readonly) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (nonatomic, readonly) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (nonatomic, readonly) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (nonatomic, readonly) FTSpeechTranslationFinalRecognitionResponse *contentAsFTSpeechTranslationFinalRecognitionResponse;
@property (nonatomic, readonly) FTSpeechTranslationMtResponse *contentAsFTSpeechTranslationMtResponse;
@property (nonatomic, readonly) FTSpeechTranslationPartialRecognitionResponse *contentAsFTSpeechTranslationPartialRecognitionResponse;
@property (nonatomic, readonly) FTSpeechTranslationServerEndpointFeatures *contentAsFTSpeechTranslationServerEndpointFeatures;
@property (nonatomic, readonly) FTSpeechTranslationTextToSpeechResponse *contentAsFTSpeechTranslationTextToSpeechResponse;
@property (nonatomic, readonly) long long content_type;

+ (Class)content_immutableClassForType:(long long)arg1;
+ (long long)content_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)content;
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
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
