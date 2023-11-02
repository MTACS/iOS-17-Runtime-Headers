
@protocol ATXUniversalSuggestionDeduplicatorProtocol <NSObject>

@required

- (bool)suggestionIsDuplicate:(ATXProactiveSuggestion *)arg1 existingSuggestions:(NSArray *)arg2;

@end
