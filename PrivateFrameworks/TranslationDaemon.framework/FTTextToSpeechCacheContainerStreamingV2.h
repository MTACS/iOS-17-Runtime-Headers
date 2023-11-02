
@interface FTTextToSpeechCacheContainerStreamingV2 : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechCacheContainerStreamingV2 { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) FTBeginTextToSpeechStreamingResponse *cached_begin_response;
@property (nonatomic, readonly) FTFinalTextToSpeechStreamingResponse *cached_final_response;
@property (nonatomic, readonly) NSArray *cached_partial_response;
@property (nonatomic, readonly) FTStartTextToSpeechStreamingRequest *cached_request;
@property (nonatomic, readonly) NSString *original_session_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheContainerStreamingV2> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)cached_begin_response;
- (id)cached_final_response;
- (id)cached_partial_response;
- (unsigned long long)cached_partial_response_count;
- (void)cached_partial_response_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)cached_partial_response_objectAtIndex:(unsigned long long)arg1;
- (id)cached_request;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainerStreamingV2 { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainerStreamingV2 { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)original_session_id;

@end
