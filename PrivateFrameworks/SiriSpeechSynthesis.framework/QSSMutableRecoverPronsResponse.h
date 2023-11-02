
@interface QSSMutableRecoverPronsResponse : QSSRecoverPronsResponse

@property (nonatomic) int error_code;
@property (nonatomic, copy) NSString *error_str;
@property (nonatomic, copy) NSArray *recovery_return_codes;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSArray *voc_tokens;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)init;
- (id)recovery_return_codes;
- (id)session_id;
- (void)setError_code:(int)arg1;
- (void)setError_str:(id)arg1;
- (void)setRecovery_return_codes:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setVoc_tokens:(id)arg1;
- (id)speech_id;
- (id)voc_tokens;

@end
