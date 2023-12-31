
@interface BPSThumbnailGenerator : NSObject

+ (id)scaledImageForImage:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
+ (bool)writeScaledCPBitmapForImage:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 withPath:(id)arg4;
+ (bool)writeScaledPNGForImage:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 withPath:(id)arg4;

@end
