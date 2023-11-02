
@interface QSSMutableCreateLanguageProfileResponse : QSSCreateLanguageProfileResponse

@property (nonatomic) int error_code;
@property (nonatomic, copy) NSString *error_str;
@property (nonatomic) bool incomplete_profile;
@property (nonatomic) bool recreate_apg_prons;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) QSSUserLanguageProfile *user_language_profile;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (bool)incomplete_profile;
- (id)init;
- (bool)recreate_apg_prons;
- (id)session_id;
- (void)setError_code:(int)arg1;
- (void)setError_str:(id)arg1;
- (void)setIncomplete_profile:(bool)arg1;
- (void)setRecreate_apg_prons:(bool)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setUser_language_profile:(id)arg1;
- (id)speech_id;
- (id)user_language_profile;

@end
