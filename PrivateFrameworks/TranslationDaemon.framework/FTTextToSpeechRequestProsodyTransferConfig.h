
@interface FTTextToSpeechRequestProsodyTransferConfig : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechRequestProsodyTransferConfig { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) FTTextToSpeechUserVoiceProfile *user_voice_profile;
@property (nonatomic, readonly) NSString *user_voice_profile_url;
@property (nonatomic, readonly) FTTextToSpeechSpeechFeatureInputWave *wave_data;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestProsodyTransferConfig> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestProsodyTransferConfig { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestProsodyTransferConfig { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)user_voice_profile;
- (id)user_voice_profile_url;
- (id)wave_data;

@end
