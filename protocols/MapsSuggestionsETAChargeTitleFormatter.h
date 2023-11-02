
@protocol MapsSuggestionsETAChargeTitleFormatter <MapsSuggestionsTitleFormatter>

@required

- (bool)formatTitlesForEntry:(MapsSuggestionsEntry *)arg1 eta:(MapsSuggestionsETA *)arg2 requiredChargeLevel:(NSNumber *)arg3 currentChargeLevel:(NSNumber *)arg4;

@end
