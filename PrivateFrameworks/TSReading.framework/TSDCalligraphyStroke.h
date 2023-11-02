
@interface TSDCalligraphyStroke : TSDSmartStroke

@property (nonatomic, readonly) double angle;
@property (nonatomic, readonly) bool chisel;
@property (nonatomic, readonly) double scale;

+ (Class)mutableClass;

- (double)angle;
- (void)applyToContext:(struct CGContext { }*)arg1 insideStroke:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForPath:(id)arg1;
- (bool)canApplyToShapeRenderable;
- (bool)chisel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)drawsInOneStep;
- (bool)drawsOutsideStrokeBounds;
- (double)horizontalMarginForSwatch;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_superBoundsForPath:(id)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext { }*)arg5 useFastDrawing:(bool)arg6;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4 parameterized:(bool)arg5 shouldReverseDrawOrder:(bool)arg6;
- (bool)prefersToApplyToShapeRenderableDuringManipulation;
- (double)scale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformInContext:(struct CGContext { }*)arg1;

@end
