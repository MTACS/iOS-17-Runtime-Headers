
@interface SwiftUI.NotifyingMulticolumnSplitViewController : UISplitViewController

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;

+ (bool)_isFromSwiftUI;

- (id)childViewControllerForStatusBarHidden;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)makeDetailNavigationControllerWithRoot:(id)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;

@end
