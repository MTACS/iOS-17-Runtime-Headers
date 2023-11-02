
@protocol STSSearchModelQuerySuggestionsDelegate <NSObject>

@optional

- (void)searchModelUpdatedQuerySuggestions:(STSSearchModel *)arg1;
- (void)searchModelWillFetchQuerySuggestionsCompletions:(STSSearchModel *)arg1;

@end
