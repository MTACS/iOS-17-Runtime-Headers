
@protocol SGSuggestionPresenterDelegate <NSObject>

@required

- (void)suggestionPresenterWantsToHideBanner:(SGSuggestionPresenter *)arg1;
- (void)suggestionPresenterWantsToShowBanner:(SGSuggestionPresenter *)arg1;
- (UIViewController *)viewControllerForPresentingFromBannerByPresenter:(SGSuggestionPresenter *)arg1;

@optional

- (void)dismissAllSuggestions;
- (void)reloadSuggestionsFromSearchableItems;
- (id /* block */)suggestionCategoryComparatorForManager:(void *)arg1; // needs 1 arg types, found 7: id /* block */, id, id, void*, id, SEL, SGSuggestionPresenter *
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)suggestionPresenterDismissAllSuggestions:(NSArray *)arg1;

@end
