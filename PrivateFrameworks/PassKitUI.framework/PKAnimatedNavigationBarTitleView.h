
@interface PKAnimatedNavigationBarTitleView : UIView {
    UIView * _titleView;
    int  _viewState;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTitleView:(id)arg1 alpha:(double)arg2;
- (void)setTitleView:(id)arg1 animated:(bool)arg2;

@end
