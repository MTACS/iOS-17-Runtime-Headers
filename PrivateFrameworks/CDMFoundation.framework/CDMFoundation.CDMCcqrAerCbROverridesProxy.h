
@interface CDMFoundation.CDMCcqrAerCbROverridesProxy : SiriNLUOverrideProxy {
    void $__lazy_storage_$_captureGroupExpression;
    void defaultTemplatePattern;
    void templatePattern;
}

- (void).cxx_destruct;
- (bool)addWithCollection:(id)arg1;
- (bool)clean;
- (id)getRewriteHypothesisWithOverrideUtterance:(id)arg1;
- (id)initWithUseTrie:(bool)arg1 useMemory:(bool)arg2;
- (id)initWithUseTrie:(bool)arg1 useMemory:(bool)arg2 templatePattern:(id)arg3;
- (id)matchWithInputs:(id)arg1;

@end
