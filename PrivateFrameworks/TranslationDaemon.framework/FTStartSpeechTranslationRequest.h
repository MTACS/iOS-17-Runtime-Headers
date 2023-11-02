
@interface FTStartSpeechTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StartSpeechTranslationRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *app_id;
@property (nonatomic, readonly) NSString *conversation_id;
@property (nonatomic, readonly) long long opt_in_status;
@property (nonatomic, readonly) FTTranslationOptions *options;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) bool restricted_mode;
@property (nonatomic, readonly) FTStartSpeechRequest *start_speech_request;
@property (nonatomic, readonly) bool streaming_mode;
@property (nonatomic, readonly) NSArray *text_to_speech_requests;
@property (nonatomic, readonly) NSArray *translation_locale_pairs;
@property (nonatomic, readonly) FTTranslationRequest *translation_request;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::StartSpeechTranslationRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)app_id;
- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechTranslationRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechTranslationRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (long long)opt_in_status;
- (id)options;
- (id)request_id;
- (bool)restricted_mode;
- (id)start_speech_request;
- (bool)streaming_mode;
- (id)text_to_speech_requests;
- (unsigned long long)text_to_speech_requests_count;
- (void)text_to_speech_requests_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)text_to_speech_requests_objectAtIndex:(unsigned long long)arg1;
- (id)translation_locale_pairs;
- (unsigned long long)translation_locale_pairs_count;
- (void)translation_locale_pairs_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)translation_locale_pairs_objectAtIndex:(unsigned long long)arg1;
- (id)translation_request;

@end
