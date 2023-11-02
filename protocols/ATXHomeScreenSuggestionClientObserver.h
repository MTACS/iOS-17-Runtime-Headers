
@protocol ATXHomeScreenSuggestionClientObserver <NSObject>

@optional

- (void)suggestionClientDidRefreshProactiveWidgetLayouts:(ATXHomeScreenSuggestionClient *)arg1;
- (void)suggestionClientDidRefreshSuggestions:(ATXHomeScreenSuggestionClient *)arg1;

@end
