
@interface NLNLPLanguageModel : NLLanguageModel {
    long long  _granularity;
}

- (double)conditionalProbabilityForEntry:(id)arg1 context:(id)arg2;
- (double)conditionalProbabilityForWord:(id)arg1 context:(id)arg2;
- (void)enumeratePredictionsForContext:(id)arg1 maxEntriesPerPrediction:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumeratePredictionsForContext:(id)arg1 maxWordsPerPrediction:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (bool)generatesPredictions;
- (long long)granularity;
- (id)initWithLocalization:(id)arg1 options:(id)arg2;
- (id)sessionWithOptions:(id)arg1;

@end
