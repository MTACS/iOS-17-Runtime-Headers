
@interface CNContactSuggestionAction : CNContactAction

- (bool)_confirmOrReject:(bool)arg1;
- (bool)confirmSuggestion;
- (bool)ignoreSuggestion;
- (void)performActionWithSender:(id)arg1;

@end
