
@interface FTMutableKeywordFinderRequest : FTKeywordFinderRequest

@property (nonatomic) bool enable_sanitization;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) FTRecognitionResult *recognition_result;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enable_sanitization;
- (id)init;
- (id)keywords;
- (id)language;
- (id)recognition_result;
- (id)session_id;
- (void)setEnable_sanitization:(bool)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setRecognition_result:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
