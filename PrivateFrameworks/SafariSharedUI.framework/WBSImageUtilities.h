
@interface WBSImageUtilities : NSObject

+ (id)_pixelDataForImage:(id)arg1;
+ (id)flatImage:(id)arg1 withColor:(id)arg2;
+ (id)handoffIconForDeviceType:(id)arg1;
+ (bool)image:(id)arg1 isEqualToImage:(id)arg2;
+ (struct CGSize { double x1; double x2; })imageSizeScalingSize:(struct CGSize { double x1; double x2; })arg1 proportionallyToFitSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)resizedImage:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)safari_CGImageTypes;
+ (bool)saveCGImage:(struct CGImage { }*)arg1 toFile:(id)arg2 options:(id)arg3;
+ (id)squareThumbnailImageFromImage:(id)arg1 thumbnailWidthInPixels:(double)arg2;

@end
