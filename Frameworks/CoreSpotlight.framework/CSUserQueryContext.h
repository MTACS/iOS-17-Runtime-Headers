
@interface CSUserQueryContext : CSSearchQueryContext {
    bool  _enableRankedResults;
    bool  _enableSuggestionTokens;
    long long  _maxResultCount;
    NSDictionary * _queryParserOptions;
}

@property (nonatomic) bool enableRankedResults;
@property (nonatomic) long long maxResultCount;
@property (nonatomic) long long maxSuggestionCount;

+ (id)userQueryContext;
+ (id)userQueryContextWithCurrentSuggestion:(id)arg1;

- (void).cxx_destruct;
- (bool)enableRankedResults;
- (id)getParserOptions;
- (long long)maxResultCount;
- (void)setEnableRankedResults:(bool)arg1;
- (void)setMaxResultCount:(long long)arg1;
- (void)updateWithOptions:(id)arg1;

@end
