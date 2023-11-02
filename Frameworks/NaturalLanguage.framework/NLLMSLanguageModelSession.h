
@interface NLLMSLanguageModelSession : NLLanguageModelSession {
    struct unique_ptr<language_modeling::LanguageModelSession, std::default_delete<language_modeling::LanguageModelSession>> { 
        struct __compressed_pair<language_modeling::LanguageModelSession *, std::default_delete<language_modeling::LanguageModelSession>> { 
            struct LanguageModelSession {} *__value_; 
        } __ptr_; 
    }  _session;
    NLTokenizer * _tokenizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adaptToToken:(id)arg1 context:(id)arg2;
- (long long)blocklistStatusForString:(id)arg1 matchType:(long long)arg2;
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;
- (id)description;
- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(id /* block */)arg4;
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;
- (void)reset;
- (void)unadaptToToken:(id)arg1 context:(id)arg2;

@end
