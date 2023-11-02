
@interface PXOneSidedRegion : PXRegion {
    double  _a;
    double  _b;
    double  _c;
}

@property (nonatomic, readonly) double a;
@property (nonatomic, readonly) double b;
@property (nonatomic, readonly) double c;

+ (id)identityRegion;

- (bool)_getIntersectionWithLineFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 intersectionFromPoint:(struct CGPoint { double x1; double x2; }*)arg3 toPoint:(struct CGPoint { double x1; double x2; }*)arg4;
- (double)a;
- (double)b;
- (double)c;
- (struct CGPath { }*)createPathInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithA:(double)arg1 b:(double)arg2 c:(double)arg3;
- (id)initWithEdge:(unsigned int)arg1 tiltedInset:(struct { double x1; double x2; double x3; })arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithSideAngle:(double)arg1 point:(struct CGPoint { double x1; double x2; })arg2 width:(double)arg3 offset:(double)arg4;
- (bool)isEqual:(id)arg1;
- (id)transformedWithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (double)valueAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
