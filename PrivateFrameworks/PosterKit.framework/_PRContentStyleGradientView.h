
@interface _PRContentStyleGradientView : UIView {
    CAGradientLayer * _gradientLayer;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setColors:(id)arg1 locations:(id)arg2 type:(id)arg3;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
