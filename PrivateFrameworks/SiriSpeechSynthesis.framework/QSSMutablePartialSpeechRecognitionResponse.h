
@interface QSSMutablePartialSpeechRecognitionResponse : QSSPartialSpeechRecognitionResponse

@property (nonatomic) int audio_duration_ms;
@property (nonatomic) int confidence;
@property (nonatomic) bool is_stable_result;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *recognition_text;
@property (nonatomic, copy) NSString *request_locale;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (int)audio_duration_ms;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)is_stable_result;
- (id)language;
- (id)recognition_text;
- (id)request_locale;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (void)setAudio_duration_ms:(int)arg1;
- (void)setConfidence:(int)arg1;
- (void)setIs_stable_result:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setRecognition_text:(id)arg1;
- (void)setRequest_locale:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
