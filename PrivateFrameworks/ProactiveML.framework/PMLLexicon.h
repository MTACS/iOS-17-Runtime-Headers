
@interface PMLLexicon : NSObject {
    _PASCFBurstTrie * _lexicon;
}

+ (bool)serializeLexiconToFile:(id)arg1 tokenToWordIDDict:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)getTotalEntries;
- (unsigned long long)getWordIDforToken:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;

@end
