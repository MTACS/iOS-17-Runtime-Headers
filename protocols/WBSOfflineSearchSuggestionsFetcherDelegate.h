
@protocol WBSOfflineSearchSuggestionsFetcherDelegate <NSObject>

@required

- (void)offlineSearchSuggestionsFetcher:(WBSOfflineSearchSuggestionsFetcher *)arg1 didFindSuggestions:(NSArray *)arg2 forQuery:(WBSCompletionQuery *)arg3;

@end
