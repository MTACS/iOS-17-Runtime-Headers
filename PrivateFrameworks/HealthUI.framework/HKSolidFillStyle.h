
@interface HKSolidFillStyle : HKFillStyle {
    UIColor * _color;
}

@property (nonatomic, copy) UIColor *color;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)renderPath:(struct CGPath { }*)arg1 context:(struct CGContext { }*)arg2 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 alpha:(double)arg4;
- (void)setColor:(id)arg1;

@end
