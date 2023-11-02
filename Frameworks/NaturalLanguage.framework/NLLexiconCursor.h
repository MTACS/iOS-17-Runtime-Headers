
@interface NLLexiconCursor : NSObject {
    struct _LXCursor { } * _cursor;
    NLLexicon * _lexicon;
}

@property (readonly) bool hasChildren;
@property (readonly) bool hasEntries;
@property (readonly) double prefixProbability;
@property (readonly) double terminationProbability;
@property (readonly, copy) NSString *traversedString;

- (void).cxx_destruct;
- (void)_enumerateEntriesUsingBlock:(id /* block */)arg1;
- (id)cursorByAdvancingWithString:(id)arg1;
- (void)dealloc;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (void)enumerateCompletionsUsingBlock:(id /* block */)arg1;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (bool)hasChildren;
- (bool)hasEntries;
- (id)initWithLexicon:(id)arg1 cursor:(struct _LXCursor { }*)arg2;
- (id)initWithLexicon:(id)arg1 string:(id)arg2;
- (double)prefixProbability;
- (double)terminationProbability;
- (id)traversedString;

@end
