
@interface FTMutableTextToSpeechSpeechFeatureRequest_LexiconEntry : FTTextToSpeechSpeechFeatureRequest_LexiconEntry

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) FTTextToSpeechSpeechFeatureInputPhonemeSequence *value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
