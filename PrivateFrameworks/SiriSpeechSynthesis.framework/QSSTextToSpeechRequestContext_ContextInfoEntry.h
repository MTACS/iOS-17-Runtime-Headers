
@interface QSSTextToSpeechRequestContext_ContextInfoEntry : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ContextInfoEntry { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestContext_::ContextInfoEntry> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextInfoEntry { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextInfoEntry { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)key;
- (id)value;

@end
