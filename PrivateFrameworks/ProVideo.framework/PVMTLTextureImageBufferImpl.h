
@interface PVMTLTextureImageBufferImpl : NSObject <PVImageBufferImpl> {
    <MTLTexture> * _mtlTexture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canCreateCVPixelBuffer;
- (bool)canCreateHGBitmap;
- (struct CGImage { }*)cgImage;
- (bool)cvPixelBufferRequiresCopy;
- (bool)cvPixelBufferRequiresRender;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer {} *x1; })cvPixelBufferWithColorSpace:(id)arg1;
- (struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })hgBitmapWithColorSpace:(id)arg1;
- (id)initWithMTLTexture:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
