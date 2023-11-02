
@interface PUPlayheadView : UIView {
    UIView * _line;
    UIView * _outline;
    UIColor * _preferredHighlightColor;
}

@property (nonatomic, retain) UIColor *preferredHighlightColor;

- (void).cxx_destruct;
- (void)_updateLineColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredHighlightColor;
- (void)setPreferredHighlightColor:(id)arg1;
- (void)tintColorDidChange;

@end
