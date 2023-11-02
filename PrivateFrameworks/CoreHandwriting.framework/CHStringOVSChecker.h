
@interface CHStringOVSChecker : NSObject {
    struct _LXLexicon { } * _customLexicon;
    unsigned int  _flagsFilter;
    struct _CFBurstTrie { } * _ovsTrie;
    struct _LXLexicon { } * _staticLexicon;
    int (* _stringNormalizationFunction;
}

- (void)dealloc;
- (id)initWithTrie:(struct _CFBurstTrie { }*)arg1 staticLexicon:(struct _LXLexicon { }*)arg2 customLexicon:(struct _LXLexicon { }*)arg3 flags:(unsigned int)arg4 stringNormalizationFunction:(int (*)arg5;
- (bool)isInappropriateLexiconEntry:(struct _LXEntry { }*)arg1;
- (bool)isInappropriateString:(id)arg1;
- (bool)isInappropriateTokenID:(unsigned int)arg1;

@end
