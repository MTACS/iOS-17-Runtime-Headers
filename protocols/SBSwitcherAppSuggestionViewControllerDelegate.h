
@protocol SBSwitcherAppSuggestionViewControllerDelegate <NSObject>

@required

- (long long)orientationForSuggestionViewController:(SBSwitcherAppSuggestionViewController *)arg1;
- (void)suggestionViewController:(SBSwitcherAppSuggestionViewController *)arg1 activatedSuggestion:(SBBestAppSuggestion *)arg2;

@end
