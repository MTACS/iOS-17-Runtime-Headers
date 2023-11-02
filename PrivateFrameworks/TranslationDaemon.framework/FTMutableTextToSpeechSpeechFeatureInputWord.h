
@interface FTMutableTextToSpeechSpeechFeatureInputWord : FTTextToSpeechSpeechFeatureInputWord

@property (nonatomic, copy) NSArray *phonemes;
@property (nonatomic, copy) NSString *word;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)phonemes;
- (void)setPhonemes:(id)arg1;
- (void)setWord:(id)arg1;
- (id)word;

@end
