
@interface _MKUIViewControllerRootView : UIView {
    UIViewController * _viewController;
}

@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
