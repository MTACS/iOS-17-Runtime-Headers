
@interface QSSTextToSpeechFeature : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechFeature { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *neural_phoneme_sequence;
@property (nonatomic, readonly) NSArray *normalized_text;
@property (nonatomic, readonly) NSArray *phoneme_sequence;
@property (nonatomic, readonly) NSArray *prompts;
@property (nonatomic, readonly) NSArray *replacement;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechFeature> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechFeature { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechFeature { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)neural_phoneme_sequence;
- (id)normalized_text;
- (id)phoneme_sequence;
- (id)prompts;
- (id)replacement;

@end
