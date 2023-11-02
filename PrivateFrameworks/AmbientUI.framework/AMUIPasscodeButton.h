
@interface AMUIPasscodeButton : UIControl {
    CABackdropLayer * _backdropLayer;
    UIView * _backdropView;
    UIView * _pillView;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) UIFont *font;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)font;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
