
@interface QSSMutableCorrectionsValidatorRequest : QSSCorrectionsValidatorRequest

@property (nonatomic, copy) NSString *corrected_utterance;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *original_utterance;
@property (nonatomic, copy) QSSRecognitionResult *recognition_result;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corrected_utterance;
- (id)init;
- (id)language;
- (id)original_utterance;
- (id)recognition_result;
- (id)session_id;
- (void)setCorrected_utterance:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOriginal_utterance:(id)arg1;
- (void)setRecognition_result:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
