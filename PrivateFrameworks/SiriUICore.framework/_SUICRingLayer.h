
@interface _SUICRingLayer : CAShapeLayer {
    double  _customLineWidth;
}

@property (nonatomic) double customLineWidth;
@property (nonatomic, copy) UIColor *ringColor;

- (double)customLineWidth;
- (id)init;
- (id)ringColor;
- (void)setCustomLineWidth:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRingColor:(id)arg1;

@end
