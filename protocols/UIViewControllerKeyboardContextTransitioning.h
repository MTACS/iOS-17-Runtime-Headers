
@protocol UIViewControllerKeyboardContextTransitioning <NSObject>

@required

- (UIView *)fromKeyboard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fromKeyboardFrame;
- (<UIViewControllerContextTransitioning> *)mainContext;
- (UIView *)toKeyboard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })toKeyboardFrame;

@end
