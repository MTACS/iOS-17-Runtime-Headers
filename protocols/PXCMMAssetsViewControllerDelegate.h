
@protocol PXCMMAssetsViewControllerDelegate <NSObject>

@required

- (void)assetsViewControllerDidTapActionButton:(PXCMMAssetsViewController *)arg1;
- (void)assetsViewControllerDidTapSendBackActionButton:(PXCMMAssetsViewController *)arg1;

@optional

- (void)didPerformDeletionActionForAssetsViewController:(PXCMMAssetsViewController *)arg1;
- (void)didTapAddMoreButtonForAssetsViewController:(PXCMMAssetsViewController *)arg1;
- (PXOneUpPresentation *)oneUpPresentationForAssetsViewController:(PXCMMAssetsViewController *)arg1;
- (bool)shouldShowAddMoreButtonForAssetsViewController:(PXCMMAssetsViewController *)arg1;

@end
