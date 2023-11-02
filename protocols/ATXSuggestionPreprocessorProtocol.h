
@protocol ATXSuggestionPreprocessorProtocol <NSObject>

@required

- (NSArray *)suggestionsByPreprocessingRankedSuggestions:(NSArray *)arg1 forConsumerSubType:(unsigned char)arg2;
- (NSArray *)suggestionsWithInvalidSuggestionsRemoved:(NSArray *)arg1;

@end
