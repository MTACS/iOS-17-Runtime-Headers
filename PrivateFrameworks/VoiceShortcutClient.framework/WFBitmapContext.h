
@interface WFBitmapContext : NSObject {
    struct CGContext { } * _CGContext;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct CGContext { }*CGContext;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)HDRCapableContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
+ (id)contextWithDeviceScreenScaleAndSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)contextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
+ (id)contextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 flipped:(bool)arg3;
+ (id)currentContextWithScale:(double)arg1;

- (struct CGContext { }*)CGContext;
- (void)becomeCurrent;
- (void)dealloc;
- (id)image;
- (id)imageWithOrientation:(unsigned int)arg1;
- (id)initWithCGContext:(struct CGContext { }*)arg1 scale:(double)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 scale:(double)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 scale:(double)arg3 colorspace:(struct CGColorSpace { }*)arg4;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 scale:(double)arg3 colorspace:(struct CGColorSpace { }*)arg4 flipped:(bool)arg5;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 scale:(double)arg3 colorspace:(struct CGColorSpace { }*)arg4 flipped:(bool)arg5 hdrCapable:(bool)arg6;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 scale:(double)arg3 colorspace:(struct CGColorSpace { }*)arg4 hdrCapable:(bool)arg5;
- (void)resignCurrent;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
