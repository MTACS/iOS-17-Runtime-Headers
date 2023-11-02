
@interface QL_UIBezierPath : NSObject {
    struct CGPath { } * _CGPath;
    double  _lineWidth;
}

@property (nonatomic) struct CGPath { }*CGPath;
@property (nonatomic) double lineWidth;

+ (id)_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadii:(id)arg3 segments:(int)arg4 smoothPillShapes:(bool)arg5;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(struct CGSize { double x1; double x2; })arg3 segments:(int)arg4;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 segments:(int)arg4 legacyCorners:(bool)arg5;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;

- (struct CGPath { }*)CGPath;
- (id)_initWithCGMutablePath:(struct CGPath { }*)arg1;
- (double)lineWidth;
- (void)setCGPath:(struct CGPath { }*)arg1;
- (void)setLineWidth:(double)arg1;

@end
