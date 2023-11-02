
@protocol AKToolsListViewControllerDelegate <NSObject>

@required

- (void)toolsList:(AKToolsListViewController *)arg1 didSelectToolWithTag:(long long)arg2;
- (void)toolsListDidSelectOpacityItem:(AKToolsListViewController *)arg1;

@end
