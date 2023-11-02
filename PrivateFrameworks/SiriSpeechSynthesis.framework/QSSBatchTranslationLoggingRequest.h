
@interface QSSBatchTranslationLoggingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BatchTranslationLoggingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) int time_to_first_response;
@property (nonatomic, readonly) int time_to_page_complete;
@property (nonatomic, readonly) int time_to_viewport_complete;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BatchTranslationLoggingRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationLoggingRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationLoggingRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_id;
- (int)time_to_first_response;
- (int)time_to_page_complete;
- (int)time_to_viewport_complete;

@end
