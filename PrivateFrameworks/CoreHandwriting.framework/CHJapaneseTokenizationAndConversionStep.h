
@interface CHJapaneseTokenizationAndConversionStep : CHPostprocessingStep {
    struct __MecabraContext { } * _mecabraContextRef;
    CHMecabraWrapper * _mecabraWrapper;
    CHStringOVSChecker * _ovsStringChecker;
    bool  _promoteKanaConversion;
    void * _wordLanguageModel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMecabra:(id)arg1 wordLanguageModel:(void*)arg2 ovsStringChecker:(id)arg3 promoteKanaConversion:(bool)arg4;
- (id)process:(id)arg1 options:(id)arg2;

@end
