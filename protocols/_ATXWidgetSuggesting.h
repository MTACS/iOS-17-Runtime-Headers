
@protocol _ATXWidgetSuggesting <NSObject>

@required

- (bool)containsIdenticalContentOfSuggestion:(ATXProactiveSuggestion *)arg1;
- (ATXProactiveSuggestion *)mainSuggestionInLayout;
- (_ATXHomeScreenStackState *)stack;
- (ATXSuggestionLayout *)suggestionLayout;
- (ATXHomeScreenWidgetIdentifiable *)widget;

@end
