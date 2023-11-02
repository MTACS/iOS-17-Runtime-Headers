
@protocol SPUISearchHeaderDelegate <NSObject>

@required

- (void)backButtonPressed;
- (void)cancelButtonPressed;
- (SPSearchQueryContext *)currentQueryContext;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (void)highlightResultAfterUnmarkingText;
- (void)queryContextDidChange:(SPSearchQueryContext *)arg1 fromSearchHeader:(SPUISearchHeader *)arg2 allowZKW:(bool)arg3;
- (void)removeCompletionAndHighlightAsTyped:(bool)arg1;
- (void)returnKeyPressed;

@end
