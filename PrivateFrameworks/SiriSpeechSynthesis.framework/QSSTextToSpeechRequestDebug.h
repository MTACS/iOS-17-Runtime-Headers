
@interface QSSTextToSpeechRequestDebug : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechRequestDebug { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) bool disable_cache;
@property (nonatomic, readonly) bool force_use_tts_service;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestDebug> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disable_cache;
- (id)flatbuffData;
- (bool)force_use_tts_service;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestDebug { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestDebug { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
