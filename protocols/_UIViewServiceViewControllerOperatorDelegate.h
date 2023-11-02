
@protocol _UIViewServiceViewControllerOperatorDelegate <NSObject>

@optional

- (NSString *)containingViewControllerClassNameForViewControllerOperator:(_UIViewServiceViewControllerOperator *)arg1;
- (bool)isExtensionServiceViewControllerOperator:(_UIViewServiceViewControllerOperator *)arg1;
- (NSString *)mainStoryboardNameForViewControllerOperator:(_UIViewServiceViewControllerOperator *)arg1;
- (bool)requiresExtensionContextForViewControllerOperator:(_UIViewServiceViewControllerOperator *)arg1;
- (NSString *)viewControllerClassNameForViewControllerOperator:(_UIViewServiceViewControllerOperator *)arg1;
- (void)viewControllerOperator:(_UIViewServiceViewControllerOperator *)arg1 didCreateServiceViewController:(UIViewController *)arg2 contextToken:(NSUUID *)arg3;
- (void)viewControllerOperator:(_UIViewServiceViewControllerOperator *)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;

@end
