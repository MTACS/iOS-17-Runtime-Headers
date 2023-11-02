
@protocol BookmarksPanelViewControllerDelegate <NSObject>

@optional

- (void)panelViewController:(UIViewController *)arg1 updateToolbarItemsAnimated:(bool)arg2;
- (void)panelViewControllerDidBeginEditing:(UIViewController *)arg1;
- (void)panelViewControllerDidEndEditing:(UIViewController *)arg1;
- (bool)panelViewControllerShouldTranslucentAppearance:(UIViewController *)arg1;
- (bool)panelViewControllerShouldUseSearchControllerInNavigationItem:(UIViewController *)arg1;
- (void)setPinnedPaletteForPanelViewController:(UIViewController *)arg1;

@end
