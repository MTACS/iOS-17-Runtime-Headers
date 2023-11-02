
@protocol ACUIViewControllerAccountChangeObserver <NSObject>

@optional

- (void)viewController:(PSViewController *)arg1 didFinishRemovingAccountWithSuccess:(bool)arg2;
- (void)viewController:(PSViewController *)arg1 didFinishSavingAccountWithSuccess:(bool)arg2;

@end
