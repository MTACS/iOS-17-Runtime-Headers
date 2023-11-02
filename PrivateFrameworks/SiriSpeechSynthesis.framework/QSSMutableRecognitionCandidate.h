
@interface QSSMutableRecognitionCandidate : QSSRecognitionCandidate

@property (nonatomic, copy) QSSAudioAnalytics *audio_analytics;
@property (nonatomic) long long fingerprint_detection;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) QSSLatnnMitigatorResult *latnn_mitigator_result;
@property (nonatomic, copy) QSSRecognitionResult *recognition_result;
@property (nonatomic, copy) NSString *request_locale;
@property (nonatomic, copy) NSString *result_id;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic) double snr;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic) long long watermark_detection;
@property (nonatomic) double watermark_peak_average;

- (id)audio_analytics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)fingerprint_detection;
- (id)init;
- (id)language;
- (id)latnn_mitigator_result;
- (id)recognition_result;
- (id)request_locale;
- (id)result_id;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (void)setAudio_analytics:(id)arg1;
- (void)setFingerprint_detection:(long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLatnn_mitigator_result:(id)arg1;
- (void)setRecognition_result:(id)arg1;
- (void)setRequest_locale:(id)arg1;
- (void)setResult_id:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSnr:(double)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setWatermark_detection:(long long)arg1;
- (void)setWatermark_peak_average:(double)arg1;
- (double)snr;
- (id)speech_id;
- (long long)watermark_detection;
- (double)watermark_peak_average;

@end
