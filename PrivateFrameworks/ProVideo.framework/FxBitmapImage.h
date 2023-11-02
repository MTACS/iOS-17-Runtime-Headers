
@interface FxBitmapImage : NSObject {
    struct FxBitmapImagePriv { id x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; int x4; struct CGColorSpace {} *x5; struct CGContext {} *x6; struct CGImage {} *x7; struct CGDataProvider {} *x8; } * _priv;
}

+ (id)bitmapWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 format:(int)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
+ (id)bitmapWithSize:(struct CGSize { double x1; double x2; })arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3;

- (void*)bytes;
- (unsigned long long)bytesPerRow;
- (struct CGContext { }*)cgContext;
- (struct CGImage { }*)cgImage;
- (struct CGColorSpace { }*)colorSpace;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 format:(int)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (int)pixelFormat;
- (struct CGSize { double x1; double x2; })size;

@end
