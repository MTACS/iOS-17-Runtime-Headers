
@protocol PUAccessoryTileViewControllerDelegate <NSObject>

@required

- (UIViewController<PUAccessoryContentViewController> *)accessoryTileViewControllerAccessoryViewController:(PUAccessoryTileViewController *)arg1;
- (UIViewController *)accessoryTileViewControllerHostViewController:(PUAccessoryTileViewController *)arg1;

@optional

- (bool)accessoryTileViewControllerShouldUseSquareImageWhenShowingAccessoryView:(PUAccessoryTileViewController *)arg1;
- (UIView *)accessoryTileViewControllerViewHostingGestureRecognizers:(PUAccessoryTileViewController *)arg1;
- (bool)accessoryTileViewControllerWillHideNavigationBarWhenShowingAccessoryView:(PUAccessoryTileViewController *)arg1;
- (bool)accessoryTileViewControllerWillHideToolbarWhenShowingAccessoryView:(PUAccessoryTileViewController *)arg1;

@end
