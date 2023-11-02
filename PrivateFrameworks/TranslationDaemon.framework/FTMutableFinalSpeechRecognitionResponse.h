
@interface FTMutableFinalSpeechRecognitionResponse : FTFinalSpeechRecognitionResponse

@property (nonatomic, copy) FTAudioAnalytics *audio_analytics;
@property (nonatomic) bool has_result;
@property (nonatomic) long long lang_profile_recreate_codes;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) FTLatnnMitigatorResult *latnn_mitigator_result;
@property (nonatomic, copy) FTRecognitionResult *recognition_result;
@property (nonatomic, copy) NSString *request_locale;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic) bool speech_profile_used;
@property (nonatomic) long long watermark_detection;
@property (nonatomic) double watermark_peak_average;

- (id)audio_analytics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)has_result;
- (id)init;
- (long long)lang_profile_recreate_codes;
- (id)language;
- (id)latnn_mitigator_result;
- (id)recognition_result;
- (id)request_locale;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (void)setAudio_analytics:(id)arg1;
- (void)setHas_result:(bool)arg1;
- (void)setLang_profile_recreate_codes:(long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLatnn_mitigator_result:(id)arg1;
- (void)setRecognition_result:(id)arg1;
- (void)setRequest_locale:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setSpeech_profile_used:(bool)arg1;
- (void)setWatermark_detection:(long long)arg1;
- (void)setWatermark_peak_average:(double)arg1;
- (id)speech_id;
- (bool)speech_profile_used;
- (long long)watermark_detection;
- (double)watermark_peak_average;

@end
