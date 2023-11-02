
@interface PRLexiconCursor : NSObject {
    struct _LXCursor { } * _cursor;
    PRLexicon * _lexicon;
}

- (void)_advance:(id)arg1;
- (void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)advanceWithCombinedCharacterSequence:(id)arg1;
- (void)advanceWithString:(id)arg1;
- (void)dealloc;
- (void)enumerateCompletionEntries:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateCompletions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (bool)hasChildren;
- (bool)hasEntries;
- (id)initWithLexicon:(id)arg1;
- (bool)isValid;
- (double)prefixProbability;
- (double)terminationProbability;

@end
