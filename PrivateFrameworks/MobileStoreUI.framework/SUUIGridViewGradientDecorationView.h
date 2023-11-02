
@interface SUUIGridViewGradientDecorationView : UICollectionReusableView {
    SUUIGridViewGradientDecorationBackgroundView * _backgroundView;
    IKColor * _kolor;
}

@property (nonatomic, readonly) UIView *backgroundView;

- (void).cxx_destruct;
- (void)_createGradient:(id)arg1 withGradientType:(long long)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (id)backgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
