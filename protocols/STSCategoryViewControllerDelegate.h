
@protocol STSCategoryViewControllerDelegate <NSObject>

@required

- (void)categoryViewController:(STSCategoryViewController *)arg1 didSelectCategory:(NSString *)arg2 suggested:(bool)arg3;
- (void)categoryViewController:(STSCategoryViewController *)arg1 didSelectRecent:(NSString *)arg2;
- (void)categoryViewControllerDidSelectClearRecentsButton:(STSCategoryViewController *)arg1;
- (void)categoryViewControllerScrollViewWillBeginDragging:(STSCategoryViewController *)arg1;

@end
