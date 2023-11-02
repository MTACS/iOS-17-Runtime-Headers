
@interface FTTextToSpeechSpeechFeatureOutputFeature : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechSpeechFeatureOutputFeature { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) float begin_time;
@property (nonatomic, readonly) float duration;
@property (nonatomic, readonly) float end_time;
@property (nonatomic, readonly) float energy;
@property (nonatomic, readonly) NSString *phone_name;
@property (nonatomic, readonly) float pitch;
@property (nonatomic, readonly) int word_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureOutputFeature> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (float)begin_time;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)duration;
- (float)end_time;
- (float)energy;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureOutputFeature { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureOutputFeature { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)phone_name;
- (float)pitch;
- (int)word_id;

@end
