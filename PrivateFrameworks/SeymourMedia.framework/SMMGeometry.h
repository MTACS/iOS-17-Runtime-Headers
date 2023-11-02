
@interface SMMGeometry : NSObject

+ (double)ceilValue:(double)arg1 toScale:(double)arg2;
+ (double)ceilValue:(double)arg1 toScaleOfScreen:(id)arg2;
+ (double)ceilValue:(double)arg1 toScaleOfView:(id)arg2;
+ (double)floorValue:(double)arg1 toScale:(double)arg2;
+ (double)floorValue:(double)arg1 toScaleOfScreen:(id)arg2;
+ (double)floorValue:(double)arg1 toScaleOfView:(id)arg2;
+ (struct CGPoint { double x1; double x2; })getCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (double)roundValue:(double)arg1 toScale:(double)arg2;
+ (double)roundValue:(double)arg1 toScaleOfScreen:(id)arg2;
+ (double)roundValue:(double)arg1 toScaleOfView:(id)arg2;

@end
