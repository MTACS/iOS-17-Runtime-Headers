
@interface ICTopHitLegacyQuery : ICSearchQuery {
    NSString * _highlightString;
    NSString * _keyboardLanguage;
    bool  _modernResultsOnly;
    NSString * _queryString;
}

@property (nonatomic, readonly) NSString *highlightString;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic, retain) NSString *queryString;

- (void).cxx_destruct;
- (id)highlightString;
- (id)initWithQueryString:(id)arg1 keyboardLanguage:(id)arg2;
- (id)keyboardLanguage;
- (bool)modernResultsOnly;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)arg1;
- (id)queryString;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setQueryString:(id)arg1;
- (double)timeoutInterval;

@end
