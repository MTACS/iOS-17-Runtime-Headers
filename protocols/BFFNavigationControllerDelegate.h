
@protocol BFFNavigationControllerDelegate <UINavigationControllerDelegate>

@optional

- (void)navigationController:(BFFNavigationController *)arg1 didShowViewController:(UIViewController *)arg2 operation:(long long)arg3 animated:(bool)arg4;
- (void)navigationController:(BFFNavigationController *)arg1 willShowViewController:(UIViewController *)arg2 operation:(long long)arg3 animated:(bool)arg4;

@end
