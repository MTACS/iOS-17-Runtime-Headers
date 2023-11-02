
@interface _CNAutocompleteCachingSearchProvider : NSObject <CNAutocompleteSearchProvider> {
    <CNFuture> * _calendarServerSearchFuture;
    <CNFuture> * _directoryServerSearchFuture;
    <CNFuture> * _localExtensionSearchesFuture;
    <CNFuture> * _localSearchFuture;
    <CNFuture> * _predictionSearchFuture;
    <CNFuture> * _recentsSearchFuture;
    <CNFuture> * _stewieSearchFuture;
    <CNFuture> * _suggestionsSearchFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)calendarServerSearch;
- (id)directoryServerSearch;
- (id)initWithSearchProvider:(id)arg1;
- (id)localExtensionSearches;
- (id)localSearch;
- (id)predictionSearch;
- (id)recentsSearch;
- (id)stewieSearch;
- (id)suggestionsSearch;

@end
