
@interface CalculateTokenizer : NSObject {
    unsigned long long  _index;
    CalculateToken * _lastToken;
    NSArray * _locales;
    unsigned long long  _peekIndex;
    NSMutableArray * _peekTokens;
    NSString * _string;
    unsigned long long  _stringLength;
    Trie * _trie;
    UnitsInfo * _unitsInfo;
    NSMutableArray * _wordBreakIndices;
    unsigned long long  _wordBreakIndicesIndex;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, retain) CalculateToken *lastToken;
@property (nonatomic, retain) NSArray *locales;
@property (nonatomic) unsigned long long peekIndex;
@property (nonatomic, retain) NSMutableArray *peekTokens;
@property (nonatomic, retain) NSString *string;
@property (nonatomic) unsigned long long stringLength;
@property (nonatomic, retain) Trie *trie;
@property (nonatomic, retain) UnitsInfo *unitsInfo;
@property (nonatomic, retain) NSMutableArray *wordBreakIndices;
@property (nonatomic) unsigned long long wordBreakIndicesIndex;

+ (int)displayNameExponent:(id)arg1;
+ (id)prepareString:(id)arg1;
+ (id)tokenizerWithUnits:(id)arg1;

- (void).cxx_destruct;
- (void)_findTokens;
- (void)_loadIfNeeded;
- (unsigned long long)index;
- (id)initWithUnits:(id)arg1;
- (id)lastToken;
- (id)locales;
- (id)nextToken;
- (unsigned long long)peekIndex;
- (id)peekToken;
- (id)peekTokens;
- (void)reset;
- (void)setLastToken:(id)arg1;
- (void)setLocales:(id)arg1;
- (void)setPeekIndex:(unsigned long long)arg1;
- (void)setPeekTokens:(id)arg1;
- (void)setString:(id)arg1;
- (void)setStringLength:(unsigned long long)arg1;
- (void)setTrie:(id)arg1;
- (void)setUnitsInfo:(id)arg1;
- (void)setWordBreakIndices:(id)arg1;
- (void)setWordBreakIndicesIndex:(unsigned long long)arg1;
- (id)string;
- (unsigned long long)stringLength;
- (id)trie;
- (id)unitsInfo;
- (id)wordBreakIndices;
- (unsigned long long)wordBreakIndicesIndex;

@end
