
@interface NUBrushRasterizer : NSObject

+ (long long)_rasterizeBrushStroke:(id)arg1 toROI:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 maskPtr:(char *)arg3 maskPtrRowBytes:(long long)arg4 close:(bool)arg5 startIndex:(long long)arg6 pressureMode:(long long)arg7;
+ (void)rasterizeBrushStroke:(id)arg1 atPoint:(struct { long long x1; long long x2; })arg2 toBuffer:(id)arg3;
+ (long long)rasterizeBrushStroke:(id)arg1 atPoint:(struct { long long x1; long long x2; })arg2 toBuffer:(id)arg3 close:(bool)arg4 startIndex:(long long)arg5;

@end
