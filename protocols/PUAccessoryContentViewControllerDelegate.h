
@protocol PUAccessoryContentViewControllerDelegate <NSObject>

@required

- (void)accessoryContentViewController:(id <PUAccessoryContentViewController>)arg1 editorHeightDidChange:(double)arg2;
- (void)accessoryContentViewControllerContentBoundsDidChange:(id <PUAccessoryContentViewController>)arg1;
- (UIView *)accessoryContentViewControllerViewHostingGestureRecognizers:(id <PUAccessoryContentViewController>)arg1;

@end
