
@interface QSSMutableTranslationResponse : QSSTranslationResponse

@property (nonatomic, copy) NSString *engine_input;
@property (nonatomic, copy) NSArray *engine_output;
@property (nonatomic) bool final_message;
@property (nonatomic, copy) NSArray *n_best_translated_phrases;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_string;
@property (nonatomic, copy) NSString *sequence_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)engine_input;
- (id)engine_output;
- (bool)final_message;
- (id)init;
- (id)n_best_translated_phrases;
- (id)request_id;
- (int)return_code;
- (id)return_string;
- (id)sequence_id;
- (void)setEngine_input:(id)arg1;
- (void)setEngine_output:(id)arg1;
- (void)setFinal_message:(bool)arg1;
- (void)setN_best_translated_phrases:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_string:(id)arg1;
- (void)setSequence_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
