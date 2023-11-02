
@interface FTTranslationPhraseMetaInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TranslationPhraseMetaInfo { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *romanization;
@property (nonatomic, readonly) NSArray *selection_spans;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationPhraseMetaInfo> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhraseMetaInfo { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhraseMetaInfo { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)romanization;
- (id)selection_spans;
- (unsigned long long)selection_spans_count;
- (void)selection_spans_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)selection_spans_objectAtIndex:(unsigned long long)arg1;

@end
