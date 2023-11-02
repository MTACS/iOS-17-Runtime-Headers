
@protocol PREditingColorItemsViewControllerDelegate

@required

- (void)colorItemsViewController:(PREditingColorItemsViewController *)arg1 didSelectColorItem:(PREditingColorItem *)arg2;
- (void)colorItemsViewController:(PREditingColorItemsViewController *)arg1 didTapToResetColorItem:(PREditingColorItem *)arg2;
- (void)colorItemsViewControllerDidUpdateEstimatedSize:(PREditingColorItemsViewController *)arg1;

@end
