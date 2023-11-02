
@interface QSSTextToSpeechStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechStreamingStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSBeginTextToSpeechStreamingResponse *contentAsQSSBeginTextToSpeechStreamingResponse;
@property (nonatomic, readonly) QSSFinalTextToSpeechStreamingResponse *contentAsQSSFinalTextToSpeechStreamingResponse;
@property (nonatomic, readonly) QSSPartialTextToSpeechStreamingResponse *contentAsQSSPartialTextToSpeechStreamingResponse;
@property (nonatomic, readonly) QSSQssAckResponse *contentAsQSSQssAckResponse;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::TextToSpeechStreamingStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)contentAsQSSBeginTextToSpeechStreamingResponse;
- (id)contentAsQSSFinalTextToSpeechStreamingResponse;
- (id)contentAsQSSPartialTextToSpeechStreamingResponse;
- (id)contentAsQSSQssAckResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechStreamingStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechStreamingStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
