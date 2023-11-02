
@interface PVCVPixelBufferImageBufferImpl : NSObject <PVImageBufferImpl> {
    struct CGImage { } * _generatedCGImage;
    struct HGRef<HGCVPixelBuffer> { 
        struct HGCVPixelBuffer {} *m_Obj; 
    }  _pixelBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)canCreateCVPixelBuffer;
- (bool)canCreateHGBitmap;
- (struct CGImage { }*)cgImage;
- (bool)cvPixelBufferRequiresCopy;
- (bool)cvPixelBufferRequiresRender;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer {} *x1; })cvPixelBufferWithColorSpace:(id)arg1;
- (void)dealloc;
- (struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })hgBitmapWithColorSpace:(id)arg1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithHGCVPixelBuffer:(struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer {} *x1; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
