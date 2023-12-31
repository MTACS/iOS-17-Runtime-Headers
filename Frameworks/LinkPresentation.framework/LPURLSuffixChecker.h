
@interface LPURLSuffixChecker : NSObject {
    NSMutableArray * _failedSuffixes;
    unsigned long long  _maxLength;
    struct { unsigned short x1[27]; } * _trie;
    unsigned int  _trieNodeCount;
}

- (void).cxx_destruct;
- (void)addStringToFailedSuffixes:(id)arg1;
- (void)dealloc;
- (bool)hasSuffix:(id)arg1;
- (bool)hasSuffix:(id)arg1 remainingPrefix:(id*)arg2;
- (id)initWithSuffixes:(id)arg1;
- (bool)insertString:(id)arg1 intoTrieWithCache:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1[32]; unsigned long long x2; }*)arg2;

@end
