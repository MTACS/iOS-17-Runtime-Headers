
@interface NLLMTokenIDConverter : NLTokenIDConverter {
    NLLanguageModel * _languageModel;
    NLTagger * _tagger;
}

@property (nonatomic, readonly) NLLanguageModel *languageModel;
@property (nonatomic, readonly, retain) NLTagger *tagger;

- (void).cxx_destruct;
- (void)enumerateTokenIDsForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withBlock:(id /* block */)arg3;
- (id)initWithLanguageModel:(id)arg1;
- (id)languageModel;
- (id)stringForTokenID:(unsigned int)arg1;
- (id)stringForTokenIDs:(const unsigned int*)arg1 length:(unsigned long long)arg2;
- (id)tagger;
- (unsigned int)tokenIDForString:(id)arg1;

@end
