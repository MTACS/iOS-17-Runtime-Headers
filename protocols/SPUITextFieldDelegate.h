
@protocol SPUITextFieldDelegate <UITextFieldDelegate>

@required

- (void)backButtonPressed;
- (void)commitSearch;
- (bool)currentlyPresentingWebEntity;
- (void)dictationButtonPressed;
- (void)enableDictationIfRequired;
- (void)escapeKeyPressed;
- (void)highlightResultAfterUnmarkingText;
- (bool)lastQueryKindSupportsOptionKey;
- (void)removeCompletionAndHighlightAsTyped:(bool)arg1;
- (void)returnKeyPressed;
- (void)switchToSuggestions;
- (void)textDidChange:(UITextField *)arg1;
- (void)textFieldDidReplaceTokensWithStringEquivalent:(UITextField *)arg1;
- (void)updateDictationButtonEnabledStatus;

@end
