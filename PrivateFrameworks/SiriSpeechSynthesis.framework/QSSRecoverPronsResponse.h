
@interface QSSRecoverPronsResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RecoverPronsResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) NSArray *recovery_return_codes;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSArray *voc_tokens;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RecoverPronsResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecoverPronsResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecoverPronsResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)recovery_return_codes;
- (id)session_id;
- (id)speech_id;
- (id)voc_tokens;

@end
