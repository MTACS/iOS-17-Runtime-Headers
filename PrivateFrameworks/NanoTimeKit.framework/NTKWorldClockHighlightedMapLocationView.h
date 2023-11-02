
@interface NTKWorldClockHighlightedMapLocationView : NTKWorldClockMapLocationView {
    UIColor * _fillColor;
    UIColor * _strokeColor;
    double  _strokeWidth;
}

@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fillColor:(id)arg2 strokeColor:(id)arg3 strokeWidth:(double)arg4;
- (void)setFillColor:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(double)arg1;
- (id)strokeColor;
- (double)strokeWidth;

@end
