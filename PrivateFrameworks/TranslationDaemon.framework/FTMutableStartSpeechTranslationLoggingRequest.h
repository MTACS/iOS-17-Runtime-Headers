
@interface FTMutableStartSpeechTranslationLoggingRequest : FTStartSpeechTranslationLoggingRequest

@property (nonatomic, copy) NSString *conversation_id;
@property (nonatomic, copy) FTLanguageDetected *detected_locale;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic, copy) NSArray *senses;
@property (nonatomic, copy) FTTranslationLocalePair *translation_locale_pair;
@property (nonatomic, copy) NSArray *user_interacted_senses;
@property (nonatomic, copy) NSString *user_selected_locale;
@property (nonatomic, copy) NSString *user_selected_sense;

- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detected_locale;
- (id)init;
- (id)request_id;
- (id)senses;
- (void)setConversation_id:(id)arg1;
- (void)setDetected_locale:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setSenses:(id)arg1;
- (void)setTranslation_locale_pair:(id)arg1;
- (void)setUser_interacted_senses:(id)arg1;
- (void)setUser_selected_locale:(id)arg1;
- (void)setUser_selected_sense:(id)arg1;
- (id)translation_locale_pair;
- (id)user_interacted_senses;
- (id)user_selected_locale;
- (id)user_selected_sense;

@end
