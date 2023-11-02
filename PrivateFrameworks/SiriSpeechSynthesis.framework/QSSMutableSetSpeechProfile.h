
@interface QSSMutableSetSpeechProfile : QSSSetSpeechProfile

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) QSSUserAcousticProfile *user_acoustic_profile;
@property (nonatomic, copy) QSSUserLanguageProfile *user_language_profile;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language;
- (id)session_id;
- (void)setLanguage:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setUser_acoustic_profile:(id)arg1;
- (void)setUser_language_profile:(id)arg1;
- (id)speech_id;
- (id)user_acoustic_profile;
- (id)user_language_profile;

@end
