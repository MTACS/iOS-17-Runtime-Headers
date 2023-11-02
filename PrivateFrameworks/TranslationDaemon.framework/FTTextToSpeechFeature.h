
@interface FTTextToSpeechFeature : NSObject <FLTBFBufferAccessor, NSCopying> {
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
- (unsigned long long)neural_phoneme_sequence_count;
- (void)neural_phoneme_sequence_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)neural_phoneme_sequence_objectAtIndex:(unsigned long long)arg1;
- (id)normalized_text;
- (unsigned long long)normalized_text_count;
- (void)normalized_text_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)normalized_text_objectAtIndex:(unsigned long long)arg1;
- (id)phoneme_sequence;
- (unsigned long long)phoneme_sequence_count;
- (void)phoneme_sequence_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)phoneme_sequence_objectAtIndex:(unsigned long long)arg1;
- (id)prompts;
- (unsigned long long)prompts_count;
- (void)prompts_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)prompts_objectAtIndex:(unsigned long long)arg1;
- (id)replacement;
- (unsigned long long)replacement_count;
- (void)replacement_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)replacement_objectAtIndex:(unsigned long long)arg1;

@end
