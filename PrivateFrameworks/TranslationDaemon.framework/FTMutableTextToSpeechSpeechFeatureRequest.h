
@interface FTMutableTextToSpeechSpeechFeatureRequest : FTTextToSpeechSpeechFeatureRequest

@property (nonatomic, copy) NSArray *lexicon;
@property (nonatomic, copy) FTTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic) bool support_homograph;
@property (nonatomic, copy) FTTextToSpeechSpeechFeatureInputText *text;
@property (nonatomic, copy) FTTextToSpeechSpeechFeatureInputWave *wave_data;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)lexicon;
- (id)model_id;
- (id)session_id;
- (void)setLexicon:(id)arg1;
- (void)setModel_id:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setSupport_homograph:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setWave_data:(id)arg1;
- (id)speech_id;
- (bool)support_homograph;
- (id)text;
- (id)wave_data;

@end
