
@interface FTMutableStreamingTranslationRequest : FTStreamingTranslationRequest

@property (nonatomic, copy) NSString *app_id;
@property (nonatomic) bool disable_log;
@property (nonatomic) bool final_message;
@property (nonatomic) long long opt_in_status;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic, copy) NSString *sequence_id;
@property (nonatomic, copy) NSString *source_language;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSString *target_language;
@property (nonatomic, copy) NSString *task;
@property (nonatomic, copy) NSString *translation_text;

- (id)app_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disable_log;
- (bool)final_message;
- (id)init;
- (long long)opt_in_status;
- (id)request_id;
- (id)sequence_id;
- (void)setApp_id:(id)arg1;
- (void)setDisable_log:(bool)arg1;
- (void)setFinal_message:(bool)arg1;
- (void)setOpt_in_status:(long long)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setSequence_id:(id)arg1;
- (void)setSource_language:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setTarget_language:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTranslation_text:(id)arg1;
- (id)source_language;
- (id)speech_id;
- (id)target_language;
- (id)task;
- (id)translation_text;

@end
