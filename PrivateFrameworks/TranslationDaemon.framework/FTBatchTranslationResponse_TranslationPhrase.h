
@interface FTBatchTranslationResponse_TranslationPhrase : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TranslationPhrase { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) bool low_confidence;
@property (nonatomic, readonly) NSString *meta_info;
@property (nonatomic, readonly) FTTranslationPhraseMetaInfo *meta_info_data;
@property (nonatomic, readonly) NSArray *repeated_spans;
@property (nonatomic, readonly) NSString *translation_phrase;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslationPhrase> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhrase { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhrase { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)low_confidence;
- (id)meta_info;
- (id)meta_info_data;
- (id)repeated_spans;
- (unsigned long long)repeated_spans_count;
- (void)repeated_spans_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)repeated_spans_objectAtIndex:(unsigned long long)arg1;
- (id)translation_phrase;

@end
