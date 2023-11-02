
@interface NLTokenIDBasedLanguageModelState : NLLanguageModelState {
    NSMutableArray * _contextTokenIDArray;
}

- (void).cxx_destruct;
- (void)addContext:(id)arg1;
- (void)addContextTokenIDs:(const unsigned int*)arg1 length:(unsigned long long)arg2;
- (id)conditionalProbabilitiesForTokenIDs:(const unsigned int*)arg1 count:(unsigned long long)arg2;
- (id)conditionalProbabilityForToken:(id)arg1;
- (id)conditionalProbabilityForTokenID:(unsigned int)arg1;
- (unsigned long long)contextLength;
- (id)contextTokenIDArrayForContext:(id)arg1;
- (unsigned int*)contextTokenIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumeratePredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (id)initWithSession:(id)arg1 options:(id)arg2 context:(id)arg3;
- (id)initWithSession:(id)arg1 options:(id)arg2 context:(id)arg3 contextTokenIDArray:(id)arg4;
- (void)resetContext;

@end
