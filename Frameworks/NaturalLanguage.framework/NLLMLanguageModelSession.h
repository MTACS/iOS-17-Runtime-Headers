
@interface NLLMLanguageModelSession : NLTokenIDBasedLanguageModelSession {
    void * _model;
    NLTokenizer * _tokenizer;
}

- (void).cxx_destruct;
- (void)adaptToToken:(id)arg1 context:(id)arg2;
- (void)adaptToTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int*)arg2 length:(unsigned long long)arg3;
- (bool)addTokenForString:(id)arg1 tokenID:(unsigned int*)arg2;
- (void)applyExponentialDecay;
- (long long)blocklistStatusForString:(id)arg1 matchType:(long long)arg2;
- (long long)blocklistStatusForTokenIDs:(const unsigned int*)arg1 length:(unsigned long long)arg2 matchType:(long long)arg3;
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilityForTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int*)arg2 length:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(id /* block */)arg4;
- (void)enumeratePredictionsForContextTokenIDs:(const unsigned int*)arg1 length:(unsigned long long)arg2 maximumPredictions:(unsigned long long)arg3 maximumTokensPerPrediction:(unsigned long long)arg4 withBlock:(id /* block */)arg5;
- (void)flushDynamicData;
- (bool)getFirstDynamicTokenID:(unsigned int*)arg1 lastDynamicTokenID:(unsigned int*)arg2;
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;
- (void)pruneToSize:(unsigned long long)arg1;
- (void)recordWithDifferentialPrivacy:(id)arg1;
- (void)reset;
- (bool)shouldAdaptToTokenIDs:(const unsigned int*)arg1 length:(unsigned long long)arg2;
- (void)unadaptToToken:(id)arg1 context:(id)arg2;
- (void)unadaptToTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int*)arg2 length:(unsigned long long)arg3;
- (float)usageCountForTokenID:(unsigned int)arg1;

@end
