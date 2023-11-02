
@interface NLNLPLanguageModelState : NLLanguageModelState {
    struct CoreLanguageModelWithState { } * _modelState;
}

- (void)addContext:(id)arg1;
- (id)conditionalProbabilitiesForStrings:(id)arg1;
- (id)conditionalProbabilityForString:(id)arg1;
- (id)conditionalProbabilityForToken:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumeratePredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (id)initWithSession:(id)arg1 options:(id)arg2 context:(id)arg3 modelState:(void*)arg4;
- (void)resetContext;

@end
