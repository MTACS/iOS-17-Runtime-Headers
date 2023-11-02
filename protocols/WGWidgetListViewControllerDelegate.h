
@protocol WGWidgetListViewControllerDelegate <UIScrollViewDelegate>

@optional

- (void)editButtonTappedFromWidgetListViewController:(WGWidgetListViewController *)arg1;
- (MTMaterialView *)editingMaterialViewForWidgetListViewController:(WGWidgetListViewController *)arg1;
- (bool)isWidgetListViewControllerEditable:(WGWidgetListViewController *)arg1;
- (UIScrollView *)scrollViewForWidgetListViewController:(WGWidgetListViewController *)arg1;

@end
