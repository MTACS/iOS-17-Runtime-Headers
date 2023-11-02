
@interface SBPieChartView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    double  _defaultRotation;
    double  _radius;
    NSArray * _slices;
    double  _valueTotal;
}

- (void).cxx_destruct;
- (void)_drawSlice:(id)arg1 atValue:(double)arg2;
- (void)_rotateContext;
- (void)_updateMetrics;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSlices:(id)arg1;

@end
