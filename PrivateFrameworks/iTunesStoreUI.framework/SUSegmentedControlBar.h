
@interface SUSegmentedControlBar : UIView {
    _UIBackdropView * _backdropView;
    UIControl * _control;
    UIView * _separatorView;
}

- (void)dealloc;
- (id)initWithSegmentedControl:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
