
@interface QSSMultilingualStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct MultilingualStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (nonatomic, readonly) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (nonatomic, readonly) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (nonatomic, readonly) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (nonatomic, readonly) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (nonatomic, readonly) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::MultilingualStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)contentAsQSSAudioLimitExceeded;
- (id)contentAsQSSFinalBlazarResponse;
- (id)contentAsQSSFinalSpeechRecognitionResponse;
- (id)contentAsQSSPartialSpeechRecognitionResponse;
- (id)contentAsQSSRecognitionCandidate;
- (id)contentAsQSSRequestStatsResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultilingualStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultilingualStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
