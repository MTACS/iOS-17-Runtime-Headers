
@interface ICLinkSuggestionQuery : ICSearchQuery {
    bool  _includeNotes;
    bool  _includeWebsites;
    NSString * _queryString;
}

@property (nonatomic) bool includeNotes;
@property (nonatomic) bool includeWebsites;
@property (nonatomic, copy) NSString *queryString;

- (void).cxx_destruct;
- (id)attributesToFetch;
- (bool)includeNotes;
- (bool)includeWebsites;
- (id)initWithQueryString:(id)arg1;
- (id)initWithQueryString:(id)arg1 includeNotes:(bool)arg2 includeWebsites:(bool)arg3;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)arg1;
- (id)queryString;
- (void)setIncludeNotes:(bool)arg1;
- (void)setIncludeWebsites:(bool)arg1;
- (void)setQueryString:(id)arg1;

@end
