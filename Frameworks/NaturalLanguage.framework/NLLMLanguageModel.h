
@interface NLLMLanguageModel : NLLanguageModel {
    NLLMTokenIDConverter * _tokenIDConverter;
}

- (void).cxx_destruct;
- (bool)generatesPredictions;
- (id)sessionWithOptions:(id)arg1;
- (id)tokenIDConverter;

@end
