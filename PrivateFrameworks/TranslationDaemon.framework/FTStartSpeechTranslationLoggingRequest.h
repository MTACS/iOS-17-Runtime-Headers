
@interface FTStartSpeechTranslationLoggingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StartSpeechTranslationLoggingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *conversation_id;
@property (nonatomic, readonly) FTLanguageDetected *detected_locale;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) NSArray *senses;
@property (nonatomic, readonly) FTTranslationLocalePair *translation_locale_pair;
@property (nonatomic, readonly) NSArray *user_interacted_senses;
@property (nonatomic, readonly) NSString *user_selected_locale;
@property (nonatomic, readonly) NSString *user_selected_sense;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::StartSpeechTranslationLoggingRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detected_locale;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechTranslationLoggingRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechTranslationLoggingRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)request_id;
- (id)senses;
- (unsigned long long)senses_count;
- (void)senses_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)senses_objectAtIndex:(unsigned long long)arg1;
- (id)translation_locale_pair;
- (id)user_interacted_senses;
- (unsigned long long)user_interacted_senses_count;
- (void)user_interacted_senses_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)user_interacted_senses_objectAtIndex:(unsigned long long)arg1;
- (id)user_selected_locale;
- (id)user_selected_sense;

@end
