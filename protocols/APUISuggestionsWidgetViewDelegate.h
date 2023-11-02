
@protocol APUISuggestionsWidgetViewDelegate <NSObject>

@required

- (void)view:(APUISuggestionView *)arg1 didFailExecutingSuggestion:(ATXProactiveSuggestion *)arg2;
- (void)view:(APUISuggestionView *)arg1 didFinishExecutingSuggestion:(ATXProactiveSuggestion *)arg2;
- (void)view:(APUISuggestionView *)arg1 didTapSuggestion:(ATXProactiveSuggestion *)arg2;

@end
