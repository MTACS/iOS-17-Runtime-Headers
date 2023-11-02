
@protocol SFStartPageDelegate <NSObject>

@optional

- (void)startPageControllerDidCompleteDismissGesture:(SFStartPageViewController *)arg1;
- (void)startPageControllerDidCompleteUnfocusGesture:(SFStartPageViewController *)arg1;
- (NSArray *)startPageViewController:(SFStartPageViewController *)arg1 leadingBarItemsForSection:(WBSStartPageSection *)arg2;
- (NSArray *)startPageViewController:(SFStartPageViewController *)arg1 trailingBarItemsForSection:(WBSStartPageSection *)arg2;
- (void)startPageViewController:(SFStartPageViewController *)arg1 willPresentCustomizationViewController:(SFStartPageCustomizationViewController *)arg2;
- (void)startPageViewControllerDidAppear:(SFStartPageViewController *)arg1;
- (void)startPageViewControllerDidScroll:(SFStartPageViewController *)arg1 animated:(bool)arg2;
- (void)startPageViewControllerDidUpdateContent:(SFStartPageViewController *)arg1;
- (bool)startPageViewControllerShouldDeferLoadingContentUntilKeyboardAnimatesIn:(SFStartPageViewController *)arg1;
- (NSString *)startPageViewControllerTitleForRootView:(SFStartPageViewController *)arg1;
- (double)startPageViewControllerTopPadding:(SFStartPageViewController *)arg1;

@end
