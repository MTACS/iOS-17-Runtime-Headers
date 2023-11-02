
@interface TCRuleBasedEditor : NSObject <TCPostEditing> {
    AppleSpell * _checker;
}

- (void).cxx_destruct;
- (void)addGrammarDetailsForSentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 sentence:(id)arg2 result:(id)arg3 mutableDetails:(id)arg4;
- (void)checkString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tagger:(id)arg3 offset:(unsigned long long)arg4 options:(id)arg5 mutableResults:(id)arg6;
- (id)initWithOptions:(id)arg1;
- (void)loadModelsInBackground:(bool)arg1;
- (void)resetModels;

@end
