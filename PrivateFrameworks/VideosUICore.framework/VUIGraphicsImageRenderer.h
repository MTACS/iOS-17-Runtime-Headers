
@interface VUIGraphicsImageRenderer : NSObject

+ (void)SVGImagesWithDatas:(id)arg1 format:(id)arg2 completion:(id /* block */)arg3;
+ (id)_imageWithSize:(struct CGSize { double x1; double x2; })arg1 format:(id)arg2 actions:(id /* block */)arg3;
+ (id)decodedImage:(id)arg1 opaque:(bool)arg2;
+ (id)formatWithCGImage:(struct CGImage { }*)arg1;
+ (id)formatWithCGImage:(struct CGImage { }*)arg1 preferredFormat:(id)arg2;
+ (id)formatWithUIImage:(id)arg1;
+ (id)formatWithUIImage:(id)arg1 preferredFormat:(id)arg2;
+ (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 format:(id)arg2 actions:(id /* block */)arg3;
+ (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 format:(id)arg2 cgContextActions:(id /* block */)arg3;
+ (id)preferredFormat;

@end
