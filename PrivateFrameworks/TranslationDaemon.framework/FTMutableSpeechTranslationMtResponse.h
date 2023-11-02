
@interface FTMutableSpeechTranslationMtResponse : FTSpeechTranslationMtResponse

@property (nonatomic, copy) NSArray *alternative_descriptions;
@property (nonatomic, copy) NSString *conversation_id;
@property (nonatomic) bool is_final;
@property (nonatomic, copy) NSArray *n_best_translated_phrases;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) FTTranslationLocalePair *translation_locale_pair;

- (id)alternative_descriptions;
- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)is_final;
- (id)n_best_translated_phrases;
- (id)request_id;
- (int)return_code;
- (id)return_str;
- (void)setAlternative_descriptions:(id)arg1;
- (void)setConversation_id:(id)arg1;
- (void)setIs_final:(bool)arg1;
- (void)setN_best_translated_phrases:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setTranslation_locale_pair:(id)arg1;
- (id)translation_locale_pair;

@end
