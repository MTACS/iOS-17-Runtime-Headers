
@interface CSAttributeEvaluator : NSObject {
    bool  _fuzzyMatching;
    bool  _isCJK;
    NSString * _language;
    bool  _matchOncePerTerm;
    unsigned long long  _matcherCount;
    const void ** _matchers;
    unsigned long long  _matchersPerTerm;
    unsigned long long  _options;
    NSString * _queryString;
    unsigned long long  _queryTermCount;
    NSMutableArray * _tokenizedQueryTerms;
    void * _tokenizer;
}

@property (nonatomic) bool fuzzyMatching;
@property (nonatomic) bool isCJK;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) bool matchOncePerTerm;
@property (nonatomic) unsigned long long matcherCount;
@property (nonatomic) const void**matchers;
@property (nonatomic) unsigned long long matchersPerTerm;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) NSString *queryString;
@property (nonatomic) unsigned long long queryTermCount;
@property (nonatomic, readonly) NSArray *queryTerms;
@property (nonatomic, retain) NSMutableArray *tokenizedQueryTerms;
@property (nonatomic) void*tokenizer;

+ (void)enumerateTokensForString:(id)arg1 locale:(id)arg2 options:(unsigned long long)arg3 withHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(bool)arg2 skipTranscriptions:(bool)arg3 withFuzzyHandler:(id /* block */)arg4;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(bool)arg2 skipTranscriptions:(bool)arg3 withHandler:(id /* block */)arg4;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(bool)arg2 strongCompounds:(bool)arg3 skipTranscriptions:(bool)arg4 withFuzzyHandler:(id /* block */)arg5;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(bool)arg2 strongCompounds:(bool)arg3 skipTranscriptions:(bool)arg4 withHandler:(id /* block */)arg5;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(bool)arg2 strongCompounds:(bool)arg3 withHandler:(id /* block */)arg4;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(bool)arg2 withHandler:(id /* block */)arg3;
- (bool)fuzzyMatching;
- (id)initWithQuery:(id)arg1 language:(id)arg2 fuzzyThreshold:(unsigned char)arg3 options:(unsigned long long)arg4;
- (id)initWithQuery:(id)arg1 language:(id)arg2 isCJK:(bool)arg3 fuzzyThreshold:(unsigned char)arg4 options:(unsigned long long)arg5;
- (bool)isCJK;
- (id)language;
- (bool)matchOncePerTerm;
- (unsigned long long)matcherCount;
- (const void**)matchers;
- (unsigned long long)matchersPerTerm;
- (unsigned long long)options;
- (bool)processPropertyToken:(const unsigned short*)arg1 length:(long long)arg2 tokenType:(int)arg3 range:(struct { long long x1; long long x2; })arg4 index:(long long)arg5 evaluationHandler:(id /* block */)arg6;
- (void)processTranscriptionTokens:(struct CSAttributeEvaluatorContext { id x1; id /* block */ x2; char *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; int *x6; long long x7; long long x8; long long x9; long long x10; long long x11; unsigned long long x12; bool x13; }*)arg1;
- (id)queryString;
- (unsigned long long)queryTermCount;
- (id)queryTerms;
- (void)setFuzzyMatching:(bool)arg1;
- (void)setIsCJK:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMatchOncePerTerm:(bool)arg1;
- (void)setMatcherCount:(unsigned long long)arg1;
- (void)setMatchers:(const void**)arg1;
- (void)setMatchersPerTerm:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setQueryTermCount:(unsigned long long)arg1;
- (void)setTokenizedQueryTerms:(id)arg1;
- (void)setTokenizer:(void*)arg1;
- (id)tokenizedQueryTerms;
- (void*)tokenizer;

@end
