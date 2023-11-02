
@protocol SPUIResultsViewDelegate <SearchUIResultsViewDelegate>

@required

- (bool)isActiveViewController:(UIViewController *)arg1;
- (void)willUpdateFromResultsWithHighlightedResult:(SFSearchResult *)arg1 viewController:(UIViewController *)arg2;

@optional

- (bool)optOutOfGoButton;

@end
