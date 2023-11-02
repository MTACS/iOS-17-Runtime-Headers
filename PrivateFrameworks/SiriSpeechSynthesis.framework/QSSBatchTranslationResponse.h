
@interface QSSBatchTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BatchTranslationResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *paragraph_id;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_string;
@property (nonatomic, readonly) NSArray *span;
@property (nonatomic, readonly) NSArray *translated_sentences;
@property (nonatomic, readonly) NSString *translated_text;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BatchTranslationResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)paragraph_id;
- (id)request_id;
- (int)return_code;
- (id)return_string;
- (id)span;
- (id)translated_sentences;
- (id)translated_text;

@end
