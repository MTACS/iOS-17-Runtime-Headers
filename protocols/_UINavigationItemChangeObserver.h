
@protocol _UINavigationItemChangeObserver <NSObject>

@required

- (void)navigationItem:(UINavigationItem *)arg1 appearance:(UINavigationBarAppearance *)arg2 categoriesChanged:(long long)arg3;
- (bool)navigationItemIsBackItem:(UINavigationItem *)arg1;
- (bool)navigationItemIsTopItem:(UINavigationItem *)arg1;
- (void)navigationItemSearchControllerReadyForDeferredAutomaticShowsScopeBar:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedBackButtonContent:(UINavigationItem *)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedBackgroundAppearance:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedBottomPalette:(UINavigationItem *)arg1 oldPalette:(_UINavigationBarPalette *)arg2;
- (void)navigationItemUpdatedCanvasView:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedContentLayout:(UINavigationItem *)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedLargeTitleContent:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedLeftBarButtonItems:(UINavigationItem *)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedPromptContent:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedRightBarButtonItems:(UINavigationItem *)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedScrollEdgeProgress:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedSearchController:(UINavigationItem *)arg1 oldSearchController:(UISearchController *)arg2;
- (void)navigationItemUpdatedTitleContent:(UINavigationItem *)arg1 animated:(bool)arg2;

@optional

- (void)navigationItemUpdatedAdditionalOverflowItems:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedCenterBarButtonItems:(UINavigationItem *)arg1 animated:(bool)arg2;
- (<UIPopoverPresentationControllerSourceItem> *)presentationSourceForContent:(long long)arg1 navigationItem:(UINavigationItem *)arg2;
- (bool)shouldSearchControllerDeferPresentationTransitionForNavigationItem:(UINavigationItem *)arg1;

@end
