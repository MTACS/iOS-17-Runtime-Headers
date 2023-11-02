
@interface QSSTextToSpeechRequestContext : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechRequestContext { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *context_info;
@property (nonatomic, readonly) NSString *dialog_identifier;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestContext> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)context_info;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dialog_identifier;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestContext { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestContext { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
