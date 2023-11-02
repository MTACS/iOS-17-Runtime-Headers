
@interface QSSMutableGraphemeToPhonemeResponse : QSSGraphemeToPhonemeResponse

@property (nonatomic, copy) NSArray *aot_token_prons;
@property (nonatomic, copy) NSString *g2p_model_version;
@property (nonatomic, copy) NSString *g2p_version;
@property (nonatomic) bool is_pron_guessed;
@property (nonatomic, copy) NSArray *jit_token_prons;
@property (nonatomic, copy) NSArray *phonemes;
@property (nonatomic, copy) NSString *phoneset_version;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSString *session_id;

- (id)aot_token_prons;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)g2p_model_version;
- (id)g2p_version;
- (id)init;
- (bool)is_pron_guessed;
- (id)jit_token_prons;
- (id)phonemes;
- (id)phoneset_version;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (void)setAot_token_prons:(id)arg1;
- (void)setG2p_model_version:(id)arg1;
- (void)setG2p_version:(id)arg1;
- (void)setIs_pron_guessed:(bool)arg1;
- (void)setJit_token_prons:(id)arg1;
- (void)setPhonemes:(id)arg1;
- (void)setPhoneset_version:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setSession_id:(id)arg1;

@end
