
@protocol MSDSearchResultViewControllerDelegate <NSObject>

@required

- (void)didAssignStore:(MSDStoreInfo *)arg1 forViewController:(MSDSearchResultViewController *)arg2;
- (void)didDeselectStore:(MSDStoreInfo *)arg1 forViewController:(MSDSearchResultViewController *)arg2;
- (void)didEnterSearchText:(NSString *)arg1 forViewController:(MSDSearchResultViewController *)arg2;
- (void)didSelectNoStoreForViewController:(MSDSearchResultViewController *)arg1;
- (void)didSelectStore:(MSDStoreInfo *)arg1 forViewController:(MSDSearchResultViewController *)arg2;

@optional

- (void)didDismissStoreListView:(MSDStoreInfoListViewController *)arg1 forViewController:(MSDSearchResultViewController *)arg2;

@end
