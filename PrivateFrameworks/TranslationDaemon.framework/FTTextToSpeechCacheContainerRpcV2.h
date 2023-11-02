
@interface FTTextToSpeechCacheContainerRpcV2 : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechCacheContainerRpcV2 { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) FTTextToSpeechRequest *cached_request;
@property (nonatomic, readonly) FTTextToSpeechResponse *cached_response;
@property (nonatomic, readonly) NSString *original_session_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheContainerRpcV2> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)cached_request;
- (id)cached_response;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainerRpcV2 { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainerRpcV2 { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)original_session_id;

@end
