
@interface QSSMutablePronGuessResponse : QSSPronGuessResponse

@property (nonatomic, copy) NSString *apg_id;
@property (nonatomic) int error_code;
@property (nonatomic, copy) NSString *error_str;
@property (nonatomic, copy) NSArray *human_readable_prons;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSArray *tts_pronunciations;
@property (nonatomic, copy) QSSVocToken *voc_token;

- (id)apg_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)human_readable_prons;
- (id)init;
- (id)session_id;
- (void)setApg_id:(id)arg1;
- (void)setError_code:(int)arg1;
- (void)setError_str:(id)arg1;
- (void)setHuman_readable_prons:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setTts_pronunciations:(id)arg1;
- (void)setVoc_token:(id)arg1;
- (id)speech_id;
- (id)tts_pronunciations;
- (id)voc_token;

@end
