
@interface MUPagingScrollContainerView : UIView {
    UIView<MUScrollViewProtocol> * _containedScrollView;
    UIView * _containedView;
    MUPagingScrollControlsView * _controlsView;
    long long  _cornerStyle;
}

@property (nonatomic) bool automaticallyFlipsForRTL;
@property (nonatomic) long long cornerStyle;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateCorner;
- (bool)automaticallyFlipsForRTL;
- (long long)cornerStyle;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithHorizontalScrollView:(id)arg1;
- (void)setAutomaticallyFlipsForRTL:(bool)arg1;
- (void)setCornerStyle:(long long)arg1;

@end
