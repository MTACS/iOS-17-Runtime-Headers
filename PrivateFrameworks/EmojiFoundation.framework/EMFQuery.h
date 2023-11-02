
@interface EMFQuery : NSObject <NSCopying> {
    NSLocale * _locale;
    NSString * _normalizedString;
    NSString * _queryString;
    NSArray * _queryTokens;
    NSArray * _queryTokensAnalyzed;
    EMFStringStemmer * _stringStemmer;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *normalizedQueryString;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) EMFStringStemmer *stringStemmer;
@property (nonatomic, retain) NSArray *tokens;
@property (nonatomic, readonly) NSString *trimmedQueryString;

- (void).cxx_destruct;
- (id)_finalTokenAnalyzed:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)finalTokenAnalyzed;
- (id)finalTokenUnanalyzed;
- (id)initWithLocale:(id)arg1;
- (id)initWithQueryString:(id)arg1 andLocale:(id)arg2;
- (id)initWithQueryString:(id)arg1 andQueryTokens:(id)arg2 andLocale:(id)arg3;
- (id)initWithQueryTokens:(id)arg1 andLocale:(id)arg2;
- (id)locale;
- (id)normalizedQueryString;
- (id)queryString;
- (void)reset;
- (void)setQueryString:(id)arg1;
- (void)setStringStemmer:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)stringStemmer;
- (id)tokenCounts;
- (id)tokens;
- (id)trimmedQueryString;

@end
