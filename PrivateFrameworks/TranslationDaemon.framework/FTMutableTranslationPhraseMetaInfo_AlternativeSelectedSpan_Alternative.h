
@interface FTMutableTranslationPhraseMetaInfo_AlternativeSelectedSpan_Alternative : FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Alternative

@property (nonatomic) int alternative_description_index;
@property (nonatomic) int selection_span_index;
@property (nonatomic) int translation_phrase_index;

- (int)alternative_description_index;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (int)selection_span_index;
- (void)setAlternative_description_index:(int)arg1;
- (void)setSelection_span_index:(int)arg1;
- (void)setTranslation_phrase_index:(int)arg1;
- (int)translation_phrase_index;

@end
