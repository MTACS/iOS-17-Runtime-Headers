
@interface QSSTextToSpeechUserVoiceProfile : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechUserVoiceProfile { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) float duration_mean;
@property (nonatomic, readonly) float duration_std;
@property (nonatomic, readonly) float energy_mean;
@property (nonatomic, readonly) float energy_std;
@property (nonatomic, readonly) float pitch_mean;
@property (nonatomic, readonly) float pitch_std;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechUserVoiceProfile> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)duration_mean;
- (float)duration_std;
- (float)energy_mean;
- (float)energy_std;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserVoiceProfile { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserVoiceProfile { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (float)pitch_mean;
- (float)pitch_std;

@end
