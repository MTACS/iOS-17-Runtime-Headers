
@interface SXImageDecodingTools : NSObject

+ (id)sharedInstance;

- (struct CGColorSpace { }*)P3ColorSpace;
- (struct CGColorSpace { }*)RGBColorSpace;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct __CFString { }*)contentTypeForImageData:(id)arg1;
- (bool)dataIsAnimatedImage:(id)arg1;
- (id)decodeImage:(struct CGImage { }*)arg1;
- (id)imageFromData:(id)arg1;
- (id)imageFromData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)loadAnimatedImageFromImageData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (struct CGImage { }*)newImageByDecodingImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;

@end
