
@protocol SBTodayViewSpotlightPresenterDelegate <NSObject>

@required

- (UIViewController *)parentViewControllerForSpotlightPresenter:(SBTodayViewSpotlightPresenter *)arg1;
- (double)searchBarTopOffsetForSpotlightPresenter:(SBTodayViewSpotlightPresenter *)arg1;
- (bool)spotlightPresenterAllowsPullToSearch:(SBTodayViewSpotlightPresenter *)arg1;
- (void)spotlightPresenterDidDismissSpotlight:(SBTodayViewSpotlightPresenter *)arg1;
- (void)spotlightPresenterDidPresentSpotlight:(SBTodayViewSpotlightPresenter *)arg1;
- (void)spotlightPresenterSearchBarDidFocus:(SBTodayViewSpotlightPresenter *)arg1;
- (void)spotlightPresenterWillPresentSpotlight:(SBTodayViewSpotlightPresenter *)arg1;
- (double)todayViewControllerLocationForSpotlightPresenter:(SBTodayViewSpotlightPresenter *)arg1;

@end
