
@interface FTMutableTranslationResponse_TranslationPhrase : FTTranslationResponse_TranslationPhrase

@property (nonatomic) float confidence;
@property (nonatomic) bool low_confidence;
@property (nonatomic, copy) NSString *meta_info;
@property (nonatomic, copy) FTTranslationPhraseMetaInfo *meta_info_data;
@property (nonatomic, copy) NSArray *spans;
@property (nonatomic, copy) NSArray *translated_tokens;

- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)low_confidence;
- (id)meta_info;
- (id)meta_info_data;
- (void)setConfidence:(float)arg1;
- (void)setLow_confidence:(bool)arg1;
- (void)setMeta_info:(id)arg1;
- (void)setMeta_info_data:(id)arg1;
- (void)setSpans:(id)arg1;
- (void)setTranslated_tokens:(id)arg1;
- (id)spans;
- (id)translated_tokens;

@end
