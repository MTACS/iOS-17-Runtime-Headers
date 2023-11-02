
@interface QSSTextToSpeechRequestMeta : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechRequestMeta { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *app_id;
@property (nonatomic, readonly) long long channel_type;
@property (nonatomic, readonly) bool is_synthesis;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestMeta> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)app_id;
- (long long)channel_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestMeta { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestMeta { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)is_synthesis;

@end
