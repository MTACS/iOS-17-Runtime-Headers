
@interface QSSMutableLanguageDetectionResponse : QSSLanguageDetectionResponse

@property (nonatomic, copy) NSString *detected_locale;
@property (nonatomic, copy) NSArray *predictions;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_string;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detected_locale;
- (id)init;
- (id)predictions;
- (int)return_code;
- (id)return_string;
- (id)session_id;
- (void)setDetected_locale:(id)arg1;
- (void)setPredictions:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_string:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
