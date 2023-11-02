
@interface _EARNLTokenizer : _EARTokenizer {
    NLTagger * _nlTagger;
}

- (void).cxx_destruct;
- (id)init;
- (id)tokenize:(id)arg1;
- (id)tokenize:(id)arg1 limit:(unsigned long long)arg2;

@end
