
@interface OPTTSTextToSpeechVoiceResource : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechVoiceResource { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechVoiceResource> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)data:(id /* block */)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoiceResource { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoiceResource { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (long long)type;

@end
