
@interface OPTTSTTSPhonemeSequence : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TTSPhonemeSequence { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *word_phonemes;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TTSPhonemeSequence> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSPhonemeSequence { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSPhonemeSequence { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)word_phonemes;
- (unsigned long long)word_phonemes_count;
- (void)word_phonemes_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)word_phonemes_objectAtIndex:(unsigned long long)arg1;

@end
