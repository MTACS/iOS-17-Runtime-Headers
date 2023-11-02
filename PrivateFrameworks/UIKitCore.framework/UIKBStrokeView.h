
@interface UIKBStrokeView : UIView {
    NSMutableArray * _points;
}

- (void).cxx_destruct;
- (void)addStrokePoint:(struct CGPoint { double x1; double x2; })arg1 withTimestamp:(double)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)resetStrokePoints;

@end
