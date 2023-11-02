
@interface WAGradientProvider : NSObject

- (void)getTopColor:(id*)arg1 middleColor:(id*)arg2 bottomColor:(id*)arg3 gradientStopPoint:(double*)arg4 forCity:(id)arg5 date:(id)arg6;
- (id)gradientForConditionCode:(long long)arg1 isDay:(bool)arg2;
- (struct { float x1; float x2; float x3; float x4; })mixedColorsForIndex:(long long)arg1 solarHeight:(float)arg2 condition:(long long)arg3 latitude:(float)arg4;
- (struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; })mixedGradientForSunheight:(double)arg1 hourAngle:(double)arg2 condition:(long long)arg3 latitude:(float)arg4;

@end
