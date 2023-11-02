
@interface SBHFocusProxyView : UIView {
    double  _padding;
    UIView<SBHFocusProxyable> * _proxyableView;
}

@property (nonatomic, readonly) double padding;
@property (nonatomic, readonly) UIView<SBHFocusProxyable> *proxyableView;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithProxyableView:(id)arg1;
- (double)padding;
- (id)proxyableView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
