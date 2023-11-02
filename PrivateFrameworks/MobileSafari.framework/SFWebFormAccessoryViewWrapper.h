
@interface SFWebFormAccessoryViewWrapper : UIView {
    double  _bottomBarHeight;
    UIView * _webFormAccessoryView;
}

@property (nonatomic) double bottomBarHeight;

- (void).cxx_destruct;
- (double)bottomBarHeight;
- (id)initWithWebFormAccessoryView:(id)arg1 bottomBarHeight:(double)arg2;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBottomBarHeight:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
