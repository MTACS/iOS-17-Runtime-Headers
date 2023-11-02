
@protocol PUOneUpBarsControllerDelegate <PUBarsControllerDelegate>

@required

- (NSString *)backItemTitleForOneUpBarsController:(PUOneUpBarsController *)arg1;
- (PUMenuActionController *)oneUpBarsController:(PUOneUpBarsController *)arg1 createMenuActionControllerForManagerIfNeeded:(PXActionManager *)arg2;
- (bool)oneUpBarsControllerWantsActionsMenu:(PUOneUpBarsController *)arg1;

@optional

- (bool)oneUpBarsController:(PUOneUpBarsController *)arg1 canShowCommentsForAsset:(id <PUDisplayAsset>)arg2;
- (void)oneUpBarsController:(PUOneUpBarsController *)arg1 didTapPlayPauseButton:(bool)arg2;
- (bool)oneUpBarsController:(PUOneUpBarsController *)arg1 isDetailsAccessoryAvailableForAssetReference:(PUAssetReference *)arg2;
- (bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldHideNavigationBarWhenShowingAccessoryViewForAssetReference:(PUAssetReference *)arg2;
- (bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldHideStatusBarWhenShowingAccessoryViewForAssetReference:(PUAssetReference *)arg2;
- (bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(PUAssetReference *)arg2;
- (bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldTapBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (void)oneUpBarsController:(PUOneUpBarsController *)arg1 willExecuteActionPerformer:(PUAssetActionPerformer *)arg2;
- (void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsControllerDidTapTitle:(PUOneUpBarsController *)arg1;
- (bool)oneUpBarsControllerDismissPresentedViewController:(PUOneUpBarsController *)arg1;
- (bool)oneUpBarsControllerShouldAnimateViewControllerPresentation:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsControllerToggleCommentsVisibility:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsControllerToggleDetailsVisibility:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsControllerWillPresentActionsMenu:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: PUOneUpBarsController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
