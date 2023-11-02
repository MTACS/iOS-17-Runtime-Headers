
@interface ICSearchSuggestionsQuery : ICSearchQuery {
    NSArray * _additionalQueries;
    NSMutableArray * _foundSuggestions;
    bool  _modernResultsOnly;
    NSString * _searchString;
    NSArray * _searchTokens;
    <ICSearchSuggestionsResponder> * _suggestionsResponder;
    NSArray * _topHits;
}

@property (nonatomic, retain) NSArray *additionalQueries;
@property (nonatomic, retain) NSMutableArray *foundSuggestions;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSArray *searchTokens;
@property (nonatomic, retain) <ICSearchSuggestionsResponder> *suggestionsResponder;
@property (nonatomic, retain) NSArray *topHits;

- (void).cxx_destruct;
- (id)additionalQueries;
- (id)foundSuggestions;
- (id)initWithSearchString:(id)arg1 searchTokens:(id)arg2 additionalQueries:(id)arg3 rankingQueriesDefinition:(id)arg4 modernResultsOnly:(bool)arg5 suggestionsResponder:(id)arg6;
- (bool)modernResultsOnly;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)arg1;
- (void)queryFinishedRunningWithError:(id)arg1;
- (id)queryResultsToAddFromBatch:(id)arg1;
- (id)searchString;
- (id)searchTokens;
- (void)setAdditionalQueries:(id)arg1;
- (void)setFoundSuggestions:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchTokens:(id)arg1;
- (void)setSuggestionsResponder:(id)arg1;
- (void)setTopHits:(id)arg1;
- (id)suggestionsResponder;
- (id)topHits;

@end
