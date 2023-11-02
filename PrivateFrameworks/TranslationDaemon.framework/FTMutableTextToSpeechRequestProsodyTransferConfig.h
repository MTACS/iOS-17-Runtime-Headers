
@interface FTMutableTextToSpeechRequestProsodyTransferConfig : FTTextToSpeechRequestProsodyTransferConfig

@property (nonatomic, copy) FTTextToSpeechUserVoiceProfile *user_voice_profile;
@property (nonatomic, copy) NSString *user_voice_profile_url;
@property (nonatomic, copy) FTTextToSpeechSpeechFeatureInputWave *wave_data;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setUser_voice_profile:(id)arg1;
- (void)setUser_voice_profile_url:(id)arg1;
- (void)setWave_data:(id)arg1;
- (id)user_voice_profile;
- (id)user_voice_profile_url;
- (id)wave_data;

@end
