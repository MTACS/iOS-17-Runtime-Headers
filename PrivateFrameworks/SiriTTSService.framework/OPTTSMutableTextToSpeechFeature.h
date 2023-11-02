
@interface OPTTSMutableTextToSpeechFeature : OPTTSTextToSpeechFeature

@property (nonatomic, copy) NSArray *neural_phoneme_sequence;
@property (nonatomic, copy) NSArray *normalized_text;
@property (nonatomic, copy) NSArray *phoneme_sequence;
@property (nonatomic, copy) NSArray *prompts;
@property (nonatomic, copy) NSArray *replacement;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)neural_phoneme_sequence;
- (id)normalized_text;
- (id)phoneme_sequence;
- (id)prompts;
- (id)replacement;
- (void)setNeural_phoneme_sequence:(id)arg1;
- (void)setNormalized_text:(id)arg1;
- (void)setPhoneme_sequence:(id)arg1;
- (void)setPrompts:(id)arg1;
- (void)setReplacement:(id)arg1;

@end
