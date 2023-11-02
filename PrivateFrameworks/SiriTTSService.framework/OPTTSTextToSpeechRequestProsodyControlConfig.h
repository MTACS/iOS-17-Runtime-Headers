
@interface OPTTSTextToSpeechRequestProsodyControlConfig : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechRequestProsodyControlConfig { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) float global_energy;
@property (nonatomic, readonly) float global_pitch;
@property (nonatomic, readonly) float global_rate;
@property (nonatomic, readonly) float global_sent_duration;
@property (nonatomic, readonly) float global_sent_energy;
@property (nonatomic, readonly) float global_sent_pitch;
@property (nonatomic, readonly) float global_sent_pitchrange;
@property (nonatomic, readonly) float global_sent_tilt;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestProsodyControlConfig> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (float)global_energy;
- (float)global_pitch;
- (float)global_rate;
- (float)global_sent_duration;
- (float)global_sent_energy;
- (float)global_sent_pitch;
- (float)global_sent_pitchrange;
- (float)global_sent_tilt;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestProsodyControlConfig { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestProsodyControlConfig { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
