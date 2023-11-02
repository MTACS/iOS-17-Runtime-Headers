
@protocol SBHPageManagementCellViewControllerDelegate

@required

- (UIView *)backgroundViewForSnapshotForPageManagementCellViewController:(SBHPageManagementCellViewController *)arg1;
- (bool)pageManagementCellViewControllerCanReceiveTap:(SBHPageManagementCellViewController *)arg1;
- (void)pageManagementCellViewControllerDidReceiveTap:(SBHPageManagementCellViewController *)arg1;
- (bool)pageManagementCellViewControllerShouldSuppressHighlight:(SBHPageManagementCellViewController *)arg1;

@end
