
@interface QSSMutableBatchTranslationResponse_TranslationPhrase : QSSBatchTranslationResponse_TranslationPhrase

@property (nonatomic) float confidence;
@property (nonatomic) bool low_confidence;
@property (nonatomic, copy) NSString *meta_info;
@property (nonatomic, copy) NSArray *repeated_spans;
@property (nonatomic, copy) NSString *translation_phrase;

- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)low_confidence;
- (id)meta_info;
- (id)repeated_spans;
- (void)setConfidence:(float)arg1;
- (void)setLow_confidence:(bool)arg1;
- (void)setMeta_info:(id)arg1;
- (void)setRepeated_spans:(id)arg1;
- (void)setTranslation_phrase:(id)arg1;
- (id)translation_phrase;

@end
