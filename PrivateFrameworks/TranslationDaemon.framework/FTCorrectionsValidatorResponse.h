
@interface FTCorrectionsValidatorResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct CorrectionsValidatorResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *corrections;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::CorrectionsValidatorResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corrections;
- (unsigned long long)corrections_count;
- (void)corrections_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)corrections_objectAtIndex:(unsigned long long)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CorrectionsValidatorResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CorrectionsValidatorResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (id)speech_id;

@end
