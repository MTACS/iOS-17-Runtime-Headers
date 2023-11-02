
@interface QSSMutableKeywordFinderResponse : QSSKeywordFinderResponse

@property (nonatomic, copy) QSSRecognitionSausage *corrected_sausage;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSArray *n_best_list;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corrected_sausage;
- (id)init;
- (id)language;
- (id)n_best_list;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (void)setCorrected_sausage:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setN_best_list:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
