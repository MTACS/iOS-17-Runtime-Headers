
@interface AXPIFingerUtilities : NSObject

+ (id)_points:(id)arg1 adjustedForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(struct CGPoint { double x1; double x2; })arg2 withinBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)defaultPinchLocationsAroundPoint:(struct CGPoint { double x1; double x2; })arg1 withinBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)fingerModelsForPointStrings:(id)arg1;
+ (unsigned long long)fingerShapeForCorner:(unsigned long long)arg1;
+ (bool)laserEnabled;
+ (id)pointStringsForFingerModels:(id)arg1;
+ (id)pointerAnimationSettings;
+ (id)pointerFiltersForLuminanceLevel:(unsigned long long)arg1;
+ (void)updateFirstLocation:(struct CGPoint { double x1; double x2; }*)arg1 secondLocation:(struct CGPoint { double x1; double x2; }*)arg2 forPinchWithRadiusDelta:(double)arg3 angleDelta:(double)arg4;

@end
