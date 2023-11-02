
@interface FTTextToSpeechRouterStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechRouterStreamingStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, readonly) FTBeginTextToSpeechStreamingResponse *contentAsFTBeginTextToSpeechStreamingResponse;
@property (nonatomic, readonly) FTFinalTextToSpeechStreamingResponse *contentAsFTFinalTextToSpeechStreamingResponse;
@property (nonatomic, readonly) FTPartialTextToSpeechStreamingResponse *contentAsFTPartialTextToSpeechStreamingResponse;
@property (nonatomic, readonly) long long content_type;

+ (Class)content_immutableClassForType:(long long)arg1;
+ (long long)content_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)content;
- (id)contentAsFTBeginTextToSpeechStreamingResponse;
- (id)contentAsFTFinalTextToSpeechStreamingResponse;
- (id)contentAsFTPartialTextToSpeechStreamingResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
