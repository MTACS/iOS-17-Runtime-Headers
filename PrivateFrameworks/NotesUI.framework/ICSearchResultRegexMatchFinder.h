
@interface ICSearchResultRegexMatchFinder : NSObject {
    NSRegularExpression * _fallbackRegex;
    NSRegularExpression * _normalRegex;
    NSSet * _prefixMatchingTokens;
    NSString * _searchString;
    NSSet * _substringMatchingTokens;
}

@property (nonatomic, retain) NSRegularExpression *fallbackRegex;
@property (nonatomic, retain) NSRegularExpression *normalRegex;
@property (nonatomic, retain) NSSet *prefixMatchingTokens;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSSet *substringMatchingTokens;

+ (id)matchesForToken:(id)arg1 inDocument:(id)arg2 checkPrefixBeforeFallingBack:(bool)arg3;
+ (bool)textCheckingResultsAreValid:(id)arg1;

- (void).cxx_destruct;
- (id)fallbackRegex;
- (id)firstMatchInDocumentWithGlobalFallback:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPrefixMatchingTokens:(id)arg1 substringMatchingTokens:(id)arg2 searchString:(id)arg3;
- (id)initWithSearchString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matchesInDocumentWithPerTokenFallback:(id)arg1;
- (id)normalRegex;
- (id)prefixMatchingTokens;
- (id)searchString;
- (void)setFallbackRegex:(id)arg1;
- (void)setNormalRegex:(id)arg1;
- (void)setPrefixMatchingTokens:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSubstringMatchingTokens:(id)arg1;
- (id)substringMatchingTokens;

@end
