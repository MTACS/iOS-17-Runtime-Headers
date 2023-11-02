
@interface NLTokenIDBasedLanguageModelSession : NLLanguageModelSession

- (void)adaptToTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int*)arg2 length:(unsigned long long)arg3;
- (long long)blocklistStatusForTokenIDs:(const unsigned int*)arg1 length:(unsigned long long)arg2 matchType:(long long)arg3;
- (id)conditionalProbabilitiesForTokenIDs:(const unsigned int*)arg1 count:(unsigned long long)arg2 contextTokenIDs:(const unsigned int*)arg3 length:(unsigned long long)arg4;
- (id)conditionalProbabilityForTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int*)arg2 length:(unsigned long long)arg3;
- (void)enumeratePredictionsForContextTokenIDs:(const unsigned int*)arg1 length:(unsigned long long)arg2 maximumPredictions:(unsigned long long)arg3 maximumTokensPerPrediction:(unsigned long long)arg4 withBlock:(id /* block */)arg5;
- (id)stateWithOptions:(id)arg1;
- (void)unadaptToTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int*)arg2 length:(unsigned long long)arg3;

@end
