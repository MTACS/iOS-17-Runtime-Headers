
@protocol SUUICategoryTableViewControllerDelegate <NSObject>

@optional

- (void)categoryTableView:(SUUICategoryTableViewController *)arg1 didSelectCategory:(SUUICategory *)arg2;
- (NSString *)metricsPageContextForCategoryTableView:(SUUICategoryTableViewController *)arg1;

@end
