
@protocol CPSSafeAreaDelegate <NSObject>

@required

- (void)updateInterestingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)viewController:(UIViewController *)arg1 didUpdateSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end
