
@interface FTMutableStartSpeechTranslationRequest : FTStartSpeechTranslationRequest

@property (nonatomic, copy) NSString *app_id;
@property (nonatomic, copy) NSString *conversation_id;
@property (nonatomic) long long opt_in_status;
@property (nonatomic, copy) FTTranslationOptions *options;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic) bool restricted_mode;
@property (nonatomic, copy) FTStartSpeechRequest *start_speech_request;
@property (nonatomic) bool streaming_mode;
@property (nonatomic, copy) NSArray *text_to_speech_requests;
@property (nonatomic, copy) NSArray *translation_locale_pairs;
@property (nonatomic, copy) FTTranslationRequest *translation_request;

- (id)app_id;
- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (long long)opt_in_status;
- (id)options;
- (id)request_id;
- (bool)restricted_mode;
- (void)setApp_id:(id)arg1;
- (void)setConversation_id:(id)arg1;
- (void)setOpt_in_status:(long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setRestricted_mode:(bool)arg1;
- (void)setStart_speech_request:(id)arg1;
- (void)setStreaming_mode:(bool)arg1;
- (void)setText_to_speech_requests:(id)arg1;
- (void)setTranslation_locale_pairs:(id)arg1;
- (void)setTranslation_request:(id)arg1;
- (id)start_speech_request;
- (bool)streaming_mode;
- (id)text_to_speech_requests;
- (id)translation_locale_pairs;
- (id)translation_request;

@end
