
@protocol TVInterfaceCreating <NSObject>

@optional

- (NSURL *)URLForResource:(NSString *)arg1;
- (Class)collectionViewCellClassForElement:(TVViewElement *)arg1;
- (UIImage *)imageForResource:(NSString *)arg1;
- (UIViewController *)playerViewControllerForPlayer:(TVPlayer *)arg1;
- (UIViewController *)viewControllerForElement:(TVViewElement *)arg1 existingViewController:(UIViewController *)arg2;
- (UIView *)viewForElement:(TVViewElement *)arg1 existingView:(UIView *)arg2;

@end
