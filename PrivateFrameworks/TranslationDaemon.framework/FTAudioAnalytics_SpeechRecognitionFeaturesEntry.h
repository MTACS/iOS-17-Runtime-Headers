
@interface FTAudioAnalytics_SpeechRecognitionFeaturesEntry : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechRecognitionFeaturesEntry { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) float value;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::AudioAnalytics_::SpeechRecognitionFeaturesEntry> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechRecognitionFeaturesEntry { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechRecognitionFeaturesEntry { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)key;
- (float)value;

@end
