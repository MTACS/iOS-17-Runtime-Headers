
@interface VideosUI.CountDownProgressView : UIView <CAAnimationDelegate> {
    void $__lazy_storage_$_imageView;
    void action;
    void circle;
    void duration;
    void image;
    void imageSymbolConfig;
    void imageTintColor;
    void isAnimating;
    void lineColor;
    void lineWidth;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
