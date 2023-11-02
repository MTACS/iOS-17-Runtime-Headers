
@protocol BookmarksBarViewDelegate <NSObject>

@required

- (bool)isPrivateBrowsingEnabled;
- (void)setPrivateBrowsingEnabled:(bool)arg1;

@optional

- (void)bookmarksBarView:(BookmarksBarView *)arg1 bookmarksNavigationControllerViewDidAppear:(BookmarksNavigationController *)arg2;
- (void)bookmarksBarView:(BookmarksBarView *)arg1 bookmarksNavigationControllerViewDidDisappear:(BookmarksNavigationController *)arg2;
- (<TabGroupProvider> *)tabGroupProvider;

@end
