
@interface MRImageUtilities : NSObject

+ (struct CGSize { double x1; double x2; })imageDimensionsForImageData:(id)arg1 error:(id*)arg2;
+ (id)resizeImageData:(id)arg1 forFittingSize:(struct CGSize { double x1; double x2; })arg2 error:(id*)arg3;
+ (struct CGSize { double x1; double x2; })sizeFromSource:(struct CGImageSource { }*)arg1 error:(id*)arg2;
+ (long long)subsampleFactorForMaxPixelSize:(long long)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;

@end
