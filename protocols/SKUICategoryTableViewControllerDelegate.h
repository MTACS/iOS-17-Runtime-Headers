
@protocol SKUICategoryTableViewControllerDelegate <NSObject>

@optional

- (void)categoryTableView:(SKUICategoryTableViewController *)arg1 didSelectCategory:(SKUICategory *)arg2;
- (NSString *)metricsPageContextForCategoryTableView:(SKUICategoryTableViewController *)arg1;

@end
