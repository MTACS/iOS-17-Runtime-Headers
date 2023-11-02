
@interface QSSMutableSpeechTranslationInfo : QSSSpeechTranslationInfo

@property (nonatomic, copy) NSArray *raw_nbest_choices;
@property (nonatomic, copy) QSSRecognitionSausage *raw_sausage;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)raw_nbest_choices;
- (id)raw_sausage;
- (void)setRaw_nbest_choices:(id)arg1;
- (void)setRaw_sausage:(id)arg1;

@end
