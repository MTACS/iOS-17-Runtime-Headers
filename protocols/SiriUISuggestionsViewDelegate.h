
@protocol SiriUISuggestionsViewDelegate <NSObject>

@optional

- (double)contentWidthForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (void)didShowSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (void)getNextSuggestionsForSuggestionsView:(void *)arg1 maxSuggestions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SiriUISuggestionsView *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSArray *)nextSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1 maxSuggestions:(unsigned long long)arg2;
- (double)statusBarHeightForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (double)statusViewHeightForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (void)suggestionsView:(SiriUISuggestionsView *)arg1 didHideVibrantView:(UIView *)arg2;
- (bool)suggestionsViewIsInTextInputMode:(SiriUISuggestionsView *)arg1;

@end
