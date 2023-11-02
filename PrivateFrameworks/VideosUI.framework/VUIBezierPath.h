
@interface VUIBezierPath : UIBezierPath

@property (nonatomic) struct CGPath { }*vuiCGPath;

+ (id)vui_bezierPathWithArcCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5;
+ (id)vui_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radius:(double)arg2;

- (void)setVuiCGPath:(struct CGPath { }*)arg1;
- (struct CGPath { }*)vuiCGPath;

@end
