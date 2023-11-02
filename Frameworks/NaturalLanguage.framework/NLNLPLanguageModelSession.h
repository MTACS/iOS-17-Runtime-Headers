
@interface NLNLPLanguageModelSession : NLLanguageModelSession {
    struct CoreLanguageModelWithState { } * _model;
}

- (id)conditionalProbabilitiesForStrings:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(id /* block */)arg4;
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;
- (id)predictionInitialCharacterSet;
- (id)predictionOptionsForMaximumPredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2;
- (id)stateWithOptions:(id)arg1;

@end
