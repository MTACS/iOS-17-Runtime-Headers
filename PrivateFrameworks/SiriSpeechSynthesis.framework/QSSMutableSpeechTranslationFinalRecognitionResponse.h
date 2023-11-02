
@interface QSSMutableSpeechTranslationFinalRecognitionResponse : QSSSpeechTranslationFinalRecognitionResponse

@property (nonatomic, copy) NSString *conversation_id;
@property (nonatomic, copy) QSSRecognitionResult *recognition_result;
@property (nonatomic, copy) NSString *recognition_text;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSString *source_locale;

- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)recognition_result;
- (id)recognition_text;
- (id)request_id;
- (int)return_code;
- (id)return_str;
- (void)setConversation_id:(id)arg1;
- (void)setRecognition_result:(id)arg1;
- (void)setRecognition_text:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setSource_locale:(id)arg1;
- (id)source_locale;

@end
