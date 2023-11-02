
@interface WFLockView : UIView {
    UINavigationController * _belongedNavigationController;
    UIImageView * lockImage;
    UILabel * titleLabel;
}

@property (nonatomic, retain) UINavigationController *belongedNavigationController;

- (void).cxx_destruct;
- (id)belongedNavigationController;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 viewToCover:(id)arg2;
- (void)setBelongedNavigationController:(id)arg1;

@end
