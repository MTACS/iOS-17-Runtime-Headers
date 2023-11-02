
@protocol ATXProactiveSuggestionClientProtocol <NSObject>

@required

- (ATXSpotlightSuggestionLayout *)spotlightSuggestionLayoutFromCache;
- (ATXSuggestionLayout *)suggestionLayoutFromCache;

@end
