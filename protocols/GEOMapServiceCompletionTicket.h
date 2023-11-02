
@protocol GEOMapServiceCompletionTicket <GEOMapServiceCancellableTicket, GEOMapServiceThrottlableTicket>

@required

- (NSString *)_searchQuery;
- (void)applyToSuggestionEntry:(GEORPSuggestionEntry *)arg1 withAutocompleteSearchResultIdentifier:(GEOMapItemIdentifier *)arg2;
- (void)applyToSuggestionList:(GEORPSuggestionList *)arg1;
- (bool)autocompleteTopSectionIsQuerySuggestions;
- (void)cancel;
- (GEOClientRankingModel *)clientRankingModel;
- (bool)enableStructuredRAPAffordance;
- (bool)hasShouldDisplayNoResults;
- (bool)hasShouldEnableGrayscaleHighlighting;
- (long long)highlightType;
- (bool)matchesFragment:(NSString *)arg1;
- (GEOPDPlaceSummaryLayoutMetadata *)placeSummaryLayoutMetadata;
- (double)retainSearchTime;
- (bool)shouldDisplayNoResults;
- (bool)shouldEnableGrayscaleHighlighting;
- (bool)shouldUseDistanceFeatureServerResults;
- (bool)showAutocompleteClientSource;
- (GEOSortPriorityMapping *)sortPriorityMapping;
- (void)submitWithAutoCompletionHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOCompletion> *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (GEOMapServiceTraits *)traits;

@end
