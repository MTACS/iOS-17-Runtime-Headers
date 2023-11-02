
@interface QSSMutableCorrectionsValidatorResponse : QSSCorrectionsValidatorResponse

@property (nonatomic, copy) NSArray *corrections;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corrections;
- (id)init;
- (id)language;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (void)setCorrections:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
