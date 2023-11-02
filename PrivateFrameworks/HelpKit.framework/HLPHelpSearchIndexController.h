
@interface HLPHelpSearchIndexController : HLPRemoteDataController {
    HLPHelpBookController * _helpBookController;
    CSPrivateSearchableIndex * _privateSearchableIndex;
    NSDictionary * _searchIndex;
    CSSearchQuery * _spotlightSearchQuery;
    NSMutableArray * _spotlightSearchScores;
    bool  _useCSSearch;
}

@property (nonatomic, retain) HLPHelpBookController *helpBookController;
@property (nonatomic, retain) CSPrivateSearchableIndex *privateSearchableIndex;
@property (nonatomic, retain) NSDictionary *searchIndex;
@property (nonatomic, readonly) NSArray *spotlightSearchResults;
@property (nonatomic, retain) NSMutableArray *spotlightSearchScores;
@property (nonatomic) bool useCSSearch;

+ (id)_stopwordsForLanguage:(id)arg1;

- (void).cxx_destruct;
- (void)CSSearchForSearchText:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_csQueryStringForSearchTerm:(id)arg1;
- (id)_fetchAttributesForCSSearchQuery;
- (void)_hpdResultsFromCSSearchableItems:(id)arg1 rankingQueries:(id)arg2;
- (id)_rankingQueriesForSearchTerm:(id)arg1;
- (double)_relevanceScore:(double)arg1 forRankingQueries:(id)arg2;
- (id)_strippedSearchTermFromSearchTerm:(id)arg1;
- (id)_tokenizeSearchTerm:(id)arg1;
- (void)cancelSpotlightSearch;
- (void)dealloc;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getAllIdentifiersFromTree:(id)arg1 withMaxDepth:(int)arg2;
- (id)helpBookController;
- (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2;
- (id)privateSearchableIndex;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(id /* block */)arg1;
- (id)resultsWithSearchText:(id)arg1 localeCode:(id)arg2 searchTerms:(id*)arg3;
- (id)searchIndex;
- (id)searchTermsForSearchText:(id)arg1 localeCode:(id)arg2;
- (id)searchTree:(id)arg1 forQueryWord:(id)arg2 withMaxDepth:(int)arg3;
- (void)setHelpBookController:(id)arg1;
- (void)setPrivateSearchableIndex:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setSpotlightSearchScores:(id)arg1;
- (void)setUseCSSearch:(bool)arg1;
- (id)spotlightSearchResults;
- (id)spotlightSearchScores;
- (bool)useCSSearch;

@end
