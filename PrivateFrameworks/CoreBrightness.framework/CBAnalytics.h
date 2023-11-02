
@interface CBAnalytics : NSObject

+ (void)alsOcclusionsByProx:(long long)arg1 andByTouch:(long long)arg2 touchProx:(long long)arg3 none:(long long)arg4;
+ (void)alsSelectionDeltas:(const double*)arg1 count:(unsigned long long)arg2;
+ (void)alsSelectionSwaps:(unsigned long long)arg1;
+ (void)alsSelectionTimes:(const double*)arg1 count:(unsigned long long)arg2;
+ (void)autoBrightnessEnabled:(bool)arg1 byUser:(bool)arg2;
+ (void)autoBrightnessUserChange:(bool)arg1 lowPower:(bool)arg2;
+ (void)cuveLevel:(long long)arg1;
+ (void)deviceColor:(long long)arg1;
+ (void)displayMaxCurrent:(float)arg1;
+ (void)harmonyColor:(const struct ColorReport { struct { double x_1_1_1[17]; int x_1_1_2[17]; int x_1_1_3; unsigned long long x_1_1_4; } x1; struct { double x_2_1_1[17]; int x_2_1_2[17]; int x_2_1_3; unsigned long long x_2_1_4; } x2; struct { double x_3_1_1[46]; int x_3_1_2; unsigned long long x_3_1_3; } x3; struct BlueReductionReport { double x_4_1_1; double x_4_1_2; double x_4_1_3; bool x_4_1_4; float x_4_1_5; } x4; struct { double x_5_1_1[10]; int x_5_1_2; double x_5_1_3; } x5; struct { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; float x_6_1_5; float x_6_1_6; } x6; int x7; }*)arg1;
+ (void)harmonyEnabled:(bool)arg1 byUser:(bool)arg2;
+ (void)hdrSession:(bool)arg1;
+ (void)illuminanceHistogram:(id)arg1;
+ (void)luminanceHistogram:(id)arg1 withName:(id)arg2;
+ (void)nightShiftCCT:(long long)arg1;
+ (void)nightShiftEnabled:(bool)arg1 withOption:(int)arg2;
+ (void)nightShiftSunSchedulePermitted:(bool)arg1;
+ (void)send:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)sendBool:(id)arg1 withField:(const char *)arg2 andValue:(bool)arg3;
+ (void)sendInt:(id)arg1 withField:(const char *)arg2 andValue:(long long)arg3;
+ (void)sendSparseBins:(const double*)arg1 count:(long long)arg2 withName:(id)arg3;
+ (void)touchOcclusionElapsedDelay:(float)arg1;
+ (void)userSliderCommit:(const struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; } x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; float x22; int x23; bool x24; bool x25; }*)arg1;

@end
