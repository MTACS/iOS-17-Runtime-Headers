
@interface FTTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TranslationResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *alternative_descriptions;
@property (nonatomic, readonly) NSString *engine_input;
@property (nonatomic, readonly) NSArray *engine_output;
@property (nonatomic, readonly) bool final_message;
@property (nonatomic, readonly) NSArray *n_best_translated_phrases;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_string;
@property (nonatomic, readonly) NSString *sequence_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)alternative_descriptions;
- (unsigned long long)alternative_descriptions_count;
- (void)alternative_descriptions_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)alternative_descriptions_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)engine_input;
- (id)engine_output;
- (unsigned long long)engine_output_count;
- (void)engine_output_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)engine_output_objectAtIndex:(unsigned long long)arg1;
- (bool)final_message;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)n_best_translated_phrases;
- (unsigned long long)n_best_translated_phrases_count;
- (void)n_best_translated_phrases_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)n_best_translated_phrases_objectAtIndex:(unsigned long long)arg1;
- (id)request_id;
- (int)return_code;
- (id)return_string;
- (id)sequence_id;
- (id)speech_id;

@end
