
@interface FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Alternative : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct Alternative { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int alternative_description_index;
@property (nonatomic, readonly) int selection_span_index;
@property (nonatomic, readonly) int translation_phrase_index;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationPhraseMetaInfo_::AlternativeSelectedSpan_::Alternative> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (int)alternative_description_index;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Alternative { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Alternative { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (int)selection_span_index;
- (int)translation_phrase_index;

@end
