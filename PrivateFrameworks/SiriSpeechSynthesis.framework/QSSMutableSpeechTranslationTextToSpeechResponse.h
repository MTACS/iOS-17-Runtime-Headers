
@interface QSSMutableSpeechTranslationTextToSpeechResponse : QSSSpeechTranslationTextToSpeechResponse

@property (nonatomic, copy) NSString *conversation_id;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic, copy) NSString *target_locale;
@property (nonatomic, copy) QSSTextToSpeechResponse *text_to_speech_response;

- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)request_id;
- (void)setConversation_id:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setTarget_locale:(id)arg1;
- (void)setText_to_speech_response:(id)arg1;
- (id)target_locale;
- (id)text_to_speech_response;

@end
