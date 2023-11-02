
@interface MRUImageUtilities : NSObject

+ (id)cache;
+ (void)clearCache;
+ (id)derivedSourceImageForImage:(id)arg1;
+ (id)formatImage:(id)arg1 forDisplayAtSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)formatImage:(id)arg1 withIdentifier:(id)arg2 forDisplayAtSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)formatImage:(id)arg1 withIdentifier:(id)arg2 forDisplayAtSize:(struct CGSize { double x1; double x2; })arg3 useCache:(bool)arg4;
+ (id)formattedImageForIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (bool)imageIsJPEG:(id)arg1;
+ (id)jpegDataForImage:(id)arg1;
+ (id)resizedImage:(id)arg1 forFittingSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)shouldResizeImage:(id)arg1 forFittingSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)shouldTranscodeImage:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeFromSource:(struct CGImageSource { }*)arg1;
+ (id)sourceDataForImage:(id)arg1;
+ (long long)subsampleFactorForMaxPixelSize:(long long)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;

@end
