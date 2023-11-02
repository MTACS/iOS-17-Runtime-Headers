
@interface FTMutableTranslationPhraseMetaInfo : FTTranslationPhraseMetaInfo

@property (nonatomic, copy) NSString *romanization;
@property (nonatomic, copy) NSArray *selection_spans;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)romanization;
- (id)selection_spans;
- (void)setRomanization:(id)arg1;
- (void)setSelection_spans:(id)arg1;

@end
