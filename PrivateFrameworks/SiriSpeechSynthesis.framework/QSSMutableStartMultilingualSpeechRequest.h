
@interface QSSMutableStartMultilingualSpeechRequest : QSSStartMultilingualSpeechRequest

@property (nonatomic, copy) NSArray *language_parameters_by_id;
@property (nonatomic, copy) QSSStartSpeechRequest *start_speech_request;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language_parameters_by_id;
- (void)setLanguage_parameters_by_id:(id)arg1;
- (void)setStart_speech_request:(id)arg1;
- (id)start_speech_request;

@end
