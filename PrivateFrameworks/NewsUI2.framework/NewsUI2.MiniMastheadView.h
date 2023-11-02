
@interface NewsUI2.MiniMastheadView : UIView <TUNavigationBarCompressible> {
    void titleView;
}

@property (nonatomic) bool accessibilityElementsHidden;
@property (nonatomic) double contentAlpha;

- (void).cxx_destruct;
- (bool)accessibilityElementsHidden;
- (double)contentAlpha;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityElementsHidden:(bool)arg1;
- (void)setContentAlpha:(double)arg1;

@end
