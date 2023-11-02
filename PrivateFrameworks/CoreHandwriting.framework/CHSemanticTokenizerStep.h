
@interface CHSemanticTokenizerStep : CHPostprocessingStep {
    CHStringOVSChecker * _ovsStringChecker;
    void * _wordLanguageModel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWordLanguageModel:(void*)arg1 ovsStringChecker:(id)arg2;
- (id)process:(id)arg1 options:(id)arg2;

@end
