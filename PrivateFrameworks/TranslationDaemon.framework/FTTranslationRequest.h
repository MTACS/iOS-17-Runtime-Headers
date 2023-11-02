
@interface FTTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TranslationRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *app_id;
@property (nonatomic, readonly) bool disable_log;
@property (nonatomic, readonly) bool is_partial;
@property (nonatomic, readonly) long long opt_in_status;
@property (nonatomic, readonly) FTTranslationOptions *options;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) NSString *sequence_id;
@property (nonatomic, readonly) FTSiriPayloadTranslationInfo *siri_payload_translation_info;
@property (nonatomic, readonly) FTSiriTranslationInfo *siri_translation_info;
@property (nonatomic, readonly) NSString *source_language;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) FTSpeechTranslationInfo *speech_translation_info;
@property (nonatomic, readonly) NSString *target_language;
@property (nonatomic, readonly) NSString *task;
@property (nonatomic, readonly) NSArray *translation_phrase;
@property (nonatomic, readonly) NSString *use_case;
@property (nonatomic, readonly) FTWebTranslationInfo *web_translation_info;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)app_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disable_log;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)is_partial;
- (long long)opt_in_status;
- (id)options;
- (id)request_id;
- (id)sequence_id;
- (id)siri_payload_translation_info;
- (id)siri_translation_info;
- (id)source_language;
- (id)speech_id;
- (id)speech_translation_info;
- (id)target_language;
- (id)task;
- (id)translation_phrase;
- (unsigned long long)translation_phrase_count;
- (void)translation_phrase_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)translation_phrase_objectAtIndex:(unsigned long long)arg1;
- (id)use_case;
- (id)web_translation_info;

@end
