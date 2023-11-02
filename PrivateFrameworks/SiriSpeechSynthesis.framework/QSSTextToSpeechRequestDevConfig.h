
@interface QSSTextToSpeechRequestDevConfig : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechRequestDevConfig { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *resource_asset_path;
@property (nonatomic, readonly) bool return_log;
@property (nonatomic, readonly) bool return_server_info;
@property (nonatomic, readonly) NSString *voice_asset_path;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestDevConfig> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestDevConfig { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestDevConfig { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)resource_asset_path;
- (bool)return_log;
- (bool)return_server_info;
- (id)voice_asset_path;

@end
