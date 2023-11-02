
@protocol CNAutocompleteSearchProvider <NSObject>

@required

- (<CNAutocompleteSearch> *)calendarServerSearch;
- (<CNAutocompleteSearch> *)directoryServerSearch;
- (NSArray *)localExtensionSearches;
- (<CNAutocompleteSearch> *)localSearch;
- (<CNAutocompleteSearch> *)predictionSearch;
- (<CNAutocompleteSearch> *)recentsSearch;
- (<CNAutocompleteSearch> *)stewieSearch;
- (<CNAutocompleteSearch> *)suggestionsSearch;

@end
