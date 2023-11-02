
@interface FTMutableTranslationRequest : FTTranslationRequest

@property (nonatomic, copy) NSString *app_id;
@property (nonatomic) bool disable_log;
@property (nonatomic) bool is_partial;
@property (nonatomic) long long opt_in_status;
@property (nonatomic, copy) FTTranslationOptions *options;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic, copy) NSString *sequence_id;
@property (nonatomic, copy) FTSiriPayloadTranslationInfo *siri_payload_translation_info;
@property (nonatomic, copy) FTSiriTranslationInfo *siri_translation_info;
@property (nonatomic, copy) NSString *source_language;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) FTSpeechTranslationInfo *speech_translation_info;
@property (nonatomic, copy) NSString *target_language;
@property (nonatomic, copy) NSString *task;
@property (nonatomic, copy) NSArray *translation_phrase;
@property (nonatomic, copy) NSString *use_case;
@property (nonatomic, copy) FTWebTranslationInfo *web_translation_info;

- (id)app_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disable_log;
- (id)init;
- (bool)is_partial;
- (long long)opt_in_status;
- (id)options;
- (id)request_id;
- (id)sequence_id;
- (void)setApp_id:(id)arg1;
- (void)setDisable_log:(bool)arg1;
- (void)setIs_partial:(bool)arg1;
- (void)setOpt_in_status:(long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setSequence_id:(id)arg1;
- (void)setSiri_payload_translation_info:(id)arg1;
- (void)setSiri_translation_info:(id)arg1;
- (void)setSource_language:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setSpeech_translation_info:(id)arg1;
- (void)setTarget_language:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTranslation_phrase:(id)arg1;
- (void)setUse_case:(id)arg1;
- (void)setWeb_translation_info:(id)arg1;
- (id)siri_payload_translation_info;
- (id)siri_translation_info;
- (id)source_language;
- (id)speech_id;
- (id)speech_translation_info;
- (id)target_language;
- (id)task;
- (id)translation_phrase;
- (id)use_case;
- (id)web_translation_info;

@end
