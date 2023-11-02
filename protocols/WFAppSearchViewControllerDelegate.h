
@protocol WFAppSearchViewControllerDelegate <NSObject>

@required

- (void)appSearchViewControllerDidCancel:(WFAppSearchViewController *)arg1;

@optional

- (void)appSearchViewController:(WFAppSearchViewController *)arg1 didFinishWithApp:(LSApplicationProxy *)arg2;
- (void)appSearchViewController:(WFAppSearchViewController *)arg1 didFinishWithApps:(NSArray *)arg2;

@end
