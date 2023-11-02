
@interface FTSpeechTranslationMtResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechTranslationMtResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *alternative_descriptions;
@property (nonatomic, readonly) NSString *conversation_id;
@property (nonatomic, readonly) bool is_final;
@property (nonatomic, readonly) NSArray *n_best_translated_phrases;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) FTTranslationLocalePair *translation_locale_pair;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationMtResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)alternative_descriptions;
- (unsigned long long)alternative_descriptions_count;
- (void)alternative_descriptions_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)alternative_descriptions_objectAtIndex:(unsigned long long)arg1;
- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationMtResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationMtResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)is_final;
- (id)n_best_translated_phrases;
- (unsigned long long)n_best_translated_phrases_count;
- (void)n_best_translated_phrases_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)n_best_translated_phrases_objectAtIndex:(unsigned long long)arg1;
- (id)request_id;
- (int)return_code;
- (id)return_str;
- (id)translation_locale_pair;

@end
