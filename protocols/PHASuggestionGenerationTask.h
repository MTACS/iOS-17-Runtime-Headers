
@protocol PHASuggestionGenerationTask <PHATask>

@required

- (NSDictionary *)generateSuggestionsWithGraphManager:(PGManager *)arg1 progressReporter:(MAProgressReporter *)arg2 error:(id*)arg3;
- (void)setSuggestionOptionsDictionary:(NSDictionary *)arg1;
- (NSDictionary *)suggestionOptionsDictionary;

@end
