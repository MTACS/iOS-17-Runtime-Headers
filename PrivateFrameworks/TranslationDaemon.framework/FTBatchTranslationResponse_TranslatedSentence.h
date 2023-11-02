
@interface FTBatchTranslationResponse_TranslatedSentence : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TranslatedSentence { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *alternative_descriptions;
@property (nonatomic, readonly) NSString *engine_input;
@property (nonatomic, readonly) NSArray *n_best_choices;
@property (nonatomic, readonly) FTSpan *source_span;
@property (nonatomic, readonly) FTSpan *target_span;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslatedSentence> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)alternative_descriptions;
- (unsigned long long)alternative_descriptions_count;
- (void)alternative_descriptions_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)alternative_descriptions_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)engine_input;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslatedSentence { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslatedSentence { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)n_best_choices;
- (unsigned long long)n_best_choices_count;
- (void)n_best_choices_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)n_best_choices_objectAtIndex:(unsigned long long)arg1;
- (id)source_span;
- (id)target_span;

@end
