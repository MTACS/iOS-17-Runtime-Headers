
@protocol CNAutocompleteSuggestionsProbe <CNAutocompleteProbe>

@required

- (void)recordUserSawResultsConsideredSuggestion;
- (void)recordUserSelectedAutocompleteResult:(CNAutocompleteResult *)arg1;

@end
