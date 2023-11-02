
@interface FTMutableTranslationPhraseMetaInfo_AlternativeSelectedSpan : FTTranslationPhraseMetaInfo_AlternativeSelectedSpan

@property (nonatomic, copy) NSArray *alternatives;
@property (nonatomic, copy) NSArray *projection_ranges;
@property (nonatomic, copy) FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Range *source_range;

- (id)alternatives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)projection_ranges;
- (void)setAlternatives:(id)arg1;
- (void)setProjection_ranges:(id)arg1;
- (void)setSource_range:(id)arg1;
- (id)source_range;

@end
