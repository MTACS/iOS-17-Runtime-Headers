
@interface _GEOPlaceSearchAutocompleteTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCompletionTicket> {
    NSString * _searchQuery;
    GEOAutocompleteSessionData * _sessionData;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_searchQuery, nonatomic, readonly) NSString *searchQuery;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (id)_searchQuery;
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;
- (void)applyToSuggestionList:(id)arg1;
- (bool)autocompleteTopSectionIsQuerySuggestions;
- (id)clientRankingModel;
- (bool)enableStructuredRAPAffordance;
- (bool)hasShouldDisplayNoResults;
- (bool)hasShouldEnableGrayscaleHighlighting;
- (long long)highlightType;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3 sessionData:(id)arg4;
- (bool)matchesFragment:(id)arg1;
- (id)placeSummaryLayoutMetadata;
- (double)retainSearchTime;
- (bool)shouldDisplayNoResults;
- (bool)shouldEnableGrayscaleHighlighting;
- (bool)shouldUseDistanceFeatureServerResults;
- (bool)showAutocompleteClientSource;
- (id)sortPriorityMapping;
- (void)submitWithAutoCompletionHandler:(id /* block */)arg1 auditToken:(id)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithAutoCompletionHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end
