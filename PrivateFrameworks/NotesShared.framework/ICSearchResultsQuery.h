
@interface ICSearchResultsQuery : ICSearchQuery {
    NSArray * _attributes;
    bool  _modernResultsOnly;
    NSString * _queryString;
}

@property (nonatomic, retain) NSArray *attributes;
@property (nonatomic, copy) NSString *queryString;

+ (id)queryForClassifiedImages;

- (void).cxx_destruct;
- (id)attributes;
- (id)attributesToFetch;
- (id)initWithQueryString:(id)arg1 externalRankingQueries:(id)arg2 modernResultsOnly:(bool)arg3;
- (id)initWithQueryString:(id)arg1 externalRankingQueries:(id)arg2 modernResultsOnly:(bool)arg3 attributes:(id)arg4;
- (id)initWithQueryString:(id)arg1 rankingQueriesDefinition:(id)arg2 modernResultsOnly:(bool)arg3;
- (bool)modernResultsOnly;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)arg1;
- (id)queryString;
- (void)setAttributes:(id)arg1;
- (void)setQueryString:(id)arg1;

@end
