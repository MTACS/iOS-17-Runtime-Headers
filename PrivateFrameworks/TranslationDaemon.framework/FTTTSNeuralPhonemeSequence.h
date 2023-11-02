
@interface FTTTSNeuralPhonemeSequence : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TTSNeuralPhonemeSequence { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *phonemes;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TTSNeuralPhonemeSequence> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSNeuralPhonemeSequence { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSNeuralPhonemeSequence { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)phonemes;
- (unsigned long long)phonemes_count;
- (void)phonemes_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)phonemes_objectAtIndex:(unsigned long long)arg1;

@end
