
@interface FTBatchTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BatchTranslationRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *app_id;
@property (nonatomic, readonly) bool is_partial;
@property (nonatomic, readonly) long long opt_in_status;
@property (nonatomic, readonly) FTTranslationOptions *options;
@property (nonatomic, readonly) NSArray *paragraphs;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *source_language;
@property (nonatomic, readonly) NSString *target_language;
@property (nonatomic, readonly) NSString *task;
@property (nonatomic, readonly) NSString *url;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BatchTranslationRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)app_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)is_partial;
- (long long)opt_in_status;
- (id)options;
- (id)paragraphs;
- (unsigned long long)paragraphs_count;
- (void)paragraphs_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)paragraphs_objectAtIndex:(unsigned long long)arg1;
- (id)request_id;
- (id)session_id;
- (id)source_language;
- (id)target_language;
- (id)task;
- (id)url;

@end
