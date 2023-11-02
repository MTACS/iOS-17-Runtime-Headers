
@interface WBSPasswordSetWordList : WBSPasswordWordList {
    NSSet * _words;
}

- (void).cxx_destruct;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initWithIdentifier:(id)arg1 words:(id)arg2;

@end
