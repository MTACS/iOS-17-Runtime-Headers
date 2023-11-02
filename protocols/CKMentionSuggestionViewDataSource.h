
@protocol CKMentionSuggestionViewDataSource <NSObject>

@required

- (unsigned long long)numberOfSuggestionsInSuggestionView:(CKMentionSuggestionView *)arg1 forSection:(unsigned long long)arg2;
- (CKEntity *)suggestionView:(CKMentionSuggestionView *)arg1 entityAtIndex:(unsigned long long)arg2;
- (NSIndexPath *)suggestionView:(CKMentionSuggestionView *)arg1 indexPathOfEntityWithIdentifier:(NSString *)arg2;

@end
