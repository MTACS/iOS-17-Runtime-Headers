
@interface SBHorizontalScrollFailureTriangleView : UIView {
    UIColor * _contentColor;
    bool  _pointingRight;
    int  _style;
}

@property (nonatomic, retain) UIColor *contentColor;

- (void).cxx_destruct;
- (id)contentColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1 recognizer:(id)arg2 forPoint:(struct CGPoint { double x1; double x2; })arg3 withMaxVerticalOffset:(double)arg4 inView:(id)arg5 pointingRight:(bool)arg6;
- (void)setContentColor:(id)arg1;

@end
