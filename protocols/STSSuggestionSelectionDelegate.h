
@protocol STSSuggestionSelectionDelegate <NSObject>

@required

- (void)suggestionViewController:(STSSearchDropDownViewController *)arg1 didSelectSuggestion:(SFSearchSuggestion *)arg2 suggested:(bool)arg3;

@end
