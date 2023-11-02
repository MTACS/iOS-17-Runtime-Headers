
@interface QSSTextToSpeechSpeechFeatureInputWave : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechSpeechFeatureInputWave { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSData *pcm_data;
@property (nonatomic, readonly) int sample_rate;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputWave> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputWave { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputWave { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)pcm_data;
- (void)pcm_data:(id /* block */)arg1;
- (int)sample_rate;

@end
