
@interface PKImageCompare : NSObject

+ (struct { int x1[4]; int x2[4]; double x3[4]; double x4[4]; struct CGImage {} *x5; bool x6; })compareImage:(struct CGImage { }*)arg1 toMasterImage:(struct CGImage { }*)arg2 filename:(id)arg3 differenceImageOutputPath:(id)arg4 diffWhite:(bool)arg5 stdDevThreshhold:(double)arg6;
+ (id)filterImage:(struct CGImage { }*)arg1;
+ (bool)saveImage:(struct CGImage { }*)arg1 toPath:(id)arg2;
+ (id)stringFromSize:(struct CGSize { double x1; double x2; })arg1;

@end
