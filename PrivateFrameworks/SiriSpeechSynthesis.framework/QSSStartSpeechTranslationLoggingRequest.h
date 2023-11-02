
@interface QSSStartSpeechTranslationLoggingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StartSpeechTranslationLoggingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *conversation_id;
@property (nonatomic, readonly) QSSLanguageDetected *detected_locale;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) NSArray *senses;
@property (nonatomic, readonly) QSSTranslationLocalePair *translation_locale_pair;
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
- (id)translation_locale_pair;
- (id)user_interacted_senses;
- (id)user_selected_locale;
- (id)user_selected_sense;

@end
