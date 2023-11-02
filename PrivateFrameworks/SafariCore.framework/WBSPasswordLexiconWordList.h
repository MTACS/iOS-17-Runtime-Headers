
@interface WBSPasswordLexiconWordList : WBSPasswordWordList {
    struct _LXLexicon { } * _lexicon;
}

+ (id)lexiconWordListWithIdentifier:(id)arg1 localeIdentifier:(id)arg2;

- (void)dealloc;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initWithIdentifier:(id)arg1 lexicon:(struct _LXLexicon { }*)arg2;

@end
