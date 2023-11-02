
@interface FTTextToSpeechSpeechFeatureInputPhonemeSequence : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechSpeechFeatureInputPhonemeSequence { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *phonemeseq;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputPhonemeSequence> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputPhonemeSequence { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputPhonemeSequence { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)phonemeseq;
- (unsigned long long)phonemeseq_count;
- (void)phonemeseq_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)phonemeseq_objectAtIndex:(unsigned long long)arg1;

@end
