
@interface FTSiriTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SiriTranslationInfo { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *itn_alignments;
@property (nonatomic, readonly) NSString *post_itn_recognition;
@property (nonatomic, readonly) NSArray *post_itn_tokens;
@property (nonatomic, readonly) NSArray *raw_nbest_choices;
@property (nonatomic, readonly) FTRecognitionSausage *raw_sausage;
@property (nonatomic, readonly) NSArray *translation_phrase;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SiriTranslationInfo> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriTranslationInfo { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriTranslationInfo { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)itn_alignments;
- (unsigned long long)itn_alignments_count;
- (void)itn_alignments_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)itn_alignments_objectAtIndex:(unsigned long long)arg1;
- (id)post_itn_recognition;
- (id)post_itn_tokens;
- (unsigned long long)post_itn_tokens_count;
- (void)post_itn_tokens_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)post_itn_tokens_objectAtIndex:(unsigned long long)arg1;
- (id)raw_nbest_choices;
- (unsigned long long)raw_nbest_choices_count;
- (void)raw_nbest_choices_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)raw_nbest_choices_objectAtIndex:(unsigned long long)arg1;
- (id)raw_sausage;
- (id)translation_phrase;
- (unsigned long long)translation_phrase_count;
- (void)translation_phrase_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)translation_phrase_objectAtIndex:(unsigned long long)arg1;

@end
