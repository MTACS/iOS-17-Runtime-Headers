
@interface QSSBatchTranslationFeedbackRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BatchTranslationFeedbackRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *app_id;
@property (nonatomic, readonly) NSString *device_type;
@property (nonatomic, readonly) NSString *errors;
@property (nonatomic, readonly) NSString *os_version;
@property (nonatomic, readonly) NSString *safari_version;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *source_content;
@property (nonatomic, readonly) NSString *source_language;
@property (nonatomic, readonly) NSString *target_language;
@property (nonatomic, readonly) NSString *translated_content;
@property (nonatomic, readonly) NSString *url;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BatchTranslationFeedbackRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)app_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device_type;
- (id)errors;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationFeedbackRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationFeedbackRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)os_version;
- (id)safari_version;
- (id)session_id;
- (id)source_content;
- (id)source_language;
- (id)target_language;
- (id)translated_content;
- (id)url;

@end
