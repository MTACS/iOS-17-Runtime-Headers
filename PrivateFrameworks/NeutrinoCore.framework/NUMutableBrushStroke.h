
@interface NUMutableBrushStroke : NUBrushStroke

@property (nonatomic) float opacity;
@property (nonatomic) long long pressureMode;
@property (nonatomic) float radius;
@property (nonatomic) float softness;

- (void)appendPoint:(struct { float x1; float x2; float x3; })arg1;
- (void)appendPoints:(struct { float x1; float x2; float x3; }*)arg1 pointCount:(long long)arg2;
- (void)applyTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 clipRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg4 pressureMode:(long long)arg5;
- (id)points;

@end
