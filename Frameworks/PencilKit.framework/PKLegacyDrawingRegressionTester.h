
@interface PKLegacyDrawingRegressionTester : NSObject

+ (double)compareImage:(struct CGImage { }*)arg1 with:(struct CGImage { }*)arg2 drawing:(id)arg3;
+ (double)compareLegacyDrawingImage:(id)arg1 toConvertedDrawing:(id)arg2;
+ (double)compareLegacyDrawingImage:(id)arg1 toConvertedDrawing:(id)arg2 debugImagesDirectory:(id)arg3;
+ (struct CGImage { }*)createFilteredImageFromImage:(id)arg1 context:(id)arg2 filterRadius:(double)arg3;
+ (double)maxStdDevErrorFromResult:(struct { int x1[4]; int x2[4]; double x3[4]; double x4[4]; struct CGImage {} *x5; bool x6; })arg1;
+ (id)regressionTestDrawingPathForFile:(id)arg1 forClass:(Class)arg2;
+ (id)regressionTestImagePathForFile:(id)arg1 forClass:(Class)arg2;

@end
