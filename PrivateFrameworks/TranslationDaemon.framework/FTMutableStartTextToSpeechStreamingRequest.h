
@interface FTMutableStartTextToSpeechStreamingRequest : FTStartTextToSpeechStreamingRequest

@property (nonatomic) long long audio_type;
@property (nonatomic, copy) FTTextToSpeechRequestContext *context;
@property (nonatomic, copy) NSArray *context_info;
@property (nonatomic, copy) FTTextToSpeechRequestDebug *debug;
@property (nonatomic, copy) FTTextToSpeechRequestDevConfig *dev_config;
@property (nonatomic) bool enable_word_timing_info;
@property (nonatomic, copy) FTTextToSpeechRequestExperiment *experiment;
@property (nonatomic, copy) FTTTSRequestFeatureFlags *feature_flags;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) FTTextToSpeechRequestMeta *meta_info;
@property (nonatomic) long long preferred_voice_type;
@property (nonatomic, copy) FTTextToSpeechUserProfile *profile;
@property (nonatomic, copy) FTTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (nonatomic, copy) FTTextToSpeechRequestProsodyControlConfig *prosody_control_config;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSString *stream_id;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *voice_name;

- (long long)audio_type;
- (id)context;
- (id)context_info;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debug;
- (id)dev_config;
- (bool)enable_word_timing_info;
- (id)experiment;
- (id)feature_flags;
- (id)gender;
- (id)init;
- (id)language;
- (id)meta_info;
- (long long)preferred_voice_type;
- (id)profile;
- (id)prosody_config;
- (id)prosody_control_config;
- (id)session_id;
- (void)setAudio_type:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setContext_info:(id)arg1;
- (void)setDebug:(id)arg1;
- (void)setDev_config:(id)arg1;
- (void)setEnable_word_timing_info:(bool)arg1;
- (void)setExperiment:(id)arg1;
- (void)setFeature_flags:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMeta_info:(id)arg1;
- (void)setPreferred_voice_type:(long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setProsody_config:(id)arg1;
- (void)setProsody_control_config:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setStream_id:(id)arg1;
- (void)setText:(id)arg1;
- (void)setVoice_name:(id)arg1;
- (id)speech_id;
- (id)stream_id;
- (id)text;
- (id)voice_name;

@end
