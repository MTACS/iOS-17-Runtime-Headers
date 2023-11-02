
@protocol INImageSizeProvider <NSObject>

@required

+ (INImage *)downscaledPNGImageForImage:(INImage *)arg1 size:(struct { double x1; double x2; })arg2 error:(id*)arg3;
+ (struct { double x1; double x2; })imageSizeForImage:(INImage *)arg1;

@end
