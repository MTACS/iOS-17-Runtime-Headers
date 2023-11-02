
@interface QSSSetSpeechContext : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SetSpeechContext { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *context_with_pron_hints;
@property (nonatomic, readonly) NSArray *contextual_text;
@property (nonatomic, readonly) NSString *left_context;
@property (nonatomic, readonly) NSString *right_context;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SetSpeechContext> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)context_with_pron_hints;
- (id)contextual_text;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetSpeechContext { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetSpeechContext { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)left_context;
- (id)right_context;

@end
