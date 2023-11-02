
@interface PIRepairUtilities : NSObject

+ (bool)applyRepairMLStrokeToMutableBuffer:(id)arg1 brushStroke:(id)arg2 detectedFaces:(id)arg3 context:(id)arg4 error:(out id*)arg5;
+ (void)applyRepairStrokeToMutableBuffer:(id)arg1 brushStroke:(id)arg2 sourceOffset:(struct CGPoint { double x1; double x2; })arg3 repairEdges:(bool)arg4;
+ (id)brushStrokeFromRetouchStrokeDictionary:(id)arg1;
+ (void)calcExtentsForStrokeRadius:(double)arg1 offset:(struct { long long x1; long long x2; })arg2 inputImageExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 maskExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg4 repairExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; }*)arg5 textureExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; }*)arg6 sourceExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; }*)arg7;
+ (id)extractRGBAfPixelsFromImage:(id)arg1 fromROI:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;
+ (struct CGImage { }*)newWatchInfillFromImage:(struct CGImage { }*)arg1 mask:(struct CGImage { }*)arg2;
+ (id)prepareForCIFilterWithFaces:(id)arg1 cropRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;

@end
