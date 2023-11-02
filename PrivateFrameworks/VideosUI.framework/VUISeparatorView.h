
@interface VUISeparatorView : VUIBaseView {
    UIColor * _color;
    UIColor * _darkColor;
    UIView * _line;
    double  _lineHeight;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIColor *darkColor;
@property (nonatomic, retain) UIView *line;
@property (nonatomic) double lineHeight;

- (void).cxx_destruct;
- (void)_updateLineColor;
- (id)color;
- (id)darkColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)initializeVUISeparatorView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)line;
- (id)lineColor;
- (double)lineHeight;
- (void)setColor:(id)arg1;
- (void)setDarkColor:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setLineHeight:(double)arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
