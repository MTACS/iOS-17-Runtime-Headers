
@interface FTTranslationPhraseMetaInfo_AlternativeSelectedSpan : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct AlternativeSelectedSpan { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *alternatives;
@property (nonatomic, readonly) NSArray *projection_ranges;
@property (nonatomic, readonly) FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Range *source_range;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationPhraseMetaInfo_::AlternativeSelectedSpan> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)alternatives;
- (unsigned long long)alternatives_count;
- (void)alternatives_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)alternatives_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AlternativeSelectedSpan { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AlternativeSelectedSpan { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)projection_ranges;
- (unsigned long long)projection_ranges_count;
- (void)projection_ranges_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)projection_ranges_objectAtIndex:(unsigned long long)arg1;
- (id)source_range;

@end
