
@interface CDMSiriVocabularySpanMatchService : CDMBaseSpanMatchService

+ (Class)spanMatcherClass;

- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (bool)isSetupRerunNeededForRequest:(id)arg1;
- (id)setupSpanMatcher:(id)arg1;
- (bool)shouldBeUsedForAsrAlternatives;
- (void)updateData:(id)arg1;

@end
