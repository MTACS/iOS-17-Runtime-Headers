
@interface TIDocumentWordsAligned : NSObject {
    NSMutableArray * _inDocumentWordsStack;
    NSMutableDictionary * _leftContextToWordMap;
}

@property (nonatomic, retain) NSMutableArray *inDocumentWordsStack;
@property (nonatomic, retain) NSMutableDictionary *leftContextToWordMap;

- (void).cxx_destruct;
- (id)_wordsFromContext:(id)arg1 shouldDelete:(bool)arg2;
- (void)addToContextMap:(id)arg1;
- (id)deleteWordsUpToContext:(id)arg1;
- (id)description;
- (id)inDocumentWordsStack;
- (id)init;
- (void)insertWord:(id)arg1 atIndex:(long long)arg2;
- (id)lastWord;
- (id)leftContextToWordMap;
- (id)matchingLeftContextToWordMapKey:(id)arg1;
- (id)preferredLeftContextToWordMapKeyForLeftContext:(id)arg1 andMatchingLeftContext:(id)arg2;
- (void)pushWordToDocument:(id)arg1;
- (void)removeFromContextMap:(id)arg1;
- (void)replaceLeftContextToWordMapKey:(id)arg1 withNewKey:(id)arg2;
- (void)setInDocumentWordsStack:(id)arg1;
- (void)setLeftContextToWordMap:(id)arg1;
- (unsigned long long)wordsCount;
- (id)wordsForContext:(id)arg1;
- (id)wordsFromContext:(id)arg1;

@end
