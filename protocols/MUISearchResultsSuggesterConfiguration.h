
@protocol MUISearchResultsSuggesterConfiguration <NSObject>

@required

- (NSArray *)categories;
- (NSArray *)fetchAttributes;
- (NSString *)logIdentifier;
- (unsigned long long)maxItemCount;
- (NSArray *)processSuggestionsResults:(NSArray *)arg1 phraseManager:(MUISearchSuggestionPhraseManager *)arg2 messageList:(EMMessageList *)arg3;
- (NSString *)suggestionFilterQueryWithPhraseManager:(MUISearchSuggestionPhraseManager *)arg1 senderFilterQuery:(NSString *)arg2;

@end
