
@interface NLPLearnerNgramLanguageModelingData : NLPLearnerLanguageModelingData

+ (unsigned long long)defaultMaxSequenceLength;
+ (void)initialize;

- (void)addPreprocessedExample:(void*)arg1;
- (id)initWithLocale:(id)arg1;

@end
