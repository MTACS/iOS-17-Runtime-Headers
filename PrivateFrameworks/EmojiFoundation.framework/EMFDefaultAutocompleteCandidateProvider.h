
@interface EMFDefaultAutocompleteCandidateProvider : NSObject <EMFAutocompleteCandidateProvider> {
    NSArray * _tokens;
}

@property (nonatomic, readonly) NSArray *tokens;

+ (id)providerFromInvertedIndex:(id)arg1;

- (void).cxx_destruct;
- (void)enumerateCandidatesMatchingPrefix:(id)arg1 withEnumerationType:(long long)arg2 maxCandidates:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)firstCandidateMatchingPrefix:(id)arg1;
- (id)firstMatchForPrefix:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)initWithTokens:(id)arg1;
- (bool)isValidToken:(id)arg1;
- (id)matchesForPrefix:(id)arg1 usingAlgorithm:(unsigned long long)arg2;
- (id)tokens;

@end
