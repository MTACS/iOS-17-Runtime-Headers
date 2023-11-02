
@interface ATXActionToPSSuggestionConverter : NSObject

- (id)convertSuggestions:(id)arg1;
- (id)proactiveSuggestionForPeopleSuggestion:(id)arg1 originalSuggestion:(id)arg2;
- (id)psRecipientFromINPerson:(id)arg1;
- (id)psSuggesetionFromINStartCallIntent:(id)arg1;
- (id)psSuggestionFromINSendMessageIntent:(id)arg1;

@end
