
@interface PRNLPLanguageModelState : NSObject {
    NSMutableDictionary * _cachedPredictionsDictionary;
    PRNLPLanguageModel * _languageModel;
    NLLanguageModelState * _state;
}

@property (nonatomic, readonly) PRNLPLanguageModel *languageModel;

- (id)conditionalProbabilityDictionaryForStrings:(id)arg1;
- (void)dealloc;
- (void)enumeratePredictions:(unsigned long long)arg1 maxTokensPerPrediction:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (bool)getConditionalProbabilityForString:(id)arg1 probability:(double*)arg2;
- (id)initWithLanguageModel:(id)arg1 state:(id)arg2;
- (id)languageModel;

@end
