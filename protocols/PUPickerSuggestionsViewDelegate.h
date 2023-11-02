
@protocol PUPickerSuggestionsViewDelegate

@required

- (void)pickerSuggestionsView:(PUPickerSuggestionsView *)arg1 didChangePreferredHeight:(double)arg2;
- (void)pickerSuggestionsView:(PUPickerSuggestionsView *)arg1 didSelectSuggestion:(NSObject<PUPickerSuggestion> *)arg2;
- (void)pickerSuggestionsViewDidSelectSameSuggestion:(PUPickerSuggestionsView *)arg1;

@end
