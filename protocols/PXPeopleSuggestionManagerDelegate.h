
@protocol PXPeopleSuggestionManagerDelegate <NSObject>

@required

- (void)noMoreSuggestionsAvailableForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)suggestionManager:(PXPeopleSuggestionManager *)arg1 hasNewSuggestionsAvailable:(NSArray *)arg2;

@optional

- (void)confirmationCountUpdatedForSuggestionManager:(PXPeopleSuggestionManager *)arg1 undoing:(bool)arg2;
- (void)willLoadMoreSuggestionsForSuggestionManager:(PXPeopleSuggestionManager *)arg1;

@end
