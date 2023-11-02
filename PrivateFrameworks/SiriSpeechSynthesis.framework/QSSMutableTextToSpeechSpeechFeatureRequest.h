
@interface QSSMutableTextToSpeechSpeechFeatureRequest : QSSTextToSpeechSpeechFeatureRequest

@property (nonatomic, copy) QSSTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) QSSTextToSpeechSpeechFeatureInputText *text;
@property (nonatomic, copy) QSSTextToSpeechSpeechFeatureInputWave *wave_data;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)model_id;
- (id)session_id;
- (void)setModel_id:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setText:(id)arg1;
- (void)setWave_data:(id)arg1;
- (id)speech_id;
- (id)text;
- (id)wave_data;

@end
