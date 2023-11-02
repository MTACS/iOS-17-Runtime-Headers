
@interface _CNAutocompleteNonCachingSearchProvider : NSObject <CNAutocompleteSearchProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)calendarServerSearch;
- (id)directoryServerSearch;
- (id)localExtensionSearches;
- (id)localSearch;
- (id)predictionSearch;
- (id)recentsSearch;
- (id)stewieSearch;
- (id)suggestionsSearch;

@end
