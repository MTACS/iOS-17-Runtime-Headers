
@protocol STSSuggestionViewControllerDelegate <NSObject>

@required

- (void)suggestionViewController:(STSSuggestionViewController *)arg1 didSelectSuggestionAtIndex:(unsigned long long)arg2;
- (void)suggestionViewControllerDidTapLogo:(STSSuggestionViewController *)arg1;

@end
