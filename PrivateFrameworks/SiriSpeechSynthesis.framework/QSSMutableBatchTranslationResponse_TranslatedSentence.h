
@interface QSSMutableBatchTranslationResponse_TranslatedSentence : QSSBatchTranslationResponse_TranslatedSentence

@property (nonatomic, copy) NSString *engine_input;
@property (nonatomic, copy) NSArray *n_best_choices;
@property (nonatomic, copy) QSSSpan *source_span;
@property (nonatomic, copy) QSSSpan *target_span;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)engine_input;
- (id)init;
- (id)n_best_choices;
- (void)setEngine_input:(id)arg1;
- (void)setN_best_choices:(id)arg1;
- (void)setSource_span:(id)arg1;
- (void)setTarget_span:(id)arg1;
- (id)source_span;
- (id)target_span;

@end
