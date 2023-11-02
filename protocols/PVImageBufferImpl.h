
@protocol PVImageBufferImpl <NSObject>

@required

- (bool)canCreateCVPixelBuffer;
- (bool)canCreateHGBitmap;
- (struct CGImage { }*)cgImage;
- (bool)cvPixelBufferRequiresCopy;
- (bool)cvPixelBufferRequiresRender;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer {} *x1; })cvPixelBufferWithColorSpace:(PVColorSpace *)arg1;
- (struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })hgBitmapWithColorSpace:(PVColorSpace *)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
